# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/agali/CLionProjects/VLibrary

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/agali/CLionProjects/VLibrary/build

# Include any dependencies generated for this target.
include CMakeFiles/VLibrary.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/VLibrary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/VLibrary.dir/flags.make

CMakeFiles/VLibrary.dir/main.cpp.o: CMakeFiles/VLibrary.dir/flags.make
CMakeFiles/VLibrary.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agali/CLionProjects/VLibrary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/VLibrary.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/VLibrary.dir/main.cpp.o -c /home/agali/CLionProjects/VLibrary/main.cpp

CMakeFiles/VLibrary.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VLibrary.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agali/CLionProjects/VLibrary/main.cpp > CMakeFiles/VLibrary.dir/main.cpp.i

CMakeFiles/VLibrary.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VLibrary.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agali/CLionProjects/VLibrary/main.cpp -o CMakeFiles/VLibrary.dir/main.cpp.s

CMakeFiles/VLibrary.dir/Classes/Book.cpp.o: CMakeFiles/VLibrary.dir/flags.make
CMakeFiles/VLibrary.dir/Classes/Book.cpp.o: ../Classes/Book.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agali/CLionProjects/VLibrary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/VLibrary.dir/Classes/Book.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/VLibrary.dir/Classes/Book.cpp.o -c /home/agali/CLionProjects/VLibrary/Classes/Book.cpp

CMakeFiles/VLibrary.dir/Classes/Book.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VLibrary.dir/Classes/Book.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agali/CLionProjects/VLibrary/Classes/Book.cpp > CMakeFiles/VLibrary.dir/Classes/Book.cpp.i

CMakeFiles/VLibrary.dir/Classes/Book.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VLibrary.dir/Classes/Book.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agali/CLionProjects/VLibrary/Classes/Book.cpp -o CMakeFiles/VLibrary.dir/Classes/Book.cpp.s

CMakeFiles/VLibrary.dir/Classes/Category.cpp.o: CMakeFiles/VLibrary.dir/flags.make
CMakeFiles/VLibrary.dir/Classes/Category.cpp.o: ../Classes/Category.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agali/CLionProjects/VLibrary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/VLibrary.dir/Classes/Category.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/VLibrary.dir/Classes/Category.cpp.o -c /home/agali/CLionProjects/VLibrary/Classes/Category.cpp

CMakeFiles/VLibrary.dir/Classes/Category.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VLibrary.dir/Classes/Category.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agali/CLionProjects/VLibrary/Classes/Category.cpp > CMakeFiles/VLibrary.dir/Classes/Category.cpp.i

CMakeFiles/VLibrary.dir/Classes/Category.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VLibrary.dir/Classes/Category.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agali/CLionProjects/VLibrary/Classes/Category.cpp -o CMakeFiles/VLibrary.dir/Classes/Category.cpp.s

CMakeFiles/VLibrary.dir/Classes/Library.cpp.o: CMakeFiles/VLibrary.dir/flags.make
CMakeFiles/VLibrary.dir/Classes/Library.cpp.o: ../Classes/Library.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/agali/CLionProjects/VLibrary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/VLibrary.dir/Classes/Library.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/VLibrary.dir/Classes/Library.cpp.o -c /home/agali/CLionProjects/VLibrary/Classes/Library.cpp

CMakeFiles/VLibrary.dir/Classes/Library.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/VLibrary.dir/Classes/Library.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/agali/CLionProjects/VLibrary/Classes/Library.cpp > CMakeFiles/VLibrary.dir/Classes/Library.cpp.i

CMakeFiles/VLibrary.dir/Classes/Library.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/VLibrary.dir/Classes/Library.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/agali/CLionProjects/VLibrary/Classes/Library.cpp -o CMakeFiles/VLibrary.dir/Classes/Library.cpp.s

# Object files for target VLibrary
VLibrary_OBJECTS = \
"CMakeFiles/VLibrary.dir/main.cpp.o" \
"CMakeFiles/VLibrary.dir/Classes/Book.cpp.o" \
"CMakeFiles/VLibrary.dir/Classes/Category.cpp.o" \
"CMakeFiles/VLibrary.dir/Classes/Library.cpp.o"

# External object files for target VLibrary
VLibrary_EXTERNAL_OBJECTS =

VLibrary: CMakeFiles/VLibrary.dir/main.cpp.o
VLibrary: CMakeFiles/VLibrary.dir/Classes/Book.cpp.o
VLibrary: CMakeFiles/VLibrary.dir/Classes/Category.cpp.o
VLibrary: CMakeFiles/VLibrary.dir/Classes/Library.cpp.o
VLibrary: CMakeFiles/VLibrary.dir/build.make
VLibrary: CMakeFiles/VLibrary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/agali/CLionProjects/VLibrary/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable VLibrary"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/VLibrary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/VLibrary.dir/build: VLibrary

.PHONY : CMakeFiles/VLibrary.dir/build

CMakeFiles/VLibrary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/VLibrary.dir/cmake_clean.cmake
.PHONY : CMakeFiles/VLibrary.dir/clean

CMakeFiles/VLibrary.dir/depend:
	cd /home/agali/CLionProjects/VLibrary/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/agali/CLionProjects/VLibrary /home/agali/CLionProjects/VLibrary /home/agali/CLionProjects/VLibrary/build /home/agali/CLionProjects/VLibrary/build /home/agali/CLionProjects/VLibrary/build/CMakeFiles/VLibrary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/VLibrary.dir/depend

