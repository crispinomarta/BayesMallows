// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// get_rank_distance
double get_rank_distance(arma::vec r1, arma::vec r2, std::string metric);
RcppExport SEXP _BayesMallows_get_rank_distance(SEXP r1SEXP, SEXP r2SEXP, SEXP metricSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type r1(r1SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type r2(r2SEXP);
    Rcpp::traits::input_parameter< std::string >::type metric(metricSEXP);
    rcpp_result_gen = Rcpp::wrap(get_rank_distance(r1, r2, metric));
    return rcpp_result_gen;
END_RCPP
}
// compute_importance_sampling_estimate
arma::vec compute_importance_sampling_estimate(arma::vec alpha_vector, int n_items, std::string metric, int nmc);
RcppExport SEXP _BayesMallows_compute_importance_sampling_estimate(SEXP alpha_vectorSEXP, SEXP n_itemsSEXP, SEXP metricSEXP, SEXP nmcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type alpha_vector(alpha_vectorSEXP);
    Rcpp::traits::input_parameter< int >::type n_items(n_itemsSEXP);
    Rcpp::traits::input_parameter< std::string >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< int >::type nmc(nmcSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_importance_sampling_estimate(alpha_vector, n_items, metric, nmc));
    return rcpp_result_gen;
END_RCPP
}
// factorial
int factorial(int n);
RcppExport SEXP _BayesMallows_factorial(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(factorial(n));
    return rcpp_result_gen;
END_RCPP
}
// binomial_coefficient
int binomial_coefficient(int n, int k);
RcppExport SEXP _BayesMallows_binomial_coefficient(SEXP nSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(binomial_coefficient(n, k));
    return rcpp_result_gen;
END_RCPP
}
// sample_int
int sample_int(const arma::rowvec& probs);
RcppExport SEXP _BayesMallows_sample_int(SEXP probsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::rowvec& >::type probs(probsSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_int(probs));
    return rcpp_result_gen;
END_RCPP
}
// get_partition_function
double get_partition_function(int n_items, double alpha, const Rcpp::Nullable<arma::vec> cardinalities, const Rcpp::Nullable<arma::vec> logz_estimate, std::string metric);
RcppExport SEXP _BayesMallows_get_partition_function(SEXP n_itemsSEXP, SEXP alphaSEXP, SEXP cardinalitiesSEXP, SEXP logz_estimateSEXP, SEXP metricSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n_items(n_itemsSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<arma::vec> >::type cardinalities(cardinalitiesSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Nullable<arma::vec> >::type logz_estimate(logz_estimateSEXP);
    Rcpp::traits::input_parameter< std::string >::type metric(metricSEXP);
    rcpp_result_gen = Rcpp::wrap(get_partition_function(n_items, alpha, cardinalities, logz_estimate, metric));
    return rcpp_result_gen;
END_RCPP
}
// asymptotic_partition_function
arma::vec asymptotic_partition_function(arma::vec alpha_vector, int n_items, std::string metric, int K, int n_iterations);
RcppExport SEXP _BayesMallows_asymptotic_partition_function(SEXP alpha_vectorSEXP, SEXP n_itemsSEXP, SEXP metricSEXP, SEXP KSEXP, SEXP n_iterationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type alpha_vector(alpha_vectorSEXP);
    Rcpp::traits::input_parameter< int >::type n_items(n_itemsSEXP);
    Rcpp::traits::input_parameter< std::string >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type n_iterations(n_iterationsSEXP);
    rcpp_result_gen = Rcpp::wrap(asymptotic_partition_function(alpha_vector, n_items, metric, K, n_iterations));
    return rcpp_result_gen;
END_RCPP
}
// rmallows
arma::mat rmallows(arma::vec rho0, double alpha0, int n_samples, int burnin, int thinning, int leap_size, std::string metric);
RcppExport SEXP _BayesMallows_rmallows(SEXP rho0SEXP, SEXP alpha0SEXP, SEXP n_samplesSEXP, SEXP burninSEXP, SEXP thinningSEXP, SEXP leap_sizeSEXP, SEXP metricSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type rho0(rho0SEXP);
    Rcpp::traits::input_parameter< double >::type alpha0(alpha0SEXP);
    Rcpp::traits::input_parameter< int >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< int >::type thinning(thinningSEXP);
    Rcpp::traits::input_parameter< int >::type leap_size(leap_sizeSEXP);
    Rcpp::traits::input_parameter< std::string >::type metric(metricSEXP);
    rcpp_result_gen = Rcpp::wrap(rmallows(rho0, alpha0, n_samples, burnin, thinning, leap_size, metric));
    return rcpp_result_gen;
END_RCPP
}
// run_mcmc
Rcpp::List run_mcmc(arma::mat rankings, int nmc, Rcpp::List constraints, Rcpp::Nullable<arma::vec> cardinalities, Rcpp::Nullable<arma::vec> logz_estimate, Rcpp::Nullable<arma::mat> rho_init, std::string metric, std::string error_model, int n_clusters, bool include_wcd, int leap_size, double alpha_prop_sd, double alpha_init, int alpha_jump, double lambda, int psi, int rho_thinning, int aug_thinning, int clus_thin, bool save_aug, bool verbose, double kappa_1, double kappa_2);
RcppExport SEXP _BayesMallows_run_mcmc(SEXP rankingsSEXP, SEXP nmcSEXP, SEXP constraintsSEXP, SEXP cardinalitiesSEXP, SEXP logz_estimateSEXP, SEXP rho_initSEXP, SEXP metricSEXP, SEXP error_modelSEXP, SEXP n_clustersSEXP, SEXP include_wcdSEXP, SEXP leap_sizeSEXP, SEXP alpha_prop_sdSEXP, SEXP alpha_initSEXP, SEXP alpha_jumpSEXP, SEXP lambdaSEXP, SEXP psiSEXP, SEXP rho_thinningSEXP, SEXP aug_thinningSEXP, SEXP clus_thinSEXP, SEXP save_augSEXP, SEXP verboseSEXP, SEXP kappa_1SEXP, SEXP kappa_2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type rankings(rankingsSEXP);
    Rcpp::traits::input_parameter< int >::type nmc(nmcSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type constraints(constraintsSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<arma::vec> >::type cardinalities(cardinalitiesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<arma::vec> >::type logz_estimate(logz_estimateSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<arma::mat> >::type rho_init(rho_initSEXP);
    Rcpp::traits::input_parameter< std::string >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< std::string >::type error_model(error_modelSEXP);
    Rcpp::traits::input_parameter< int >::type n_clusters(n_clustersSEXP);
    Rcpp::traits::input_parameter< bool >::type include_wcd(include_wcdSEXP);
    Rcpp::traits::input_parameter< int >::type leap_size(leap_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_prop_sd(alpha_prop_sdSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_init(alpha_initSEXP);
    Rcpp::traits::input_parameter< int >::type alpha_jump(alpha_jumpSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type psi(psiSEXP);
    Rcpp::traits::input_parameter< int >::type rho_thinning(rho_thinningSEXP);
    Rcpp::traits::input_parameter< int >::type aug_thinning(aug_thinningSEXP);
    Rcpp::traits::input_parameter< int >::type clus_thin(clus_thinSEXP);
    Rcpp::traits::input_parameter< bool >::type save_aug(save_augSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< double >::type kappa_1(kappa_1SEXP);
    Rcpp::traits::input_parameter< double >::type kappa_2(kappa_2SEXP);
    rcpp_result_gen = Rcpp::wrap(run_mcmc(rankings, nmc, constraints, cardinalities, logz_estimate, rho_init, metric, error_model, n_clusters, include_wcd, leap_size, alpha_prop_sd, alpha_init, alpha_jump, lambda, psi, rho_thinning, aug_thinning, clus_thin, save_aug, verbose, kappa_1, kappa_2));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BayesMallows_get_rank_distance", (DL_FUNC) &_BayesMallows_get_rank_distance, 3},
    {"_BayesMallows_compute_importance_sampling_estimate", (DL_FUNC) &_BayesMallows_compute_importance_sampling_estimate, 4},
    {"_BayesMallows_factorial", (DL_FUNC) &_BayesMallows_factorial, 1},
    {"_BayesMallows_binomial_coefficient", (DL_FUNC) &_BayesMallows_binomial_coefficient, 2},
    {"_BayesMallows_sample_int", (DL_FUNC) &_BayesMallows_sample_int, 1},
    {"_BayesMallows_get_partition_function", (DL_FUNC) &_BayesMallows_get_partition_function, 5},
    {"_BayesMallows_asymptotic_partition_function", (DL_FUNC) &_BayesMallows_asymptotic_partition_function, 5},
    {"_BayesMallows_rmallows", (DL_FUNC) &_BayesMallows_rmallows, 7},
    {"_BayesMallows_run_mcmc", (DL_FUNC) &_BayesMallows_run_mcmc, 23},
    {NULL, NULL, 0}
};

RcppExport void R_init_BayesMallows(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
