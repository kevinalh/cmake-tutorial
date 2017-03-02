# CMake Tutorial
The code is from the [official CMake Tutorial](https://cmake.org/cmake-tutorial/), with some small changes.

How to use
---
- Create a folder for the binaries (e.g. `\build`).
- Go inside the folder and run `cmake ..`. You can select the generator using the `-G` parameter;
for example `cmake -G "Visual Studio 15 2017" ..`.
- The USE_MYMATH option is ON by default. To use the system square root function, as opposed to the custom iterated method
in the MathFunctions folder, run `cmake -DUSE_MYMATH:BOOL=OFF ..`.
- Use the method of your choice for compiling. If a Makefile was generated, just use `make`. If using Visual Studio,
open the Solution using the IDE and build it.
- You can `git reset --hard HEAD~n` to get the state of previous steps (`n` is the number of commits to go back), but this
shouldn't be necessary, as they are organized in a
[repository by Kitware](https://gitlab.kitware.com/cmake/cmake/tree/master/Tests/Tutorial).

Note
---
- The `CTestConfig.cmake` file contains some parameters not included in the tutorial, so that the `ctest -D Experimental` command
doesn't throw an error and uploads to open.cdash.org.
