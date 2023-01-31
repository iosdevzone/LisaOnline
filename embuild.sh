rm -rf cmake_install.cmake CMakeCache.txt CMakeFiles
rm -rf emscripten-build
mkdir emscripten-build
pushd emscripten-build
emcmake cmake --fresh ..
emmake make
emrun LisaSdlTool.html
popd
