# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/152/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/152/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/michal/zad5_1-michalpiaskowski15

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/michal/zad5_1-michalpiaskowski15/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/engine.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/engine.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/engine.dir/flags.make

CMakeFiles/engine.dir/src/example.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/example.cpp.o: ../src/example.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/zad5_1-michalpiaskowski15/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/engine.dir/src/example.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/example.cpp.o -c /home/michal/zad5_1-michalpiaskowski15/src/example.cpp

CMakeFiles/engine.dir/src/example.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/example.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/zad5_1-michalpiaskowski15/src/example.cpp > CMakeFiles/engine.dir/src/example.cpp.i

CMakeFiles/engine.dir/src/example.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/example.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/zad5_1-michalpiaskowski15/src/example.cpp -o CMakeFiles/engine.dir/src/example.cpp.s

CMakeFiles/engine.dir/src/lacze_do_gnuplota.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/lacze_do_gnuplota.cpp.o: ../src/lacze_do_gnuplota.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/zad5_1-michalpiaskowski15/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/engine.dir/src/lacze_do_gnuplota.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/lacze_do_gnuplota.cpp.o -c /home/michal/zad5_1-michalpiaskowski15/src/lacze_do_gnuplota.cpp

CMakeFiles/engine.dir/src/lacze_do_gnuplota.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/lacze_do_gnuplota.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/zad5_1-michalpiaskowski15/src/lacze_do_gnuplota.cpp > CMakeFiles/engine.dir/src/lacze_do_gnuplota.cpp.i

CMakeFiles/engine.dir/src/lacze_do_gnuplota.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/lacze_do_gnuplota.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/zad5_1-michalpiaskowski15/src/lacze_do_gnuplota.cpp -o CMakeFiles/engine.dir/src/lacze_do_gnuplota.cpp.s

CMakeFiles/engine.dir/src/vector3d.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/vector3d.cpp.o: ../src/vector3d.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/zad5_1-michalpiaskowski15/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/engine.dir/src/vector3d.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/vector3d.cpp.o -c /home/michal/zad5_1-michalpiaskowski15/src/vector3d.cpp

CMakeFiles/engine.dir/src/vector3d.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/vector3d.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/zad5_1-michalpiaskowski15/src/vector3d.cpp > CMakeFiles/engine.dir/src/vector3d.cpp.i

CMakeFiles/engine.dir/src/vector3d.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/vector3d.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/zad5_1-michalpiaskowski15/src/vector3d.cpp -o CMakeFiles/engine.dir/src/vector3d.cpp.s

CMakeFiles/engine.dir/src/matrix3d.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/matrix3d.cpp.o: ../src/matrix3d.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/zad5_1-michalpiaskowski15/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/engine.dir/src/matrix3d.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/matrix3d.cpp.o -c /home/michal/zad5_1-michalpiaskowski15/src/matrix3d.cpp

CMakeFiles/engine.dir/src/matrix3d.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/matrix3d.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/zad5_1-michalpiaskowski15/src/matrix3d.cpp > CMakeFiles/engine.dir/src/matrix3d.cpp.i

CMakeFiles/engine.dir/src/matrix3d.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/matrix3d.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/zad5_1-michalpiaskowski15/src/matrix3d.cpp -o CMakeFiles/engine.dir/src/matrix3d.cpp.s

CMakeFiles/engine.dir/src/obiekt_sceny.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/obiekt_sceny.cpp.o: ../src/obiekt_sceny.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/zad5_1-michalpiaskowski15/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/engine.dir/src/obiekt_sceny.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/obiekt_sceny.cpp.o -c /home/michal/zad5_1-michalpiaskowski15/src/obiekt_sceny.cpp

CMakeFiles/engine.dir/src/obiekt_sceny.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/obiekt_sceny.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/zad5_1-michalpiaskowski15/src/obiekt_sceny.cpp > CMakeFiles/engine.dir/src/obiekt_sceny.cpp.i

CMakeFiles/engine.dir/src/obiekt_sceny.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/obiekt_sceny.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/zad5_1-michalpiaskowski15/src/obiekt_sceny.cpp -o CMakeFiles/engine.dir/src/obiekt_sceny.cpp.s

CMakeFiles/engine.dir/src/przeszkoda1.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/przeszkoda1.cpp.o: ../src/przeszkoda1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/zad5_1-michalpiaskowski15/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/engine.dir/src/przeszkoda1.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/przeszkoda1.cpp.o -c /home/michal/zad5_1-michalpiaskowski15/src/przeszkoda1.cpp

CMakeFiles/engine.dir/src/przeszkoda1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/przeszkoda1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/zad5_1-michalpiaskowski15/src/przeszkoda1.cpp > CMakeFiles/engine.dir/src/przeszkoda1.cpp.i

CMakeFiles/engine.dir/src/przeszkoda1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/przeszkoda1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/zad5_1-michalpiaskowski15/src/przeszkoda1.cpp -o CMakeFiles/engine.dir/src/przeszkoda1.cpp.s

CMakeFiles/engine.dir/src/przeszkoda2.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/przeszkoda2.cpp.o: ../src/przeszkoda2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/zad5_1-michalpiaskowski15/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/engine.dir/src/przeszkoda2.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/przeszkoda2.cpp.o -c /home/michal/zad5_1-michalpiaskowski15/src/przeszkoda2.cpp

CMakeFiles/engine.dir/src/przeszkoda2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/przeszkoda2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/zad5_1-michalpiaskowski15/src/przeszkoda2.cpp > CMakeFiles/engine.dir/src/przeszkoda2.cpp.i

CMakeFiles/engine.dir/src/przeszkoda2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/przeszkoda2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/zad5_1-michalpiaskowski15/src/przeszkoda2.cpp -o CMakeFiles/engine.dir/src/przeszkoda2.cpp.s

CMakeFiles/engine.dir/src/przeszkoda3.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/przeszkoda3.cpp.o: ../src/przeszkoda3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/zad5_1-michalpiaskowski15/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/engine.dir/src/przeszkoda3.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/przeszkoda3.cpp.o -c /home/michal/zad5_1-michalpiaskowski15/src/przeszkoda3.cpp

CMakeFiles/engine.dir/src/przeszkoda3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/przeszkoda3.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/zad5_1-michalpiaskowski15/src/przeszkoda3.cpp > CMakeFiles/engine.dir/src/przeszkoda3.cpp.i

CMakeFiles/engine.dir/src/przeszkoda3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/przeszkoda3.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/zad5_1-michalpiaskowski15/src/przeszkoda3.cpp -o CMakeFiles/engine.dir/src/przeszkoda3.cpp.s

CMakeFiles/engine.dir/src/scena.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/scena.cpp.o: ../src/scena.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/zad5_1-michalpiaskowski15/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/engine.dir/src/scena.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/scena.cpp.o -c /home/michal/zad5_1-michalpiaskowski15/src/scena.cpp

CMakeFiles/engine.dir/src/scena.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/scena.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/zad5_1-michalpiaskowski15/src/scena.cpp > CMakeFiles/engine.dir/src/scena.cpp.i

CMakeFiles/engine.dir/src/scena.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/scena.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/zad5_1-michalpiaskowski15/src/scena.cpp -o CMakeFiles/engine.dir/src/scena.cpp.s

CMakeFiles/engine.dir/src/cuboid.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/cuboid.cpp.o: ../src/cuboid.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/zad5_1-michalpiaskowski15/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/engine.dir/src/cuboid.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/cuboid.cpp.o -c /home/michal/zad5_1-michalpiaskowski15/src/cuboid.cpp

CMakeFiles/engine.dir/src/cuboid.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/cuboid.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/zad5_1-michalpiaskowski15/src/cuboid.cpp > CMakeFiles/engine.dir/src/cuboid.cpp.i

CMakeFiles/engine.dir/src/cuboid.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/cuboid.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/zad5_1-michalpiaskowski15/src/cuboid.cpp -o CMakeFiles/engine.dir/src/cuboid.cpp.s

CMakeFiles/engine.dir/src/graniastoslup.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/graniastoslup.cpp.o: ../src/graniastoslup.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/zad5_1-michalpiaskowski15/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/engine.dir/src/graniastoslup.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/graniastoslup.cpp.o -c /home/michal/zad5_1-michalpiaskowski15/src/graniastoslup.cpp

CMakeFiles/engine.dir/src/graniastoslup.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/graniastoslup.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/zad5_1-michalpiaskowski15/src/graniastoslup.cpp > CMakeFiles/engine.dir/src/graniastoslup.cpp.i

CMakeFiles/engine.dir/src/graniastoslup.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/graniastoslup.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/zad5_1-michalpiaskowski15/src/graniastoslup.cpp -o CMakeFiles/engine.dir/src/graniastoslup.cpp.s

CMakeFiles/engine.dir/src/droniarz.cpp.o: CMakeFiles/engine.dir/flags.make
CMakeFiles/engine.dir/src/droniarz.cpp.o: ../src/droniarz.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/michal/zad5_1-michalpiaskowski15/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/engine.dir/src/droniarz.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/engine.dir/src/droniarz.cpp.o -c /home/michal/zad5_1-michalpiaskowski15/src/droniarz.cpp

CMakeFiles/engine.dir/src/droniarz.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/engine.dir/src/droniarz.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/michal/zad5_1-michalpiaskowski15/src/droniarz.cpp > CMakeFiles/engine.dir/src/droniarz.cpp.i

CMakeFiles/engine.dir/src/droniarz.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/engine.dir/src/droniarz.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/michal/zad5_1-michalpiaskowski15/src/droniarz.cpp -o CMakeFiles/engine.dir/src/droniarz.cpp.s

engine: CMakeFiles/engine.dir/src/example.cpp.o
engine: CMakeFiles/engine.dir/src/lacze_do_gnuplota.cpp.o
engine: CMakeFiles/engine.dir/src/vector3d.cpp.o
engine: CMakeFiles/engine.dir/src/matrix3d.cpp.o
engine: CMakeFiles/engine.dir/src/obiekt_sceny.cpp.o
engine: CMakeFiles/engine.dir/src/przeszkoda1.cpp.o
engine: CMakeFiles/engine.dir/src/przeszkoda2.cpp.o
engine: CMakeFiles/engine.dir/src/przeszkoda3.cpp.o
engine: CMakeFiles/engine.dir/src/scena.cpp.o
engine: CMakeFiles/engine.dir/src/cuboid.cpp.o
engine: CMakeFiles/engine.dir/src/graniastoslup.cpp.o
engine: CMakeFiles/engine.dir/src/droniarz.cpp.o
engine: CMakeFiles/engine.dir/build.make

.PHONY : engine

# Rule to build all files generated by this target.
CMakeFiles/engine.dir/build: engine

.PHONY : CMakeFiles/engine.dir/build

CMakeFiles/engine.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/engine.dir/cmake_clean.cmake
.PHONY : CMakeFiles/engine.dir/clean

CMakeFiles/engine.dir/depend:
	cd /home/michal/zad5_1-michalpiaskowski15/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/michal/zad5_1-michalpiaskowski15 /home/michal/zad5_1-michalpiaskowski15 /home/michal/zad5_1-michalpiaskowski15/cmake-build-debug /home/michal/zad5_1-michalpiaskowski15/cmake-build-debug /home/michal/zad5_1-michalpiaskowski15/cmake-build-debug/CMakeFiles/engine.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/engine.dir/depend

