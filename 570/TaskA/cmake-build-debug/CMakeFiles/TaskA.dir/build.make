# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.3.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\GitHub\CodeForcesRound\570\TaskA

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\GitHub\CodeForcesRound\570\TaskA\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TaskA.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TaskA.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TaskA.dir/flags.make

CMakeFiles/TaskA.dir/main.cpp.obj: CMakeFiles/TaskA.dir/flags.make
CMakeFiles/TaskA.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\GitHub\CodeForcesRound\570\TaskA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TaskA.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\TaskA.dir\main.cpp.obj -c C:\GitHub\CodeForcesRound\570\TaskA\main.cpp

CMakeFiles/TaskA.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TaskA.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\GitHub\CodeForcesRound\570\TaskA\main.cpp > CMakeFiles\TaskA.dir\main.cpp.i

CMakeFiles/TaskA.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TaskA.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\GitHub\CodeForcesRound\570\TaskA\main.cpp -o CMakeFiles\TaskA.dir\main.cpp.s

# Object files for target TaskA
TaskA_OBJECTS = \
"CMakeFiles/TaskA.dir/main.cpp.obj"

# External object files for target TaskA
TaskA_EXTERNAL_OBJECTS =

TaskA.exe: CMakeFiles/TaskA.dir/main.cpp.obj
TaskA.exe: CMakeFiles/TaskA.dir/build.make
TaskA.exe: CMakeFiles/TaskA.dir/linklibs.rsp
TaskA.exe: CMakeFiles/TaskA.dir/objects1.rsp
TaskA.exe: CMakeFiles/TaskA.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\GitHub\CodeForcesRound\570\TaskA\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable TaskA.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TaskA.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TaskA.dir/build: TaskA.exe

.PHONY : CMakeFiles/TaskA.dir/build

CMakeFiles/TaskA.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TaskA.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TaskA.dir/clean

CMakeFiles/TaskA.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\GitHub\CodeForcesRound\570\TaskA C:\GitHub\CodeForcesRound\570\TaskA C:\GitHub\CodeForcesRound\570\TaskA\cmake-build-debug C:\GitHub\CodeForcesRound\570\TaskA\cmake-build-debug C:\GitHub\CodeForcesRound\570\TaskA\cmake-build-debug\CMakeFiles\TaskA.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TaskA.dir/depend

