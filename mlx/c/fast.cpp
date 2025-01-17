/* Copyright © 2023-2024 Apple Inc.                   */
/*                                                    */
/* This file is auto-generated. Do not edit manually. */
/*                                                    */

#include "mlx/c/fast.h"

#include "mlx/c/mlx.h"
#include "mlx/c/private/array.h"
#include "mlx/c/private/closure.h"
#include "mlx/c/private/map.h"
#include "mlx/c/private/stream.h"
#include "mlx/c/private/string.h"
#include "mlx/c/private/utils.h"

extern "C" mlx_array mlx_fast_rope(
    mlx_array x,
    int dims,
    bool traditional,
    float base,
    float scale,
    int offset,
    mlx_stream s) {
  return MLX_C_ARRAY(mlx::core::fast::rope(
      x->ctx, dims, traditional, base, scale, offset, s->ctx));
}
