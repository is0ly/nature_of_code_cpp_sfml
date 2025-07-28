# Nature Of Code Examples on C++ SFML

In this project, I will try to implement examples from Daniel Shiffman's
book, [The Nature of Code](https://natureofcode.com).

The template starts out very basic but might receive additional features over time:

- Basic CMake script to build your project and link SFML on any operating system
- Basic [GitHub Actions](https://github.com/features/actions) script for all major platforms

## How to Use

````
git clone git@github.com:is0ly/nature_of_code_cpp_sfml.git
cd nature_of_code_cpp_sfml
mkdir -p build && cd build
cmake -G "Unix Makefiles" ..
make -j$(nproc)
./bin/main
````