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
CMAKE_SOURCE_DIR = /Users/hartman/CLionProjects/Fall2019CS202/EnumAndStatic

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hartman/CLionProjects/Fall2019CS202/EnumAndStatic/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/EnumAndStatic.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/EnumAndStatic.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EnumAndStatic.dir/flags.make

CMakeFiles/EnumAndStatic.dir/main.cpp.o: CMakeFiles/EnumAndStatic.dir/flags.make
CMakeFiles/EnumAndStatic.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hartman/CLionProjects/Fall2019CS202/EnumAndStatic/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/EnumAndStatic.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/EnumAndStatic.dir/main.cpp.o -c /Users/hartman/CLionProjects/Fall2019CS202/EnumAndStatic/main.cpp

CMakeFiles/EnumAndStatic.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EnumAndStatic.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hartman/CLionProjects/Fall2019CS202/EnumAndStatic/main.cpp > CMakeFiles/EnumAndStatic.dir/main.cpp.i

CMakeFiles/EnumAndStatic.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EnumAndStatic.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hartman/CLionProjects/Fall2019CS202/EnumAndStatic/main.cpp -o CMakeFiles/EnumAndStatic.dir/main.cpp.s

# Object files for target EnumAndStatic
EnumAndStatic_OBJECTS = \
"CMakeFiles/EnumAndStatic.dir/main.cpp.o"

# External object files for target EnumAndStatic
EnumAndStatic_EXTERNAL_OBJECTS =

EnumAndStatic: CMakeFiles/EnumAndStatic.dir/main.cpp.o
EnumAndStatic: CMakeFiles/EnumAndStatic.dir/build.make
EnumAndStatic: CMakeFiles/EnumAndStatic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hartman/CLionProjects/Fall2019CS202/EnumAndStatic/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable EnumAndStatic"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/EnumAndStatic.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EnumAndStatic.dir/build: EnumAndStatic

.PHONY : CMakeFiles/EnumAndStatic.dir/build

CMakeFiles/EnumAndStatic.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/EnumAndStatic.dir/cmake_clean.cmake
.PHONY : CMakeFiles/EnumAndStatic.dir/clean

CMakeFiles/EnumAndStatic.dir/depend:
	cd /Users/hartman/CLionProjects/Fall2019CS202/EnumAndStatic/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hartman/CLionProjects/Fall2019CS202/EnumAndStatic /Users/hartman/CLionProjects/Fall2019CS202/EnumAndStatic /Users/hartman/CLionProjects/Fall2019CS202/EnumAndStatic/cmake-build-debug /Users/hartman/CLionProjects/Fall2019CS202/EnumAndStatic/cmake-build-debug /Users/hartman/CLionProjects/Fall2019CS202/EnumAndStatic/cmake-build-debug/CMakeFiles/EnumAndStatic.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/EnumAndStatic.dir/depend

