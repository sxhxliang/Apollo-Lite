cp -r proto/* ./cyber/proto

cp cmake/Examples.cmake ./cyber/examples/CMakeLists.txt
cp cmake/Tools.cmake ./cyber/tools/CMakeLists.txt

rm -rf build
mkdir build 
cd build
cmake ..
make -j 32