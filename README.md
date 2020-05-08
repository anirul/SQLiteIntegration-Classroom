# SQLiteIntegration

SQLite Integration Code loosely based on the JavascriptIntegration but this time using SQLite and not duktape.

## Pre-Build

First you will need a version of Visual Studio C++ 2019 (this should work with 2017 and others but to be sure).
We will use [VCPKG](https://github.com/microsoft/vcpkg) to get the correct packages in the project. So first install it! 
And then you will need [cmake](https://www.cmake.com/) also install it.

```PowerShell
vcpkg.exe install GTest sqlite3
```

## Setup

Create a ```Build``` directory in the repository, and then execute ```cmake``` there using ```PowerShell```.

```PowerShell
cmake .. -DCMAKE_TOOLCHAIN_FILE="$env:VCPKG_ROOT\scripts\buildsystems\vcpkg.cmake"
```

This should generate you a project file acording to your platform (for me windows and visual studio 2019). 
This should output something like:

```PowerShell
-- Building for: Visual Studio 16 2019
-- The C compiler identification is MSVC 19.24.28316.0
-- The CXX compiler identification is MSVC 19.24.28316.0
-- Check for working C compiler: C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/bin/Hostx64/x64/cl.exe
-- Check for working C compiler: C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/bin/Hostx64/x64/cl.exe - works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/bin/Hostx64/x64/cl.exe
-- Check for working CXX compiler: C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/bin/Hostx64/x64/cl.exe - works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: C:/Users/<your_name>/Documents/GitHub/SQLiteIntegration/Build
```

You can now open the project file with the command line.

```PowerShell
./SQLiteIntegration.sln
```

## Build

Just use the normal way to build under Visual Studio (or the GUI you are using) hit the ```f7``` key.

## Execute

You first need to ```Set as StartUp Project``` the ```SQLibTest``` project for our library and then you 
can test it by using the ```f5``` key, or if you don't want the debug to be enables ```shift-f5```.
