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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mateusz/Desktop/C++/asteroids

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mateusz/Desktop/C++/asteroids/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/asteroids.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/asteroids.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/asteroids.dir/flags.make

CMakeFiles/asteroids.dir/main.cpp.o: CMakeFiles/asteroids.dir/flags.make
CMakeFiles/asteroids.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mateusz/Desktop/C++/asteroids/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/asteroids.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/asteroids.dir/main.cpp.o -c /Users/mateusz/Desktop/C++/asteroids/main.cpp

CMakeFiles/asteroids.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/asteroids.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mateusz/Desktop/C++/asteroids/main.cpp > CMakeFiles/asteroids.dir/main.cpp.i

CMakeFiles/asteroids.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/asteroids.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mateusz/Desktop/C++/asteroids/main.cpp -o CMakeFiles/asteroids.dir/main.cpp.s

CMakeFiles/asteroids.dir/Game.cpp.o: CMakeFiles/asteroids.dir/flags.make
CMakeFiles/asteroids.dir/Game.cpp.o: ../Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mateusz/Desktop/C++/asteroids/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/asteroids.dir/Game.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/asteroids.dir/Game.cpp.o -c /Users/mateusz/Desktop/C++/asteroids/Game.cpp

CMakeFiles/asteroids.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/asteroids.dir/Game.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mateusz/Desktop/C++/asteroids/Game.cpp > CMakeFiles/asteroids.dir/Game.cpp.i

CMakeFiles/asteroids.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/asteroids.dir/Game.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mateusz/Desktop/C++/asteroids/Game.cpp -o CMakeFiles/asteroids.dir/Game.cpp.s

CMakeFiles/asteroids.dir/Visible.cpp.o: CMakeFiles/asteroids.dir/flags.make
CMakeFiles/asteroids.dir/Visible.cpp.o: ../Visible.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mateusz/Desktop/C++/asteroids/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/asteroids.dir/Visible.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/asteroids.dir/Visible.cpp.o -c /Users/mateusz/Desktop/C++/asteroids/Visible.cpp

CMakeFiles/asteroids.dir/Visible.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/asteroids.dir/Visible.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mateusz/Desktop/C++/asteroids/Visible.cpp > CMakeFiles/asteroids.dir/Visible.cpp.i

CMakeFiles/asteroids.dir/Visible.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/asteroids.dir/Visible.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mateusz/Desktop/C++/asteroids/Visible.cpp -o CMakeFiles/asteroids.dir/Visible.cpp.s

CMakeFiles/asteroids.dir/Player.cpp.o: CMakeFiles/asteroids.dir/flags.make
CMakeFiles/asteroids.dir/Player.cpp.o: ../Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mateusz/Desktop/C++/asteroids/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/asteroids.dir/Player.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/asteroids.dir/Player.cpp.o -c /Users/mateusz/Desktop/C++/asteroids/Player.cpp

CMakeFiles/asteroids.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/asteroids.dir/Player.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mateusz/Desktop/C++/asteroids/Player.cpp > CMakeFiles/asteroids.dir/Player.cpp.i

CMakeFiles/asteroids.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/asteroids.dir/Player.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mateusz/Desktop/C++/asteroids/Player.cpp -o CMakeFiles/asteroids.dir/Player.cpp.s

CMakeFiles/asteroids.dir/GameObjectManager.cpp.o: CMakeFiles/asteroids.dir/flags.make
CMakeFiles/asteroids.dir/GameObjectManager.cpp.o: ../GameObjectManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mateusz/Desktop/C++/asteroids/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/asteroids.dir/GameObjectManager.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/asteroids.dir/GameObjectManager.cpp.o -c /Users/mateusz/Desktop/C++/asteroids/GameObjectManager.cpp

CMakeFiles/asteroids.dir/GameObjectManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/asteroids.dir/GameObjectManager.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mateusz/Desktop/C++/asteroids/GameObjectManager.cpp > CMakeFiles/asteroids.dir/GameObjectManager.cpp.i

CMakeFiles/asteroids.dir/GameObjectManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/asteroids.dir/GameObjectManager.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mateusz/Desktop/C++/asteroids/GameObjectManager.cpp -o CMakeFiles/asteroids.dir/GameObjectManager.cpp.s

# Object files for target asteroids
asteroids_OBJECTS = \
"CMakeFiles/asteroids.dir/main.cpp.o" \
"CMakeFiles/asteroids.dir/Game.cpp.o" \
"CMakeFiles/asteroids.dir/Visible.cpp.o" \
"CMakeFiles/asteroids.dir/Player.cpp.o" \
"CMakeFiles/asteroids.dir/GameObjectManager.cpp.o"

# External object files for target asteroids
asteroids_EXTERNAL_OBJECTS =

asteroids: CMakeFiles/asteroids.dir/main.cpp.o
asteroids: CMakeFiles/asteroids.dir/Game.cpp.o
asteroids: CMakeFiles/asteroids.dir/Visible.cpp.o
asteroids: CMakeFiles/asteroids.dir/Player.cpp.o
asteroids: CMakeFiles/asteroids.dir/GameObjectManager.cpp.o
asteroids: CMakeFiles/asteroids.dir/build.make
asteroids: /usr/local/lib/libsfml-graphics.2.5.1.dylib
asteroids: /usr/local/lib/libsfml-window.2.5.1.dylib
asteroids: /usr/local/lib/libsfml-system.2.5.1.dylib
asteroids: CMakeFiles/asteroids.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mateusz/Desktop/C++/asteroids/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable asteroids"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/asteroids.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/asteroids.dir/build: asteroids

.PHONY : CMakeFiles/asteroids.dir/build

CMakeFiles/asteroids.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/asteroids.dir/cmake_clean.cmake
.PHONY : CMakeFiles/asteroids.dir/clean

CMakeFiles/asteroids.dir/depend:
	cd /Users/mateusz/Desktop/C++/asteroids/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mateusz/Desktop/C++/asteroids /Users/mateusz/Desktop/C++/asteroids /Users/mateusz/Desktop/C++/asteroids/cmake-build-debug /Users/mateusz/Desktop/C++/asteroids/cmake-build-debug /Users/mateusz/Desktop/C++/asteroids/cmake-build-debug/CMakeFiles/asteroids.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/asteroids.dir/depend

