# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = "/Users/tkisely/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/203.7717.62/CLion.app/Contents/bin/cmake/mac/bin/cmake"

# The command to remove a file.
RM = "/Users/tkisely/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-0/203.7717.62/CLion.app/Contents/bin/cmake/mac/bin/cmake" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/tkisely/CDEV/Gregor/GregorHF_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/tkisely/CDEV/Gregor/GregorHF_2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/GregorHF_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/GregorHF_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/GregorHF_2.dir/flags.make

CMakeFiles/GregorHF_2.dir/main.cpp.o: CMakeFiles/GregorHF_2.dir/flags.make
CMakeFiles/GregorHF_2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/tkisely/CDEV/Gregor/GregorHF_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/GregorHF_2.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/GregorHF_2.dir/main.cpp.o -c /Users/tkisely/CDEV/Gregor/GregorHF_2/main.cpp

CMakeFiles/GregorHF_2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/GregorHF_2.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/tkisely/CDEV/Gregor/GregorHF_2/main.cpp > CMakeFiles/GregorHF_2.dir/main.cpp.i

CMakeFiles/GregorHF_2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/GregorHF_2.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/tkisely/CDEV/Gregor/GregorHF_2/main.cpp -o CMakeFiles/GregorHF_2.dir/main.cpp.s

# Object files for target GregorHF_2
GregorHF_2_OBJECTS = \
"CMakeFiles/GregorHF_2.dir/main.cpp.o"

# External object files for target GregorHF_2
GregorHF_2_EXTERNAL_OBJECTS =

GregorHF_2: CMakeFiles/GregorHF_2.dir/main.cpp.o
GregorHF_2: CMakeFiles/GregorHF_2.dir/build.make
GregorHF_2: CMakeFiles/GregorHF_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/tkisely/CDEV/Gregor/GregorHF_2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable GregorHF_2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/GregorHF_2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/GregorHF_2.dir/build: GregorHF_2

.PHONY : CMakeFiles/GregorHF_2.dir/build

CMakeFiles/GregorHF_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/GregorHF_2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/GregorHF_2.dir/clean

CMakeFiles/GregorHF_2.dir/depend:
	cd /Users/tkisely/CDEV/Gregor/GregorHF_2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/tkisely/CDEV/Gregor/GregorHF_2 /Users/tkisely/CDEV/Gregor/GregorHF_2 /Users/tkisely/CDEV/Gregor/GregorHF_2/cmake-build-debug /Users/tkisely/CDEV/Gregor/GregorHF_2/cmake-build-debug /Users/tkisely/CDEV/Gregor/GregorHF_2/cmake-build-debug/CMakeFiles/GregorHF_2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/GregorHF_2.dir/depend

