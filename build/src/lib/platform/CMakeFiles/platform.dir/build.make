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
CMAKE_SOURCE_DIR = /home/lucero/code/synergy-core

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lucero/code/synergy-core/build

# Include any dependencies generated for this target.
include src/lib/platform/CMakeFiles/platform.dir/depend.make

# Include the progress variables for this target.
include src/lib/platform/CMakeFiles/platform.dir/progress.make

# Include the compile flags for this target's objects.
include src/lib/platform/CMakeFiles/platform.dir/flags.make

src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboard.cpp.o: src/lib/platform/CMakeFiles/platform.dir/flags.make
src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboard.cpp.o: ../src/lib/platform/XWindowsClipboard.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboard.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platform.dir/XWindowsClipboard.cpp.o -c /home/lucero/code/synergy-core/src/lib/platform/XWindowsClipboard.cpp

src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platform.dir/XWindowsClipboard.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/src/lib/platform/XWindowsClipboard.cpp > CMakeFiles/platform.dir/XWindowsClipboard.cpp.i

src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platform.dir/XWindowsClipboard.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/src/lib/platform/XWindowsClipboard.cpp -o CMakeFiles/platform.dir/XWindowsClipboard.cpp.s

src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardAnyBitmapConverter.cpp.o: src/lib/platform/CMakeFiles/platform.dir/flags.make
src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardAnyBitmapConverter.cpp.o: ../src/lib/platform/XWindowsClipboardAnyBitmapConverter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardAnyBitmapConverter.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platform.dir/XWindowsClipboardAnyBitmapConverter.cpp.o -c /home/lucero/code/synergy-core/src/lib/platform/XWindowsClipboardAnyBitmapConverter.cpp

src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardAnyBitmapConverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platform.dir/XWindowsClipboardAnyBitmapConverter.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/src/lib/platform/XWindowsClipboardAnyBitmapConverter.cpp > CMakeFiles/platform.dir/XWindowsClipboardAnyBitmapConverter.cpp.i

src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardAnyBitmapConverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platform.dir/XWindowsClipboardAnyBitmapConverter.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/src/lib/platform/XWindowsClipboardAnyBitmapConverter.cpp -o CMakeFiles/platform.dir/XWindowsClipboardAnyBitmapConverter.cpp.s

src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardBMPConverter.cpp.o: src/lib/platform/CMakeFiles/platform.dir/flags.make
src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardBMPConverter.cpp.o: ../src/lib/platform/XWindowsClipboardBMPConverter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardBMPConverter.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platform.dir/XWindowsClipboardBMPConverter.cpp.o -c /home/lucero/code/synergy-core/src/lib/platform/XWindowsClipboardBMPConverter.cpp

src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardBMPConverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platform.dir/XWindowsClipboardBMPConverter.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/src/lib/platform/XWindowsClipboardBMPConverter.cpp > CMakeFiles/platform.dir/XWindowsClipboardBMPConverter.cpp.i

src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardBMPConverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platform.dir/XWindowsClipboardBMPConverter.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/src/lib/platform/XWindowsClipboardBMPConverter.cpp -o CMakeFiles/platform.dir/XWindowsClipboardBMPConverter.cpp.s

src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardHTMLConverter.cpp.o: src/lib/platform/CMakeFiles/platform.dir/flags.make
src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardHTMLConverter.cpp.o: ../src/lib/platform/XWindowsClipboardHTMLConverter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardHTMLConverter.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platform.dir/XWindowsClipboardHTMLConverter.cpp.o -c /home/lucero/code/synergy-core/src/lib/platform/XWindowsClipboardHTMLConverter.cpp

src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardHTMLConverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platform.dir/XWindowsClipboardHTMLConverter.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/src/lib/platform/XWindowsClipboardHTMLConverter.cpp > CMakeFiles/platform.dir/XWindowsClipboardHTMLConverter.cpp.i

src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardHTMLConverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platform.dir/XWindowsClipboardHTMLConverter.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/src/lib/platform/XWindowsClipboardHTMLConverter.cpp -o CMakeFiles/platform.dir/XWindowsClipboardHTMLConverter.cpp.s

src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardTextConverter.cpp.o: src/lib/platform/CMakeFiles/platform.dir/flags.make
src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardTextConverter.cpp.o: ../src/lib/platform/XWindowsClipboardTextConverter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardTextConverter.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platform.dir/XWindowsClipboardTextConverter.cpp.o -c /home/lucero/code/synergy-core/src/lib/platform/XWindowsClipboardTextConverter.cpp

src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardTextConverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platform.dir/XWindowsClipboardTextConverter.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/src/lib/platform/XWindowsClipboardTextConverter.cpp > CMakeFiles/platform.dir/XWindowsClipboardTextConverter.cpp.i

src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardTextConverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platform.dir/XWindowsClipboardTextConverter.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/src/lib/platform/XWindowsClipboardTextConverter.cpp -o CMakeFiles/platform.dir/XWindowsClipboardTextConverter.cpp.s

src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardUCS2Converter.cpp.o: src/lib/platform/CMakeFiles/platform.dir/flags.make
src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardUCS2Converter.cpp.o: ../src/lib/platform/XWindowsClipboardUCS2Converter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardUCS2Converter.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platform.dir/XWindowsClipboardUCS2Converter.cpp.o -c /home/lucero/code/synergy-core/src/lib/platform/XWindowsClipboardUCS2Converter.cpp

src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardUCS2Converter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platform.dir/XWindowsClipboardUCS2Converter.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/src/lib/platform/XWindowsClipboardUCS2Converter.cpp > CMakeFiles/platform.dir/XWindowsClipboardUCS2Converter.cpp.i

src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardUCS2Converter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platform.dir/XWindowsClipboardUCS2Converter.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/src/lib/platform/XWindowsClipboardUCS2Converter.cpp -o CMakeFiles/platform.dir/XWindowsClipboardUCS2Converter.cpp.s

src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardUTF8Converter.cpp.o: src/lib/platform/CMakeFiles/platform.dir/flags.make
src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardUTF8Converter.cpp.o: ../src/lib/platform/XWindowsClipboardUTF8Converter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardUTF8Converter.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platform.dir/XWindowsClipboardUTF8Converter.cpp.o -c /home/lucero/code/synergy-core/src/lib/platform/XWindowsClipboardUTF8Converter.cpp

src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardUTF8Converter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platform.dir/XWindowsClipboardUTF8Converter.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/src/lib/platform/XWindowsClipboardUTF8Converter.cpp > CMakeFiles/platform.dir/XWindowsClipboardUTF8Converter.cpp.i

src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardUTF8Converter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platform.dir/XWindowsClipboardUTF8Converter.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/src/lib/platform/XWindowsClipboardUTF8Converter.cpp -o CMakeFiles/platform.dir/XWindowsClipboardUTF8Converter.cpp.s

src/lib/platform/CMakeFiles/platform.dir/XWindowsEventQueueBuffer.cpp.o: src/lib/platform/CMakeFiles/platform.dir/flags.make
src/lib/platform/CMakeFiles/platform.dir/XWindowsEventQueueBuffer.cpp.o: ../src/lib/platform/XWindowsEventQueueBuffer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/lib/platform/CMakeFiles/platform.dir/XWindowsEventQueueBuffer.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platform.dir/XWindowsEventQueueBuffer.cpp.o -c /home/lucero/code/synergy-core/src/lib/platform/XWindowsEventQueueBuffer.cpp

src/lib/platform/CMakeFiles/platform.dir/XWindowsEventQueueBuffer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platform.dir/XWindowsEventQueueBuffer.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/src/lib/platform/XWindowsEventQueueBuffer.cpp > CMakeFiles/platform.dir/XWindowsEventQueueBuffer.cpp.i

src/lib/platform/CMakeFiles/platform.dir/XWindowsEventQueueBuffer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platform.dir/XWindowsEventQueueBuffer.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/src/lib/platform/XWindowsEventQueueBuffer.cpp -o CMakeFiles/platform.dir/XWindowsEventQueueBuffer.cpp.s

src/lib/platform/CMakeFiles/platform.dir/XWindowsKeyState.cpp.o: src/lib/platform/CMakeFiles/platform.dir/flags.make
src/lib/platform/CMakeFiles/platform.dir/XWindowsKeyState.cpp.o: ../src/lib/platform/XWindowsKeyState.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/lib/platform/CMakeFiles/platform.dir/XWindowsKeyState.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platform.dir/XWindowsKeyState.cpp.o -c /home/lucero/code/synergy-core/src/lib/platform/XWindowsKeyState.cpp

src/lib/platform/CMakeFiles/platform.dir/XWindowsKeyState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platform.dir/XWindowsKeyState.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/src/lib/platform/XWindowsKeyState.cpp > CMakeFiles/platform.dir/XWindowsKeyState.cpp.i

src/lib/platform/CMakeFiles/platform.dir/XWindowsKeyState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platform.dir/XWindowsKeyState.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/src/lib/platform/XWindowsKeyState.cpp -o CMakeFiles/platform.dir/XWindowsKeyState.cpp.s

src/lib/platform/CMakeFiles/platform.dir/XWindowsScreen.cpp.o: src/lib/platform/CMakeFiles/platform.dir/flags.make
src/lib/platform/CMakeFiles/platform.dir/XWindowsScreen.cpp.o: ../src/lib/platform/XWindowsScreen.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object src/lib/platform/CMakeFiles/platform.dir/XWindowsScreen.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platform.dir/XWindowsScreen.cpp.o -c /home/lucero/code/synergy-core/src/lib/platform/XWindowsScreen.cpp

src/lib/platform/CMakeFiles/platform.dir/XWindowsScreen.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platform.dir/XWindowsScreen.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/src/lib/platform/XWindowsScreen.cpp > CMakeFiles/platform.dir/XWindowsScreen.cpp.i

src/lib/platform/CMakeFiles/platform.dir/XWindowsScreen.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platform.dir/XWindowsScreen.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/src/lib/platform/XWindowsScreen.cpp -o CMakeFiles/platform.dir/XWindowsScreen.cpp.s

src/lib/platform/CMakeFiles/platform.dir/XWindowsScreenSaver.cpp.o: src/lib/platform/CMakeFiles/platform.dir/flags.make
src/lib/platform/CMakeFiles/platform.dir/XWindowsScreenSaver.cpp.o: ../src/lib/platform/XWindowsScreenSaver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object src/lib/platform/CMakeFiles/platform.dir/XWindowsScreenSaver.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platform.dir/XWindowsScreenSaver.cpp.o -c /home/lucero/code/synergy-core/src/lib/platform/XWindowsScreenSaver.cpp

src/lib/platform/CMakeFiles/platform.dir/XWindowsScreenSaver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platform.dir/XWindowsScreenSaver.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/src/lib/platform/XWindowsScreenSaver.cpp > CMakeFiles/platform.dir/XWindowsScreenSaver.cpp.i

src/lib/platform/CMakeFiles/platform.dir/XWindowsScreenSaver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platform.dir/XWindowsScreenSaver.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/src/lib/platform/XWindowsScreenSaver.cpp -o CMakeFiles/platform.dir/XWindowsScreenSaver.cpp.s

src/lib/platform/CMakeFiles/platform.dir/XWindowsUtil.cpp.o: src/lib/platform/CMakeFiles/platform.dir/flags.make
src/lib/platform/CMakeFiles/platform.dir/XWindowsUtil.cpp.o: ../src/lib/platform/XWindowsUtil.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object src/lib/platform/CMakeFiles/platform.dir/XWindowsUtil.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/platform.dir/XWindowsUtil.cpp.o -c /home/lucero/code/synergy-core/src/lib/platform/XWindowsUtil.cpp

src/lib/platform/CMakeFiles/platform.dir/XWindowsUtil.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/platform.dir/XWindowsUtil.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/src/lib/platform/XWindowsUtil.cpp > CMakeFiles/platform.dir/XWindowsUtil.cpp.i

src/lib/platform/CMakeFiles/platform.dir/XWindowsUtil.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/platform.dir/XWindowsUtil.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/src/lib/platform/XWindowsUtil.cpp -o CMakeFiles/platform.dir/XWindowsUtil.cpp.s

# Object files for target platform
platform_OBJECTS = \
"CMakeFiles/platform.dir/XWindowsClipboard.cpp.o" \
"CMakeFiles/platform.dir/XWindowsClipboardAnyBitmapConverter.cpp.o" \
"CMakeFiles/platform.dir/XWindowsClipboardBMPConverter.cpp.o" \
"CMakeFiles/platform.dir/XWindowsClipboardHTMLConverter.cpp.o" \
"CMakeFiles/platform.dir/XWindowsClipboardTextConverter.cpp.o" \
"CMakeFiles/platform.dir/XWindowsClipboardUCS2Converter.cpp.o" \
"CMakeFiles/platform.dir/XWindowsClipboardUTF8Converter.cpp.o" \
"CMakeFiles/platform.dir/XWindowsEventQueueBuffer.cpp.o" \
"CMakeFiles/platform.dir/XWindowsKeyState.cpp.o" \
"CMakeFiles/platform.dir/XWindowsScreen.cpp.o" \
"CMakeFiles/platform.dir/XWindowsScreenSaver.cpp.o" \
"CMakeFiles/platform.dir/XWindowsUtil.cpp.o"

# External object files for target platform
platform_EXTERNAL_OBJECTS =

src/lib/platform/libplatform.a: src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboard.cpp.o
src/lib/platform/libplatform.a: src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardAnyBitmapConverter.cpp.o
src/lib/platform/libplatform.a: src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardBMPConverter.cpp.o
src/lib/platform/libplatform.a: src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardHTMLConverter.cpp.o
src/lib/platform/libplatform.a: src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardTextConverter.cpp.o
src/lib/platform/libplatform.a: src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardUCS2Converter.cpp.o
src/lib/platform/libplatform.a: src/lib/platform/CMakeFiles/platform.dir/XWindowsClipboardUTF8Converter.cpp.o
src/lib/platform/libplatform.a: src/lib/platform/CMakeFiles/platform.dir/XWindowsEventQueueBuffer.cpp.o
src/lib/platform/libplatform.a: src/lib/platform/CMakeFiles/platform.dir/XWindowsKeyState.cpp.o
src/lib/platform/libplatform.a: src/lib/platform/CMakeFiles/platform.dir/XWindowsScreen.cpp.o
src/lib/platform/libplatform.a: src/lib/platform/CMakeFiles/platform.dir/XWindowsScreenSaver.cpp.o
src/lib/platform/libplatform.a: src/lib/platform/CMakeFiles/platform.dir/XWindowsUtil.cpp.o
src/lib/platform/libplatform.a: src/lib/platform/CMakeFiles/platform.dir/build.make
src/lib/platform/libplatform.a: src/lib/platform/CMakeFiles/platform.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX static library libplatform.a"
	cd /home/lucero/code/synergy-core/build/src/lib/platform && $(CMAKE_COMMAND) -P CMakeFiles/platform.dir/cmake_clean_target.cmake
	cd /home/lucero/code/synergy-core/build/src/lib/platform && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/platform.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/lib/platform/CMakeFiles/platform.dir/build: src/lib/platform/libplatform.a

.PHONY : src/lib/platform/CMakeFiles/platform.dir/build

src/lib/platform/CMakeFiles/platform.dir/clean:
	cd /home/lucero/code/synergy-core/build/src/lib/platform && $(CMAKE_COMMAND) -P CMakeFiles/platform.dir/cmake_clean.cmake
.PHONY : src/lib/platform/CMakeFiles/platform.dir/clean

src/lib/platform/CMakeFiles/platform.dir/depend:
	cd /home/lucero/code/synergy-core/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lucero/code/synergy-core /home/lucero/code/synergy-core/src/lib/platform /home/lucero/code/synergy-core/build /home/lucero/code/synergy-core/build/src/lib/platform /home/lucero/code/synergy-core/build/src/lib/platform/CMakeFiles/platform.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/lib/platform/CMakeFiles/platform.dir/depend

