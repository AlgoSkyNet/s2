// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// S2Cap_FromAxisHeight
List S2Cap_FromAxisHeight(NumericVector axis, double height);
RcppExport SEXP s2_S2Cap_FromAxisHeight(SEXP axisSEXP, SEXP heightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type axis(axisSEXP);
    Rcpp::traits::input_parameter< double >::type height(heightSEXP);
    rcpp_result_gen = Rcpp::wrap(S2Cap_FromAxisHeight(axis, height));
    return rcpp_result_gen;
END_RCPP
}
// S2Cap_contains_point
LogicalVector S2Cap_contains_point(NumericMatrix points, List cap);
RcppExport SEXP s2_S2Cap_contains_point(SEXP pointsSEXP, SEXP capSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type points(pointsSEXP);
    Rcpp::traits::input_parameter< List >::type cap(capSEXP);
    rcpp_result_gen = Rcpp::wrap(S2Cap_contains_point(points, cap));
    return rcpp_result_gen;
END_RCPP
}
// S2Cap_Area
double S2Cap_Area(List cap);
RcppExport SEXP s2_S2Cap_Area(SEXP capSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type cap(capSEXP);
    rcpp_result_gen = Rcpp::wrap(S2Cap_Area(cap));
    return rcpp_result_gen;
END_RCPP
}
// S2PointVector_interpolate
SEXP S2PointVector_interpolate(NumericMatrix x, double eps);
RcppExport SEXP s2_S2PointVector_interpolate(SEXP xSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(S2PointVector_interpolate(x, eps));
    return rcpp_result_gen;
END_RCPP
}
// S2PolygonBuild
List S2PolygonBuild(List x, bool validate, bool xor_edges, double vertex_merge_radius, double edge_splice_fraction, bool undirected_edges);
RcppExport SEXP s2_S2PolygonBuild(SEXP xSEXP, SEXP validateSEXP, SEXP xor_edgesSEXP, SEXP vertex_merge_radiusSEXP, SEXP edge_splice_fractionSEXP, SEXP undirected_edgesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type validate(validateSEXP);
    Rcpp::traits::input_parameter< bool >::type xor_edges(xor_edgesSEXP);
    Rcpp::traits::input_parameter< double >::type vertex_merge_radius(vertex_merge_radiusSEXP);
    Rcpp::traits::input_parameter< double >::type edge_splice_fraction(edge_splice_fractionSEXP);
    Rcpp::traits::input_parameter< bool >::type undirected_edges(undirected_edgesSEXP);
    rcpp_result_gen = Rcpp::wrap(S2PolygonBuild(x, validate, xor_edges, vertex_merge_radius, edge_splice_fraction, undirected_edges));
    return rcpp_result_gen;
END_RCPP
}
// S2Polygon_union
List S2Polygon_union(List x, List y);
RcppExport SEXP s2_S2Polygon_union(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(S2Polygon_union(x, y));
    return rcpp_result_gen;
END_RCPP
}
// S2Polygon_intersection
List S2Polygon_intersection(List x, List y);
RcppExport SEXP s2_S2Polygon_intersection(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(S2Polygon_intersection(x, y));
    return rcpp_result_gen;
END_RCPP
}
// S2Polygon_contains_point
LogicalVector S2Polygon_contains_point(NumericMatrix points, List poly, bool approx);
RcppExport SEXP s2_S2Polygon_contains_point(SEXP pointsSEXP, SEXP polySEXP, SEXP approxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type points(pointsSEXP);
    Rcpp::traits::input_parameter< List >::type poly(polySEXP);
    Rcpp::traits::input_parameter< bool >::type approx(approxSEXP);
    rcpp_result_gen = Rcpp::wrap(S2Polygon_contains_point(points, poly, approx));
    return rcpp_result_gen;
END_RCPP
}
