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
// vroom_materialize
void vroom_materialize(Rcpp::List x);
RcppExport SEXP _vroom_vroom_materialize(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type x(xSEXP);
    vroom_materialize(x);
    return R_NilValue;
END_RCPP
}
// vroom_str_
std::string vroom_str_(RObject x);
RcppExport SEXP _vroom_vroom_str_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(vroom_str_(x));
    return rcpp_result_gen;
END_RCPP
}
// gen_character_
CharacterVector gen_character_(int n, int min, int max, std::string values);
RcppExport SEXP _vroom_gen_character_(SEXP nSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type min(minSEXP);
    Rcpp::traits::input_parameter< int >::type max(maxSEXP);
    Rcpp::traits::input_parameter< std::string >::type values(valuesSEXP);
    rcpp_result_gen = Rcpp::wrap(gen_character_(n, min, max, values));
    return rcpp_result_gen;
END_RCPP
}
// guess_type_
std::string guess_type_(CharacterVector input, List locale, bool guess_integer);
RcppExport SEXP _vroom_guess_type_(SEXP inputSEXP, SEXP localeSEXP, SEXP guess_integerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type input(inputSEXP);
    Rcpp::traits::input_parameter< List >::type locale(localeSEXP);
    Rcpp::traits::input_parameter< bool >::type guess_integer(guess_integerSEXP);
    rcpp_result_gen = Rcpp::wrap(guess_type_(input, locale, guess_integer));
    return rcpp_result_gen;
END_RCPP
}
// vroom_
SEXP vroom_(List inputs, SEXP delim, const char quote, bool trim_ws, bool escape_double, bool escape_backslash, const char comment, size_t skip, size_t n_max, bool progress, RObject col_names, RObject col_types, RObject col_select, SEXP id, CharacterVector na, List locale, size_t guess_max, size_t num_threads, size_t altrep_opts);
RcppExport SEXP _vroom_vroom_(SEXP inputsSEXP, SEXP delimSEXP, SEXP quoteSEXP, SEXP trim_wsSEXP, SEXP escape_doubleSEXP, SEXP escape_backslashSEXP, SEXP commentSEXP, SEXP skipSEXP, SEXP n_maxSEXP, SEXP progressSEXP, SEXP col_namesSEXP, SEXP col_typesSEXP, SEXP col_selectSEXP, SEXP idSEXP, SEXP naSEXP, SEXP localeSEXP, SEXP guess_maxSEXP, SEXP num_threadsSEXP, SEXP altrep_optsSEXP) {
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
    Rcpp::traits::input_parameter< size_t >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< size_t >::type n_max(n_maxSEXP);
    Rcpp::traits::input_parameter< bool >::type progress(progressSEXP);
    Rcpp::traits::input_parameter< RObject >::type col_names(col_namesSEXP);
    Rcpp::traits::input_parameter< RObject >::type col_types(col_typesSEXP);
    Rcpp::traits::input_parameter< RObject >::type col_select(col_selectSEXP);
    Rcpp::traits::input_parameter< SEXP >::type id(idSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type na(naSEXP);
    Rcpp::traits::input_parameter< List >::type locale(localeSEXP);
    Rcpp::traits::input_parameter< size_t >::type guess_max(guess_maxSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< size_t >::type altrep_opts(altrep_optsSEXP);
    rcpp_result_gen = Rcpp::wrap(vroom_(inputs, delim, quote, trim_ws, escape_double, escape_backslash, comment, skip, n_max, progress, col_names, col_types, col_select, id, na, locale, guess_max, num_threads, altrep_opts));
    return rcpp_result_gen;
END_RCPP
}
// vroom_fwf_
List vroom_fwf_(List inputs, std::vector<int> col_starts, std::vector<int> col_ends, bool trim_ws, RObject col_names, RObject col_types, RObject col_select, size_t skip, const char comment, size_t n_max, SEXP id, CharacterVector na, List locale, size_t guess_max, size_t num_threads, size_t altrep_opts, bool progress);
RcppExport SEXP _vroom_vroom_fwf_(SEXP inputsSEXP, SEXP col_startsSEXP, SEXP col_endsSEXP, SEXP trim_wsSEXP, SEXP col_namesSEXP, SEXP col_typesSEXP, SEXP col_selectSEXP, SEXP skipSEXP, SEXP commentSEXP, SEXP n_maxSEXP, SEXP idSEXP, SEXP naSEXP, SEXP localeSEXP, SEXP guess_maxSEXP, SEXP num_threadsSEXP, SEXP altrep_optsSEXP, SEXP progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type inputs(inputsSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type col_starts(col_startsSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type col_ends(col_endsSEXP);
    Rcpp::traits::input_parameter< bool >::type trim_ws(trim_wsSEXP);
    Rcpp::traits::input_parameter< RObject >::type col_names(col_namesSEXP);
    Rcpp::traits::input_parameter< RObject >::type col_types(col_typesSEXP);
    Rcpp::traits::input_parameter< RObject >::type col_select(col_selectSEXP);
    Rcpp::traits::input_parameter< size_t >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< const char >::type comment(commentSEXP);
    Rcpp::traits::input_parameter< size_t >::type n_max(n_maxSEXP);
    Rcpp::traits::input_parameter< SEXP >::type id(idSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type na(naSEXP);
    Rcpp::traits::input_parameter< List >::type locale(localeSEXP);
    Rcpp::traits::input_parameter< size_t >::type guess_max(guess_maxSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< size_t >::type altrep_opts(altrep_optsSEXP);
    Rcpp::traits::input_parameter< bool >::type progress(progressSEXP);
    rcpp_result_gen = Rcpp::wrap(vroom_fwf_(inputs, col_starts, col_ends, trim_ws, col_names, col_types, col_select, skip, comment, n_max, id, na, locale, guess_max, num_threads, altrep_opts, progress));
    return rcpp_result_gen;
END_RCPP
}
// whitespace_columns_
List whitespace_columns_(std::string filename, size_t skip, int n, std::string comment);
RcppExport SEXP _vroom_whitespace_columns_(SEXP filenameSEXP, SEXP skipSEXP, SEXP nSEXP, SEXP commentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< size_t >::type skip(skipSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< std::string >::type comment(commentSEXP);
    rcpp_result_gen = Rcpp::wrap(whitespace_columns_(filename, skip, n, comment));
    return rcpp_result_gen;
END_RCPP
}
// vroom_write_
void vroom_write_(Rcpp::List input, std::string filename, const char delim, const char* na_str, bool col_names, bool append, size_t options, size_t num_threads, bool progress, size_t buf_lines);
RcppExport SEXP _vroom_vroom_write_(SEXP inputSEXP, SEXP filenameSEXP, SEXP delimSEXP, SEXP na_strSEXP, SEXP col_namesSEXP, SEXP appendSEXP, SEXP optionsSEXP, SEXP num_threadsSEXP, SEXP progressSEXP, SEXP buf_linesSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type input(inputSEXP);
    Rcpp::traits::input_parameter< std::string >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< const char >::type delim(delimSEXP);
    Rcpp::traits::input_parameter< const char* >::type na_str(na_strSEXP);
    Rcpp::traits::input_parameter< bool >::type col_names(col_namesSEXP);
    Rcpp::traits::input_parameter< bool >::type append(appendSEXP);
    Rcpp::traits::input_parameter< size_t >::type options(optionsSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type progress(progressSEXP);
    Rcpp::traits::input_parameter< size_t >::type buf_lines(buf_linesSEXP);
    vroom_write_(input, filename, delim, na_str, col_names, append, options, num_threads, progress, buf_lines);
    return R_NilValue;
END_RCPP
}
// vroom_write_connection_
void vroom_write_connection_(Rcpp::List input, Rcpp::RObject con, const char delim, const char* na_str, bool col_names, bool append, size_t options, size_t num_threads, bool progress, size_t buf_lines);
RcppExport SEXP _vroom_vroom_write_connection_(SEXP inputSEXP, SEXP conSEXP, SEXP delimSEXP, SEXP na_strSEXP, SEXP col_namesSEXP, SEXP appendSEXP, SEXP optionsSEXP, SEXP num_threadsSEXP, SEXP progressSEXP, SEXP buf_linesSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type input(inputSEXP);
    Rcpp::traits::input_parameter< Rcpp::RObject >::type con(conSEXP);
    Rcpp::traits::input_parameter< const char >::type delim(delimSEXP);
    Rcpp::traits::input_parameter< const char* >::type na_str(na_strSEXP);
    Rcpp::traits::input_parameter< bool >::type col_names(col_namesSEXP);
    Rcpp::traits::input_parameter< bool >::type append(appendSEXP);
    Rcpp::traits::input_parameter< size_t >::type options(optionsSEXP);
    Rcpp::traits::input_parameter< size_t >::type num_threads(num_threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type progress(progressSEXP);
    Rcpp::traits::input_parameter< size_t >::type buf_lines(buf_linesSEXP);
    vroom_write_connection_(input, con, delim, na_str, col_names, append, options, num_threads, progress, buf_lines);
    return R_NilValue;
END_RCPP
}
// vroom_format_
Rcpp::CharacterVector vroom_format_(Rcpp::List input, const char delim, const char* na_str, bool col_names, size_t options);
RcppExport SEXP _vroom_vroom_format_(SEXP inputSEXP, SEXP delimSEXP, SEXP na_strSEXP, SEXP col_namesSEXP, SEXP optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type input(inputSEXP);
    Rcpp::traits::input_parameter< const char >::type delim(delimSEXP);
    Rcpp::traits::input_parameter< const char* >::type na_str(na_strSEXP);
    Rcpp::traits::input_parameter< bool >::type col_names(col_namesSEXP);
    Rcpp::traits::input_parameter< size_t >::type options(optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(vroom_format_(input, delim, na_str, col_names, options));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_vroom_force_materialization", (DL_FUNC) &_vroom_force_materialization, 1},
    {"_vroom_vroom_materialize", (DL_FUNC) &_vroom_vroom_materialize, 1},
    {"_vroom_vroom_str_", (DL_FUNC) &_vroom_vroom_str_, 1},
    {"_vroom_gen_character_", (DL_FUNC) &_vroom_gen_character_, 4},
    {"_vroom_guess_type_", (DL_FUNC) &_vroom_guess_type_, 3},
    {"_vroom_vroom_", (DL_FUNC) &_vroom_vroom_, 19},
    {"_vroom_vroom_fwf_", (DL_FUNC) &_vroom_vroom_fwf_, 17},
    {"_vroom_whitespace_columns_", (DL_FUNC) &_vroom_whitespace_columns_, 4},
    {"_vroom_vroom_write_", (DL_FUNC) &_vroom_vroom_write_, 10},
    {"_vroom_vroom_write_connection_", (DL_FUNC) &_vroom_vroom_write_connection_, 10},
    {"_vroom_vroom_format_", (DL_FUNC) &_vroom_vroom_format_, 5},
    {NULL, NULL, 0}
};

void init_vroom_chr(DllInfo* dll);
void init_vroom_date(DllInfo* dll);
void init_vroom_dbl(DllInfo* dll);
void init_vroom_dttm(DllInfo* dll);
void init_vroom_fct(DllInfo* dll);
void init_vroom_int(DllInfo* dll);
void init_vroom_num(DllInfo* dll);
void init_vroom_time(DllInfo* dll);
RcppExport void R_init_vroom(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
    init_vroom_chr(dll);
    init_vroom_date(dll);
    init_vroom_dbl(dll);
    init_vroom_dttm(dll);
    init_vroom_fct(dll);
    init_vroom_int(dll);
    init_vroom_num(dll);
    init_vroom_time(dll);
}
