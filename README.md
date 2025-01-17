# lib.cdp.module_b

## Build Instructions

### Prerequisites

* Install CMake
* Install Poetry
* Install Python 3.10 or later
* Run `poetry install` to install dependencies

### Build

```mkdir build
cd build
conan install ..
cmake ..
cmake --build .
./main```


### Packaging
cd to the top folder
conan create .