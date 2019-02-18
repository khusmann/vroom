// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// force_materialization
void force_materialization(SEXP x);
RcppExport SEXP _vroom_force_materialization(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    force_materialization(x);
    return R_NilValue;
END_RCPP
}
// vroom_
SEXP vroom_(List inputs, SEXP delim, const char quote, bool trim_ws, bool escape_double, bool escape_backslash, const char comment, RObject col_names, RObject col_types, size_t skip, CharacterVector na, size_t num_threads, bool progress);
RcppExport SEXP _vroom_vroom_(SEXP inputsSEXP, SEXP delimSEXP, SEXP quoteSEXP, SEXP trim_wsSEXP, SEXP escape_doubleSEXP, SEXP escape_backslashSEXP, SEXP commentSEXP, SEXP col_namesSEXP, SEXP col_typesSEXP, SEXP skipSEXP, SEXP naSEXP, SEXP num_threadsSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type inputs(inputsSEXP);
    Rcpp::traits::input_parameter< SEXP >::type delim(delimSEXP);
    Rcpp::traits::input_parameter< const char >::type quote(quoteSEXP);
    Rcpp::traits::input_parameter< bool >::type trim_ws(trim_wsSEXP);
    Rcpp::traits::input_parameter< bool >::type escape_double(escape_doubleSEXP);
    Rcpp::traits::input_parameter< bool >::type escape_backslash(escape_backslashSEXP);
    Rcpp::traits::input_parameter< const char >::type comment(commentSEXP);
    Rcpp::traits::input_parameter< RObject >::type col_names(col_namesSEXP);
    Rcpp::traits::input_parameter< RObject >::type col_types(col_typesSEXP);
    Rcpp::traits::input_parameter< size_t >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type na(naSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(vroom_(inputs, delim, quote, trim_ws, escape_double, escape_backslash, comment, col_names, col_types, skip, na, num_threads, progress));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_vroom_force_materialization", (DL_FUNC) &_vroom_force_materialization, 1},
    {"_vroom_vroom_", (DL_FUNC) &_vroom_vroom_, 13},
    {NULL, NULL, 0}
};

void init_vroom_factor(DllInfo* dll);
void init_vroom_real(DllInfo* dll);
void init_vroom_int(DllInfo* dll);
void init_vroom_string(DllInfo* dll);
RcppExport void R_init_vroom(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
    init_vroom_factor(dll);
    init_vroom_real(dll);
    init_vroom_int(dll);
    init_vroom_string(dll);
}
