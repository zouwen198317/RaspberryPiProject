# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/alex/RaspberryPiProject/roscar/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alex/RaspberryPiProject/roscar/build

# Include any dependencies generated for this target.
include wheels/CMakeFiles/wheels_aruco_tracking.dir/depend.make

# Include the progress variables for this target.
include wheels/CMakeFiles/wheels_aruco_tracking.dir/progress.make

# Include the compile flags for this target's objects.
include wheels/CMakeFiles/wheels_aruco_tracking.dir/flags.make

wheels/CMakeFiles/wheels_aruco_tracking.dir/src/wheels_aruco_tracking.cpp.o: wheels/CMakeFiles/wheels_aruco_tracking.dir/flags.make
wheels/CMakeFiles/wheels_aruco_tracking.dir/src/wheels_aruco_tracking.cpp.o: /home/alex/RaspberryPiProject/roscar/src/wheels/src/wheels_aruco_tracking.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/alex/RaspberryPiProject/roscar/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object wheels/CMakeFiles/wheels_aruco_tracking.dir/src/wheels_aruco_tracking.cpp.o"
	cd /home/alex/RaspberryPiProject/roscar/build/wheels && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/wheels_aruco_tracking.dir/src/wheels_aruco_tracking.cpp.o -c /home/alex/RaspberryPiProject/roscar/src/wheels/src/wheels_aruco_tracking.cpp

wheels/CMakeFiles/wheels_aruco_tracking.dir/src/wheels_aruco_tracking.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/wheels_aruco_tracking.dir/src/wheels_aruco_tracking.cpp.i"
	cd /home/alex/RaspberryPiProject/roscar/build/wheels && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/alex/RaspberryPiProject/roscar/src/wheels/src/wheels_aruco_tracking.cpp > CMakeFiles/wheels_aruco_tracking.dir/src/wheels_aruco_tracking.cpp.i

wheels/CMakeFiles/wheels_aruco_tracking.dir/src/wheels_aruco_tracking.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/wheels_aruco_tracking.dir/src/wheels_aruco_tracking.cpp.s"
	cd /home/alex/RaspberryPiProject/roscar/build/wheels && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/alex/RaspberryPiProject/roscar/src/wheels/src/wheels_aruco_tracking.cpp -o CMakeFiles/wheels_aruco_tracking.dir/src/wheels_aruco_tracking.cpp.s

wheels/CMakeFiles/wheels_aruco_tracking.dir/src/wheels_aruco_tracking.cpp.o.requires:
.PHONY : wheels/CMakeFiles/wheels_aruco_tracking.dir/src/wheels_aruco_tracking.cpp.o.requires

wheels/CMakeFiles/wheels_aruco_tracking.dir/src/wheels_aruco_tracking.cpp.o.provides: wheels/CMakeFiles/wheels_aruco_tracking.dir/src/wheels_aruco_tracking.cpp.o.requires
	$(MAKE) -f wheels/CMakeFiles/wheels_aruco_tracking.dir/build.make wheels/CMakeFiles/wheels_aruco_tracking.dir/src/wheels_aruco_tracking.cpp.o.provides.build
.PHONY : wheels/CMakeFiles/wheels_aruco_tracking.dir/src/wheels_aruco_tracking.cpp.o.provides

wheels/CMakeFiles/wheels_aruco_tracking.dir/src/wheels_aruco_tracking.cpp.o.provides.build: wheels/CMakeFiles/wheels_aruco_tracking.dir/src/wheels_aruco_tracking.cpp.o

# Object files for target wheels_aruco_tracking
wheels_aruco_tracking_OBJECTS = \
"CMakeFiles/wheels_aruco_tracking.dir/src/wheels_aruco_tracking.cpp.o"

# External object files for target wheels_aruco_tracking
wheels_aruco_tracking_EXTERNAL_OBJECTS =

/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: wheels/CMakeFiles/wheels_aruco_tracking.dir/src/wheels_aruco_tracking.cpp.o
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: wheels/CMakeFiles/wheels_aruco_tracking.dir/build.make
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: /opt/ros/jade/lib/libtf.so
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: /opt/ros/jade/lib/libtf2_ros.so
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: /opt/ros/jade/lib/libactionlib.so
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: /opt/ros/jade/lib/libmessage_filters.so
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: /opt/ros/jade/lib/libroscpp.so
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: /usr/lib/arm-linux-gnueabihf/libboost_signals.so
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: /usr/lib/arm-linux-gnueabihf/libboost_filesystem.so
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: /opt/ros/jade/lib/libxmlrpcpp.so
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: /opt/ros/jade/lib/libtf2.so
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: /opt/ros/jade/lib/libroscpp_serialization.so
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: /opt/ros/jade/lib/librosconsole.so
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: /opt/ros/jade/lib/librosconsole_log4cxx.so
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: /opt/ros/jade/lib/librosconsole_backend_interface.so
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: /usr/lib/liblog4cxx.so
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: /usr/lib/arm-linux-gnueabihf/libboost_regex.so
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: /opt/ros/jade/lib/librostime.so
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: /usr/lib/arm-linux-gnueabihf/libboost_date_time.so
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: /opt/ros/jade/lib/libcpp_common.so
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: /usr/lib/arm-linux-gnueabihf/libboost_system.so
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: /usr/lib/arm-linux-gnueabihf/libboost_thread.so
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: /usr/lib/arm-linux-gnueabihf/libpthread.so
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: /usr/lib/arm-linux-gnueabihf/libconsole_bridge.so
/home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking: wheels/CMakeFiles/wheels_aruco_tracking.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable /home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking"
	cd /home/alex/RaspberryPiProject/roscar/build/wheels && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/wheels_aruco_tracking.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
wheels/CMakeFiles/wheels_aruco_tracking.dir/build: /home/alex/RaspberryPiProject/roscar/devel/lib/wheels/wheels_aruco_tracking
.PHONY : wheels/CMakeFiles/wheels_aruco_tracking.dir/build

wheels/CMakeFiles/wheels_aruco_tracking.dir/requires: wheels/CMakeFiles/wheels_aruco_tracking.dir/src/wheels_aruco_tracking.cpp.o.requires
.PHONY : wheels/CMakeFiles/wheels_aruco_tracking.dir/requires

wheels/CMakeFiles/wheels_aruco_tracking.dir/clean:
	cd /home/alex/RaspberryPiProject/roscar/build/wheels && $(CMAKE_COMMAND) -P CMakeFiles/wheels_aruco_tracking.dir/cmake_clean.cmake
.PHONY : wheels/CMakeFiles/wheels_aruco_tracking.dir/clean

wheels/CMakeFiles/wheels_aruco_tracking.dir/depend:
	cd /home/alex/RaspberryPiProject/roscar/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alex/RaspberryPiProject/roscar/src /home/alex/RaspberryPiProject/roscar/src/wheels /home/alex/RaspberryPiProject/roscar/build /home/alex/RaspberryPiProject/roscar/build/wheels /home/alex/RaspberryPiProject/roscar/build/wheels/CMakeFiles/wheels_aruco_tracking.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : wheels/CMakeFiles/wheels_aruco_tracking.dir/depend
