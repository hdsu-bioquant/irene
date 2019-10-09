#include <Rcpp.h>

using namespace Rcpp;

List dPCA_main_impl(int nGroupNum, int nDatasetNum, int nSampleNum, int nPaired, int nLociNum, IntegerVector groupId, IntegerVector datasetId, NumericMatrix repNum, StringVector sampleName, StringVector lociChr, IntegerVector lociStart, IntegerVector lociEnd, NumericMatrix vdata, int nTransform, int nColMeanCent, int nColStand, int nMColMeanCent, int nMColStand, double dSNRCut, int nUsedPCAZ, int nUseRB, double dPeakFDRCut);
RcppExport SEXP irene_dPCA_main_impl(SEXP nGroupNumSEXP, SEXP nDatasetNumSEXP, SEXP nSampleNumSEXP, SEXP nPairedSEXP, SEXP nLociNumSEXP, SEXP groupIdSEXP, SEXP datasetIdSEXP, SEXP repNumSEXP, SEXP sampleNameSEXP, SEXP lociChrSEXP, SEXP lociStartSEXP, SEXP lociEndSEXP, SEXP vdataSEXP, SEXP nTransformSEXP, SEXP nColMeanCentSEXP, SEXP nColStandSEXP, SEXP nMColMeanCentSEXP, SEXP nMColStandSEXP, SEXP dSNRCutSEXP, SEXP nUsedPCAZSEXP, SEXP nUseRBSEXP, SEXP dPeakFDRCutSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nGroupNum(nGroupNumSEXP);
    Rcpp::traits::input_parameter< int >::type nDatasetNum(nDatasetNumSEXP);
    Rcpp::traits::input_parameter< int >::type nSampleNum(nSampleNumSEXP);
    Rcpp::traits::input_parameter< int >::type nPaired(nPairedSEXP);
    Rcpp::traits::input_parameter< int >::type nLociNum(nLociNumSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type groupId(groupIdSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type datasetId(datasetIdSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type repNum(repNumSEXP);
    Rcpp::traits::input_parameter< StringVector >::type sampleName(sampleNameSEXP);
    Rcpp::traits::input_parameter< StringVector >::type lociChr(lociChrSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type lociStart(lociStartSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type lociEnd(lociEndSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type vdata(vdataSEXP);
    Rcpp::traits::input_parameter< int >::type nTransform(nTransformSEXP);
    Rcpp::traits::input_parameter< int >::type nColMeanCent(nColMeanCentSEXP);
    Rcpp::traits::input_parameter< int >::type nColStand(nColStandSEXP);
    Rcpp::traits::input_parameter< int >::type nMColMeanCent(nMColMeanCentSEXP);
    Rcpp::traits::input_parameter< int >::type nMColStand(nMColStandSEXP);
    Rcpp::traits::input_parameter< double >::type dSNRCut(dSNRCutSEXP);
    Rcpp::traits::input_parameter< int >::type nUsedPCAZ(nUsedPCAZSEXP);
    Rcpp::traits::input_parameter< int >::type nUseRB(nUseRBSEXP);
    Rcpp::traits::input_parameter< double >::type dPeakFDRCut(dPeakFDRCutSEXP);
    rcpp_result_gen = Rcpp::wrap(dPCA_main_impl(nGroupNum, nDatasetNum, nSampleNum, nPaired, nLociNum, groupId, datasetId, repNum, sampleName, lociChr, lociStart, lociEnd, vdata, nTransform, nColMeanCent, nColStand, nMColMeanCent, nMColStand, dSNRCut, nUsedPCAZ, nUseRB, dPeakFDRCut));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"irene_dPCA_main_impl", (DL_FUNC) &irene_dPCA_main_impl, 22},
    {NULL, NULL, 0}
};

RcppExport void R_init_irene(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
