# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_SOURCE_DIR = /Users/hartman/CLionProjects/Fall2019CS202/OverloadedOperators

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/hartman/CLionProjects/Fall2019CS202/OverloadedOperators/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/OverloadedOperators.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/OverloadedOperators.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/OverloadedOperators.dir/flags.make

CMakeFiles/OverloadedOperators.dir/main.cpp.o: CMakeFiles/OverloadedOperators.dir/flags.make
CMakeFiles/OverloadedOperators.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hartman/CLionProjects/Fall2019CS202/OverloadedOperators/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/OverloadedOperators.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OverloadedOperators.dir/main.cpp.o -c /Users/hartman/CLionProjects/Fall2019CS202/OverloadedOperators/main.cpp

CMakeFiles/OverloadedOperators.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OverloadedOperators.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hartman/CLionProjects/Fall2019CS202/OverloadedOperators/main.cpp > CMakeFiles/OverloadedOperators.dir/main.cpp.i

CMakeFiles/OverloadedOperators.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OverloadedOperators.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hartman/CLionProjects/Fall2019CS202/OverloadedOperators/main.cpp -o CMakeFiles/OverloadedOperators.dir/main.cpp.s

CMakeFiles/OverloadedOperators.dir/MyInt.cpp.o: CMakeFiles/OverloadedOperators.dir/flags.make
CMakeFiles/OverloadedOperators.dir/MyInt.cpp.o: ../MyInt.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/hartman/CLionProjects/Fall2019CS202/OverloadedOperators/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/OverloadedOperators.dir/MyInt.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/OverloadedOperators.dir/MyInt.cpp.o -c /Users/hartman/CLionProjects/Fall2019CS202/OverloadedOperators/MyInt.cpp

CMakeFiles/OverloadedOperators.dir/MyInt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/OverloadedOperators.dir/MyInt.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/hartman/CLionProjects/Fall2019CS202/OverloadedOperators/MyInt.cpp > CMakeFiles/OverloadedOperators.dir/MyInt.cpp.i

CMakeFiles/OverloadedOperators.dir/MyInt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/OverloadedOperators.dir/MyInt.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/hartman/CLionProjects/Fall2019CS202/OverloadedOperators/MyInt.cpp -o CMakeFiles/OverloadedOperators.dir/MyInt.cpp.s

# Object files for target OverloadedOperators
OverloadedOperators_OBJECTS = \
"CMakeFiles/OverloadedOperators.dir/main.cpp.o" \
"CMakeFiles/OverloadedOperators.dir/MyInt.cpp.o"

# External object files for target OverloadedOperators
OverloadedOperators_EXTERNAL_OBJECTS =

OverloadedOperators: CMakeFiles/OverloadedOperators.dir/main.cpp.o
OverloadedOperators: CMakeFiles/OverloadedOperators.dir/MyInt.cpp.o
OverloadedOperators: CMakeFiles/OverloadedOperators.dir/build.make
OverloadedOperators: CMakeFiles/OverloadedOperators.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/hartman/CLionProjects/Fall2019CS202/OverloadedOperators/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable OverloadedOperators"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/OverloadedOperators.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/OverloadedOperators.dir/build: OverloadedOperators

.PHONY : CMakeFiles/OverloadedOperators.dir/build

CMakeFiles/OverloadedOperators.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/OverloadedOperators.dir/cmake_clean.cmake
.PHONY : CMakeFiles/OverloadedOperators.dir/clean

CMakeFiles/OverloadedOperators.dir/depend:
	cd /Users/hartman/CLionProjects/Fall2019CS202/OverloadedOperators/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/hartman/CLionProjects/Fall2019CS202/OverloadedOperators /Users/hartman/CLionProjects/Fall2019CS202/OverloadedOperators /Users/hartman/CLionProjects/Fall2019CS202/OverloadedOperators/cmake-build-debug /Users/hartman/CLionProjects/Fall2019CS202/OverloadedOperators/cmake-build-debug /Users/hartman/CLionProjects/Fall2019CS202/OverloadedOperators/cmake-build-debug/CMakeFiles/OverloadedOperators.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/OverloadedOperators.dir/depend

