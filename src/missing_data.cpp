#include <RcppArmadillo.h>
#include <cmath>
#include "distances.h"
#include "misc.h"

// [[Rcpp::depends(RcppArmadillo)]]


arma::vec propose_augmentation(const arma::vec& ranks, const arma::vec& indicator){
  int n_items = ranks.n_elem;

  // Defining a number of helper variables
  arma::uvec ranked_inds = arma::find(indicator == 0);
  arma::uvec taken_ranks = arma::conv_to<arma::uvec>::from(ranks).elem(ranked_inds);
  arma::uvec all_ranks = arma::regspace<arma::uvec>(1, 1, n_items);
  arma::uvec all_inds = arma::regspace<arma::uvec>(0, 1, n_items - 1);

  // Find the available ranks
  arma::uvec available_ranks = std_setdiff(all_ranks, taken_ranks);
  arma::uvec available_inds = std_setdiff(all_inds, ranked_inds);

  // Adding randomness with shuffle
  arma::vec proposal = ranks;
  proposal(available_inds) = arma::shuffle(arma::conv_to<arma::vec>::from(available_ranks));

  return proposal;


}


void initialize_missing_ranks(arma::mat& rankings, const arma::mat& missing_indicator,
                              const arma::vec& assessor_missing) {

  int n_assessors = rankings.n_cols;

  for(int i = 0; i < n_assessors; ++i){
    if(assessor_missing(i) == 0) {
      continue;
    } else {
      rankings.col(i) = propose_augmentation(rankings.col(i), missing_indicator.col(i));
    }
  }
}

void update_missing_ranks(arma::mat& rankings, const arma::uvec& current_cluster_assignment,
                          arma::vec& aug_acceptance,
                          const arma::mat& missing_indicator,
                          const arma::vec& assessor_missing,
                          const arma::vec& alpha, const arma::mat& rho,
                          const std::string& metric,
                          bool& augmentation_accepted){

  int n_items = rankings.n_rows;
  int n_assessors = rankings.n_cols;

  for(int i = 0; i < n_assessors; ++i){
    if(assessor_missing(i) == 0){
      ++aug_acceptance(i);
      continue;
    }

    // Sample an augmentation proposal
    arma::vec proposal = propose_augmentation(rankings.col(i), missing_indicator.col(i));

    // Draw a uniform random number
    double u = std::log(arma::randu<double>());

    // Find which cluster the assessor belongs to
    int cluster = current_cluster_assignment(i);

    double ratio = -alpha(cluster) / n_items *
      (get_rank_distance(proposal, rho.col(cluster), metric) -
      get_rank_distance(rankings.col(i), rho.col(cluster), metric));

    if(ratio > u){
      rankings.col(i) = proposal;
      ++aug_acceptance(i);
      augmentation_accepted = true;
    } else {
      augmentation_accepted = false;
    }
  }
}
