#include "mlx/c/mlx.h"
#include "mlx/c/private/object.h"

extern "C" char* mlx_tostring(void* ptr) {
  struct mlx_object_* obj = (struct mlx_object_*)ptr;
  return obj->tostring();
}
extern "C" void mlx_retain(void* ptr) {
  struct mlx_object_* obj = (struct mlx_object_*)ptr;
  obj->refcount++;
}
extern "C" void mlx_free(void* ptr) {
  struct mlx_object_* obj = (struct mlx_object_*)ptr;
  if (--obj->refcount == 0) {
    delete obj;
  }
}
