if [ -d build/ ]; then rm -rf build/; fi
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Release -DMLX_C_BUILD_EXAMPLES=OFF
make -j
