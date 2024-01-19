#ifndef MLX_MAP_PRIVATE_H
#define MLX_MAP_PRIVATE_H

#include "mlx/c/map.h"
#include "mlx/c/private/object.h"
#include "mlx/mlx.h"

// std::function<std::vector<array>(std::vector<array>)>

struct mlx_map_string_to_array_ : mlx_object_ {
  mlx_map_string_to_array_() : mlx_object_(){};
  mlx_map_string_to_array_(
      std::unordered_map<std::string, mlx::core::array> ctx)
      : mlx_object_(), ctx(ctx){};
  virtual char* tostring() override;
  std::unordered_map<std::string, mlx::core::array> ctx;
};

struct mlx_map_string_to_array_iterator_ : mlx_object_ {
  mlx_map_string_to_array_iterator_(mlx_map_string_to_array_* map)
      : mlx_object_(), map(map), ctx(map->ctx.begin()) {
    mlx_retain(map);
  };
  virtual char* tostring() override;
  mlx_map_string_to_array_* map;
  std::unordered_map<std::string, mlx::core::array>::iterator ctx;
  virtual ~mlx_map_string_to_array_iterator_() {
    mlx_free(map);
  }
};

#endif
