
#include "mlx/c/ops.h"
#include "mlx/c/private/array.h"
#include "mlx/c/private/stream.h"
#include "mlx/c/private/utils.h"

extern "C" mlx_array mlx_abs(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::abs(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_add(mlx_array a, mlx_array b, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::add(a->ctx, b->ctx, s->ctx));
}
extern "C" mlx_array
mlx_all(mlx_array a, int* axes, size_t num_axes, bool keepdims, mlx_stream s) {
  return MLX_C_ARRAY(
      mlx::core::all(a->ctx, MLX_CPP_INTVEC(axes, num_axes), keepdims, s->ctx));
}
extern "C" mlx_array mlx_all_all(mlx_array a, bool keepdims, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::all(a->ctx, keepdims, s->ctx));
}
extern "C" mlx_array
mlx_allclose(mlx_array a, mlx_array b, double rtol, double atol, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::allclose(a->ctx, b->ctx, rtol, atol, s->ctx));
}
extern "C" mlx_array
mlx_any(mlx_array a, int* axes, size_t num_axes, bool keepdims, mlx_stream s) {
  return MLX_C_ARRAY(
      mlx::core::any(a->ctx, MLX_CPP_INTVEC(axes, num_axes), keepdims, s->ctx));
}
extern "C" mlx_array mlx_any_all(mlx_array a, bool keepdims, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::any(a->ctx, keepdims, s->ctx));
}
extern "C" mlx_array mlx_arange(
    double start,
    double stop,
    double step,
    mlx_array_dtype dtype,
    mlx_stream s) {
  return MLX_C_ARRAY(
      mlx::core::arange(start, stop, step, MLX_CPP_ARRAY_DTYPE(dtype), s->ctx));
}
extern "C" mlx_array mlx_arccos(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::arccos(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_arccosh(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::arccosh(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_arcsin(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::arcsin(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_arcsinh(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::arcsinh(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_arctan(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::arctan(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_arctanh(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::arctanh(a->ctx, s->ctx));
}
extern "C" mlx_array
mlx_argmax(mlx_array a, int axis, bool keepdims, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::argmax(a->ctx, axis, keepdims, s->ctx));
}
extern "C" mlx_array mlx_argmax_all(mlx_array a, bool keepdims, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::argmax(a->ctx, keepdims, s->ctx));
}
extern "C" mlx_array
mlx_argmin(mlx_array a, int axis, bool keepdims, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::argmin(a->ctx, axis, keepdims, s->ctx));
}
extern "C" mlx_array mlx_argmin_all(mlx_array a, bool keepdims, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::argmin(a->ctx, keepdims, s->ctx));
}
extern "C" mlx_array
mlx_argpartition(mlx_array a, int kth, int axis, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::argpartition(a->ctx, kth, axis, s->ctx));
}
extern "C" mlx_array mlx_argpartition_all(mlx_array a, int kth, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::argpartition(a->ctx, kth, s->ctx));
}
extern "C" mlx_array mlx_argsort(mlx_array a, int axis, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::argsort(a->ctx, axis, s->ctx));
}
extern "C" mlx_array mlx_argsort_all(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::argsort(a->ctx, s->ctx));
}
extern "C" mlx_array
mlx_array_equal(mlx_array a, mlx_array b, bool equal_nan, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::array_equal(a->ctx, b->ctx, equal_nan, s->ctx));
}
extern "C" mlx_array mlx_as_strided(
    mlx_array a,
    int* shape,
    size_t num_shape,
    size_t* strides,
    size_t num_strides,
    size_t offset,
    mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::as_strided(
      a->ctx,
      MLX_CPP_INTVEC(shape, num_shape),
      MLX_CPP_SIZEVEC(strides, num_strides),
      offset,
      s->ctx));
}
extern "C" mlx_array
mlx_astype(mlx_array a, mlx_array_dtype dtype, mlx_stream s) {
  return MLX_C_ARRAY(
      mlx::core::astype(a->ctx, MLX_CPP_ARRAY_DTYPE(dtype), s->ctx));
}
extern "C" mlx_array*
mlx_broadcast_arrays(mlx_array* inputs, size_t num_inputs, mlx_stream s) {
  return MLX_C_ARRAYS(
      mlx::core::broadcast_arrays(MLX_CPP_ARRVEC(inputs, num_inputs), s->ctx));
}
extern "C" mlx_array
mlx_broadcast_to(mlx_array a, int* shape, size_t num_shape, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::broadcast_to(
      a->ctx, MLX_CPP_INTVEC(shape, num_shape), s->ctx));
}
extern "C" mlx_array
mlx_concatenate(mlx_array* arrays, size_t num_arrays, int axis, mlx_stream s) {
  return MLX_C_ARRAY(
      mlx::core::concatenate(MLX_CPP_ARRVEC(arrays, num_arrays), axis, s->ctx));
}
extern "C" mlx_array
mlx_concatenate_all(mlx_array* arrays, size_t num_arrays, mlx_stream s) {
  return MLX_C_ARRAY(
      mlx::core::concatenate(MLX_CPP_ARRVEC(arrays, num_arrays), s->ctx));
}
extern "C" mlx_array mlx_conv1d(
    mlx_array input,
    mlx_array weight,
    int stride,
    int padding,
    int dilation,
    int groups,
    mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::conv1d(
      input->ctx, weight->ctx, stride, padding, dilation, groups, s->ctx));
}
extern "C" mlx_array mlx_conv2d(
    mlx_array input,
    mlx_array weight,
    int f_stride,
    int s_stride,
    int f_padding,
    int s_padding,
    int f_dilation,
    int s_dilation,
    int groups,
    mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::conv2d(
      input->ctx,
      weight->ctx,
      MLX_CPP_INTPAIR(f_stride, s_stride),
      MLX_CPP_INTPAIR(f_padding, s_padding),
      MLX_CPP_INTPAIR(f_dilation, s_dilation),
      groups,
      s->ctx));
}
extern "C" mlx_array mlx_copy(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::copy(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_cos(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::cos(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_cosh(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::cosh(a->ctx, s->ctx));
}
extern "C" mlx_array
mlx_cummax(mlx_array a, int axis, bool reverse, bool inclusive, mlx_stream s) {
  return MLX_C_ARRAY(
      mlx::core::cummax(a->ctx, axis, reverse, inclusive, s->ctx));
}
extern "C" mlx_array
mlx_cummin(mlx_array a, int axis, bool reverse, bool inclusive, mlx_stream s) {
  return MLX_C_ARRAY(
      mlx::core::cummin(a->ctx, axis, reverse, inclusive, s->ctx));
}
extern "C" mlx_array
mlx_cumprod(mlx_array a, int axis, bool reverse, bool inclusive, mlx_stream s) {
  return MLX_C_ARRAY(
      mlx::core::cumprod(a->ctx, axis, reverse, inclusive, s->ctx));
}
extern "C" mlx_array
mlx_cumsum(mlx_array a, int axis, bool reverse, bool inclusive, mlx_stream s) {
  return MLX_C_ARRAY(
      mlx::core::cumsum(a->ctx, axis, reverse, inclusive, s->ctx));
}
extern "C" mlx_array mlx_divide(mlx_array a, mlx_array b, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::divide(a->ctx, b->ctx, s->ctx));
}
extern "C" mlx_array mlx_equal(mlx_array a, mlx_array b, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::equal(a->ctx, b->ctx, s->ctx));
}
extern "C" mlx_array mlx_erf(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::erf(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_erfinv(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::erfinv(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_exp(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::exp(a->ctx, s->ctx));
}
extern "C" mlx_array
mlx_expand_dims(mlx_array a, int* axes, size_t num_axes, mlx_stream s) {
  return MLX_C_ARRAY(
      mlx::core::expand_dims(a->ctx, MLX_CPP_INTVEC(axes, num_axes), s->ctx));
}
extern "C" mlx_array
mlx_eye(int n, int m, int k, mlx_array_dtype dtype, mlx_stream s) {
  return MLX_C_ARRAY(
      mlx::core::eye(n, m, k, MLX_CPP_ARRAY_DTYPE(dtype), s->ctx));
}
extern "C" mlx_array mlx_full(
    int* shape,
    size_t num_shape,
    mlx_array vals,
    mlx_array_dtype dtype,
    mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::full(
      MLX_CPP_INTVEC(shape, num_shape),
      vals->ctx,
      MLX_CPP_ARRAY_DTYPE(dtype),
      s->ctx));
}
extern "C" mlx_array mlx_gather(
    mlx_array a,
    mlx_array* indices,
    size_t num_indices,
    int* axes,
    size_t num_axes,
    int* slice_sizes,
    size_t num_slice_sizes,
    mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::gather(
      a->ctx,
      MLX_CPP_ARRVEC(indices, num_indices),
      MLX_CPP_INTVEC(axes, num_axes),
      MLX_CPP_INTVEC(slice_sizes, num_slice_sizes),
      s->ctx));
}
extern "C" mlx_array mlx_greater(mlx_array a, mlx_array b, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::greater(a->ctx, b->ctx, s->ctx));
}
extern "C" mlx_array mlx_greater_equal(mlx_array a, mlx_array b, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::greater_equal(a->ctx, b->ctx, s->ctx));
}
extern "C" mlx_array mlx_identity(int n, mlx_array_dtype dtype, mlx_stream s) {
  return MLX_C_ARRAY(
      mlx::core::identity(n, MLX_CPP_ARRAY_DTYPE(dtype), s->ctx));
}
extern "C" mlx_array mlx_less(mlx_array a, mlx_array b, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::less(a->ctx, b->ctx, s->ctx));
}
extern "C" mlx_array mlx_less_equal(mlx_array a, mlx_array b, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::less_equal(a->ctx, b->ctx, s->ctx));
}
extern "C" mlx_array mlx_load(FILE* in_stream, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::load(MLX_CPP_READER(in_stream), s->ctx));
}
extern "C" mlx_array mlx_log(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::log(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_log10(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::log10(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_log1p(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::log1p(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_log2(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::log2(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_logaddexp(mlx_array a, mlx_array b, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::logaddexp(a->ctx, b->ctx, s->ctx));
}
extern "C" mlx_array mlx_logical_not(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::logical_not(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_logsumexp(
    mlx_array a,
    int* axes,
    size_t num_axes,
    bool keepdims,
    mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::logsumexp(
      a->ctx, MLX_CPP_INTVEC(axes, num_axes), keepdims, s->ctx));
}
extern "C" mlx_array
mlx_logsumexp_all(mlx_array a, bool keepdims, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::logsumexp(a->ctx, keepdims, s->ctx));
}
extern "C" mlx_array mlx_matmul(mlx_array a, mlx_array b, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::matmul(a->ctx, b->ctx, s->ctx));
}
extern "C" mlx_array
mlx_max(mlx_array a, int* axes, size_t num_axes, bool keepdims, mlx_stream s) {
  return MLX_C_ARRAY(
      mlx::core::max(a->ctx, MLX_CPP_INTVEC(axes, num_axes), keepdims, s->ctx));
}
extern "C" mlx_array mlx_max_all(mlx_array a, bool keepdims, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::max(a->ctx, keepdims, s->ctx));
}
extern "C" mlx_array mlx_maximum(mlx_array a, mlx_array b, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::maximum(a->ctx, b->ctx, s->ctx));
}
extern "C" mlx_array
mlx_mean(mlx_array a, int* axes, size_t num_axes, bool keepdims, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::mean(
      a->ctx, MLX_CPP_INTVEC(axes, num_axes), keepdims, s->ctx));
}
extern "C" mlx_array mlx_mean_all(mlx_array a, bool keepdims, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::mean(a->ctx, keepdims, s->ctx));
}
extern "C" mlx_array
mlx_min(mlx_array a, int* axes, size_t num_axes, bool keepdims, mlx_stream s) {
  return MLX_C_ARRAY(
      mlx::core::min(a->ctx, MLX_CPP_INTVEC(axes, num_axes), keepdims, s->ctx));
}
extern "C" mlx_array mlx_min_all(mlx_array a, bool keepdims, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::min(a->ctx, keepdims, s->ctx));
}
extern "C" mlx_array mlx_minimum(mlx_array a, mlx_array b, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::minimum(a->ctx, b->ctx, s->ctx));
}
extern "C" mlx_array mlx_multiply(mlx_array a, mlx_array b, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::multiply(a->ctx, b->ctx, s->ctx));
}
extern "C" mlx_array mlx_negative(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::negative(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_not_equal(mlx_array a, mlx_array b, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::not_equal(a->ctx, b->ctx, s->ctx));
}
extern "C" mlx_array
mlx_ones(int* shape, size_t num_shape, mlx_array_dtype dtype, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::ones(
      MLX_CPP_INTVEC(shape, num_shape), MLX_CPP_ARRAY_DTYPE(dtype), s->ctx));
}
extern "C" mlx_array mlx_ones_like(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::ones_like(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_pad(
    mlx_array a,
    int* axes,
    size_t num_axes,
    int* low_pad_size,
    size_t num_low_pad_size,
    int* high_pad_size,
    size_t num_high_pad_size,
    mlx_array pad_value,
    mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::pad(
      a->ctx,
      MLX_CPP_INTVEC(axes, num_axes),
      MLX_CPP_INTVEC(low_pad_size, num_low_pad_size),
      MLX_CPP_INTVEC(high_pad_size, num_high_pad_size),
      pad_value->ctx,
      s->ctx));
}
extern "C" mlx_array
mlx_partition(mlx_array a, int kth, int axis, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::partition(a->ctx, kth, axis, s->ctx));
}
extern "C" mlx_array mlx_partition_all(mlx_array a, int kth, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::partition(a->ctx, kth, s->ctx));
}
extern "C" mlx_array mlx_power(mlx_array a, mlx_array b, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::power(a->ctx, b->ctx, s->ctx));
}
extern "C" mlx_array
mlx_prod(mlx_array a, int* axes, size_t num_axes, bool keepdims, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::prod(
      a->ctx, MLX_CPP_INTVEC(axes, num_axes), keepdims, s->ctx));
}
extern "C" mlx_array mlx_prod_all(mlx_array a, bool keepdims, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::prod(a->ctx, keepdims, s->ctx));
}
extern "C" mlx_array mlx_reciprocal(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::reciprocal(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_remainder(mlx_array a, mlx_array b, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::remainder(a->ctx, b->ctx, s->ctx));
}
extern "C" mlx_array
mlx_reshape(mlx_array a, int* shape, size_t num_shape, mlx_stream s) {
  return MLX_C_ARRAY(
      mlx::core::reshape(a->ctx, MLX_CPP_INTVEC(shape, num_shape), s->ctx));
}
extern "C" mlx_array mlx_rsqrt(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::rsqrt(a->ctx, s->ctx));
}
extern "C" void mlx_save(FILE* out_stream, mlx_array a, bool retain_graph) {
  return MLX_C_VOID(
      mlx::core::save(MLX_CPP_WRITER(out_stream), a->ctx, retain_graph));
}
extern "C" mlx_array mlx_scatter(
    mlx_array a,
    mlx_array* indices,
    size_t num_indices,
    mlx_array updates,
    int* axes,
    size_t num_axes,
    mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::scatter(
      a->ctx,
      MLX_CPP_ARRVEC(indices, num_indices),
      updates->ctx,
      MLX_CPP_INTVEC(axes, num_axes),
      s->ctx));
}
extern "C" mlx_array mlx_scatter_add(
    mlx_array a,
    mlx_array* indices,
    size_t num_indices,
    mlx_array updates,
    int* axes,
    size_t num_axes,
    mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::scatter_add(
      a->ctx,
      MLX_CPP_ARRVEC(indices, num_indices),
      updates->ctx,
      MLX_CPP_INTVEC(axes, num_axes),
      s->ctx));
}
extern "C" mlx_array mlx_scatter_max(
    mlx_array a,
    mlx_array* indices,
    size_t num_indices,
    mlx_array updates,
    int* axes,
    size_t num_axes,
    mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::scatter_max(
      a->ctx,
      MLX_CPP_ARRVEC(indices, num_indices),
      updates->ctx,
      MLX_CPP_INTVEC(axes, num_axes),
      s->ctx));
}
extern "C" mlx_array mlx_scatter_min(
    mlx_array a,
    mlx_array* indices,
    size_t num_indices,
    mlx_array updates,
    int* axes,
    size_t num_axes,
    mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::scatter_min(
      a->ctx,
      MLX_CPP_ARRVEC(indices, num_indices),
      updates->ctx,
      MLX_CPP_INTVEC(axes, num_axes),
      s->ctx));
}
extern "C" mlx_array mlx_scatter_prod(
    mlx_array a,
    mlx_array* indices,
    size_t num_indices,
    mlx_array updates,
    int* axes,
    size_t num_axes,
    mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::scatter_prod(
      a->ctx,
      MLX_CPP_ARRVEC(indices, num_indices),
      updates->ctx,
      MLX_CPP_INTVEC(axes, num_axes),
      s->ctx));
}
extern "C" mlx_array mlx_sigmoid(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::sigmoid(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_sign(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::sign(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_sin(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::sin(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_sinh(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::sinh(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_slice(
    mlx_array a,
    int* start,
    size_t num_start,
    int* stop,
    size_t num_stop,
    int* strides,
    size_t num_strides,
    mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::slice(
      a->ctx,
      MLX_CPP_INTVEC(start, num_start),
      MLX_CPP_INTVEC(stop, num_stop),
      MLX_CPP_INTVEC(strides, num_strides),
      s->ctx));
}
extern "C" mlx_array
mlx_softmax(mlx_array a, int* axes, size_t num_axes, mlx_stream s) {
  return MLX_C_ARRAY(
      mlx::core::softmax(a->ctx, MLX_CPP_INTVEC(axes, num_axes), s->ctx));
}
extern "C" mlx_array mlx_softmax_all(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::softmax(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_sort(mlx_array a, int axis, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::sort(a->ctx, axis, s->ctx));
}
extern "C" mlx_array mlx_sort_all(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::sort(a->ctx, s->ctx));
}
extern "C" mlx_array*
mlx_split_equal_parts(mlx_array a, int num_splits, int axis, mlx_stream s) {
  return MLX_C_ARRAYS(mlx::core::split(a->ctx, num_splits, axis, s->ctx));
}
extern "C" mlx_array* mlx_split(
    mlx_array a,
    int* indices,
    size_t num_indices,
    int axis,
    mlx_stream s) {
  return MLX_C_ARRAYS(mlx::core::split(
      a->ctx, MLX_CPP_INTVEC(indices, num_indices), axis, s->ctx));
}
extern "C" mlx_array mlx_sqrt(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::sqrt(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_square(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::square(a->ctx, s->ctx));
}
extern "C" mlx_array
mlx_squeeze(mlx_array a, int* axes, size_t num_axes, mlx_stream s) {
  return MLX_C_ARRAY(
      mlx::core::squeeze(a->ctx, MLX_CPP_INTVEC(axes, num_axes), s->ctx));
}
extern "C" mlx_array mlx_squeeze_all(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::squeeze(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_stop_gradient(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::stop_gradient(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_subtract(mlx_array a, mlx_array b, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::subtract(a->ctx, b->ctx, s->ctx));
}
extern "C" mlx_array
mlx_sum(mlx_array a, int* axes, size_t num_axes, bool keepdims, mlx_stream s) {
  return MLX_C_ARRAY(
      mlx::core::sum(a->ctx, MLX_CPP_INTVEC(axes, num_axes), keepdims, s->ctx));
}
extern "C" mlx_array mlx_sum_all(mlx_array a, bool keepdims, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::sum(a->ctx, keepdims, s->ctx));
}
extern "C" mlx_array
mlx_take(mlx_array a, mlx_array indices, int axis, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::take(a->ctx, indices->ctx, axis, s->ctx));
}
extern "C" mlx_array
mlx_take_all(mlx_array a, mlx_array indices, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::take(a->ctx, indices->ctx, s->ctx));
}
extern "C" mlx_array
mlx_take_along_axis(mlx_array a, mlx_array indices, int axis, mlx_stream s) {
  return MLX_C_ARRAY(
      mlx::core::take_along_axis(a->ctx, indices->ctx, axis, s->ctx));
}
extern "C" mlx_array mlx_tan(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::tan(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_tanh(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::tanh(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_topk(mlx_array a, int k, int axis, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::topk(a->ctx, k, axis, s->ctx));
}
extern "C" mlx_array mlx_topk_all(mlx_array a, int k, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::topk(a->ctx, k, s->ctx));
}
extern "C" mlx_array
mlx_transpose(mlx_array a, int* axes, size_t num_axes, mlx_stream s) {
  return MLX_C_ARRAY(
      mlx::core::transpose(a->ctx, MLX_CPP_INTVEC(axes, num_axes), s->ctx));
}
extern "C" mlx_array mlx_transpose_all(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::transpose(a->ctx, s->ctx));
}
extern "C" mlx_array mlx_var(
    mlx_array a,
    int* axes,
    size_t num_axes,
    bool keepdims,
    int ddof,
    mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::var(
      a->ctx, MLX_CPP_INTVEC(axes, num_axes), keepdims, ddof, s->ctx));
}
extern "C" mlx_array
mlx_var_all(mlx_array a, bool keepdims, int ddof, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::var(a->ctx, keepdims, ddof, s->ctx));
}
extern "C" mlx_array
mlx_where(mlx_array condition, mlx_array x, mlx_array y, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::where(condition->ctx, x->ctx, y->ctx, s->ctx));
}
extern "C" mlx_array
mlx_zeros(int* shape, size_t num_shape, mlx_array_dtype dtype, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::zeros(
      MLX_CPP_INTVEC(shape, num_shape), MLX_CPP_ARRAY_DTYPE(dtype), s->ctx));
}
extern "C" mlx_array mlx_zeros_like(mlx_array a, mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::zeros_like(a->ctx, s->ctx));
}