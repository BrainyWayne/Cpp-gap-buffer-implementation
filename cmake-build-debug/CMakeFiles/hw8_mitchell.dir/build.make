# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/franciseshun/Desktop/Algos/Cpp-gap-buffer-implementation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/franciseshun/Desktop/Algos/Cpp-gap-buffer-implementation/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/hw8_mitchell.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hw8_mitchell.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hw8_mitchell.dir/flags.make

CMakeFiles/hw8_mitchell.dir/main.cpp.o: CMakeFiles/hw8_mitchell.dir/flags.make
CMakeFiles/hw8_mitchell.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/franciseshun/Desktop/Algos/Cpp-gap-buffer-implementation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hw8_mitchell.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw8_mitchell.dir/main.cpp.o -c /Users/franciseshun/Desktop/Algos/Cpp-gap-buffer-implementation/main.cpp

CMakeFiles/hw8_mitchell.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw8_mitchell.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/franciseshun/Desktop/Algos/Cpp-gap-buffer-implementation/main.cpp > CMakeFiles/hw8_mitchell.dir/main.cpp.i

CMakeFiles/hw8_mitchell.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw8_mitchell.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/franciseshun/Desktop/Algos/Cpp-gap-buffer-implementation/main.cpp -o CMakeFiles/hw8_mitchell.dir/main.cpp.s

CMakeFiles/hw8_mitchell.dir/Buffer.cpp.o: CMakeFiles/hw8_mitchell.dir/flags.make
CMakeFiles/hw8_mitchell.dir/Buffer.cpp.o: ../Buffer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/franciseshun/Desktop/Algos/Cpp-gap-buffer-implementation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hw8_mitchell.dir/Buffer.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw8_mitchell.dir/Buffer.cpp.o -c /Users/franciseshun/Desktop/Algos/Cpp-gap-buffer-implementation/Buffer.cpp

CMakeFiles/hw8_mitchell.dir/Buffer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw8_mitchell.dir/Buffer.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/franciseshun/Desktop/Algos/Cpp-gap-buffer-implementation/Buffer.cpp > CMakeFiles/hw8_mitchell.dir/Buffer.cpp.i

CMakeFiles/hw8_mitchell.dir/Buffer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw8_mitchell.dir/Buffer.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/franciseshun/Desktop/Algos/Cpp-gap-buffer-implementation/Buffer.cpp -o CMakeFiles/hw8_mitchell.dir/Buffer.cpp.s

CMakeFiles/hw8_mitchell.dir/Interpreter.cpp.o: CMakeFiles/hw8_mitchell.dir/flags.make
CMakeFiles/hw8_mitchell.dir/Interpreter.cpp.o: ../Interpreter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/franciseshun/Desktop/Algos/Cpp-gap-buffer-implementation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/hw8_mitchell.dir/Interpreter.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw8_mitchell.dir/Interpreter.cpp.o -c /Users/franciseshun/Desktop/Algos/Cpp-gap-buffer-implementation/Interpreter.cpp

CMakeFiles/hw8_mitchell.dir/Interpreter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw8_mitchell.dir/Interpreter.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/franciseshun/Desktop/Algos/Cpp-gap-buffer-implementation/Interpreter.cpp > CMakeFiles/hw8_mitchell.dir/Interpreter.cpp.i

CMakeFiles/hw8_mitchell.dir/Interpreter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw8_mitchell.dir/Interpreter.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/franciseshun/Desktop/Algos/Cpp-gap-buffer-implementation/Interpreter.cpp -o CMakeFiles/hw8_mitchell.dir/Interpreter.cpp.s

# Object files for target hw8_mitchell
hw8_mitchell_OBJECTS = \
"CMakeFiles/hw8_mitchell.dir/main.cpp.o" \
"CMakeFiles/hw8_mitchell.dir/Buffer.cpp.o" \
"CMakeFiles/hw8_mitchell.dir/Interpreter.cpp.o"

# External object files for target hw8_mitchell
hw8_mitchell_EXTERNAL_OBJECTS =

hw8_mitchell: CMakeFiles/hw8_mitchell.dir/main.cpp.o
hw8_mitchell: CMakeFiles/hw8_mitchell.dir/Buffer.cpp.o
hw8_mitchell: CMakeFiles/hw8_mitchell.dir/Interpreter.cpp.o
hw8_mitchell: CMakeFiles/hw8_mitchell.dir/build.make
hw8_mitchell: CMakeFiles/hw8_mitchell.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/franciseshun/Desktop/Algos/Cpp-gap-buffer-implementation/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable hw8_mitchell"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hw8_mitchell.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hw8_mitchell.dir/build: hw8_mitchell

.PHONY : CMakeFiles/hw8_mitchell.dir/build

CMakeFiles/hw8_mitchell.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hw8_mitchell.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hw8_mitchell.dir/clean

CMakeFiles/hw8_mitchell.dir/depend:
	cd /Users/franciseshun/Desktop/Algos/Cpp-gap-buffer-implementation/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/franciseshun/Desktop/Algos/Cpp-gap-buffer-implementation /Users/franciseshun/Desktop/Algos/Cpp-gap-buffer-implementation /Users/franciseshun/Desktop/Algos/Cpp-gap-buffer-implementation/cmake-build-debug /Users/franciseshun/Desktop/Algos/Cpp-gap-buffer-implementation/cmake-build-debug /Users/franciseshun/Desktop/Algos/Cpp-gap-buffer-implementation/cmake-build-debug/CMakeFiles/hw8_mitchell.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hw8_mitchell.dir/depend

