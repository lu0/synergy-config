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
CMAKE_SOURCE_DIR = /home/lucero/code/synergy-core/source-code-git

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lucero/code/synergy-core/build

# Include any dependencies generated for this target.
include src/test/unittests/CMakeFiles/unittests.dir/depend.make

# Include the progress variables for this target.
include src/test/unittests/CMakeFiles/unittests.dir/progress.make

# Include the compile flags for this target's objects.
include src/test/unittests/CMakeFiles/unittests.dir/flags.make

src/test/unittests/CMakeFiles/unittests.dir/Main.cpp.o: src/test/unittests/CMakeFiles/unittests.dir/flags.make
src/test/unittests/CMakeFiles/unittests.dir/Main.cpp.o: /home/lucero/code/synergy-core/source-code-git/src/test/unittests/Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/test/unittests/CMakeFiles/unittests.dir/Main.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unittests.dir/Main.cpp.o -c /home/lucero/code/synergy-core/source-code-git/src/test/unittests/Main.cpp

src/test/unittests/CMakeFiles/unittests.dir/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unittests.dir/Main.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/source-code-git/src/test/unittests/Main.cpp > CMakeFiles/unittests.dir/Main.cpp.i

src/test/unittests/CMakeFiles/unittests.dir/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unittests.dir/Main.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/source-code-git/src/test/unittests/Main.cpp -o CMakeFiles/unittests.dir/Main.cpp.s

src/test/unittests/CMakeFiles/unittests.dir/base/StringTests.cpp.o: src/test/unittests/CMakeFiles/unittests.dir/flags.make
src/test/unittests/CMakeFiles/unittests.dir/base/StringTests.cpp.o: /home/lucero/code/synergy-core/source-code-git/src/test/unittests/base/StringTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/test/unittests/CMakeFiles/unittests.dir/base/StringTests.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unittests.dir/base/StringTests.cpp.o -c /home/lucero/code/synergy-core/source-code-git/src/test/unittests/base/StringTests.cpp

src/test/unittests/CMakeFiles/unittests.dir/base/StringTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unittests.dir/base/StringTests.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/source-code-git/src/test/unittests/base/StringTests.cpp > CMakeFiles/unittests.dir/base/StringTests.cpp.i

src/test/unittests/CMakeFiles/unittests.dir/base/StringTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unittests.dir/base/StringTests.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/source-code-git/src/test/unittests/base/StringTests.cpp -o CMakeFiles/unittests.dir/base/StringTests.cpp.s

src/test/unittests/CMakeFiles/unittests.dir/ipc/IpcLogOutputterTests.cpp.o: src/test/unittests/CMakeFiles/unittests.dir/flags.make
src/test/unittests/CMakeFiles/unittests.dir/ipc/IpcLogOutputterTests.cpp.o: /home/lucero/code/synergy-core/source-code-git/src/test/unittests/ipc/IpcLogOutputterTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/test/unittests/CMakeFiles/unittests.dir/ipc/IpcLogOutputterTests.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unittests.dir/ipc/IpcLogOutputterTests.cpp.o -c /home/lucero/code/synergy-core/source-code-git/src/test/unittests/ipc/IpcLogOutputterTests.cpp

src/test/unittests/CMakeFiles/unittests.dir/ipc/IpcLogOutputterTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unittests.dir/ipc/IpcLogOutputterTests.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/source-code-git/src/test/unittests/ipc/IpcLogOutputterTests.cpp > CMakeFiles/unittests.dir/ipc/IpcLogOutputterTests.cpp.i

src/test/unittests/CMakeFiles/unittests.dir/ipc/IpcLogOutputterTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unittests.dir/ipc/IpcLogOutputterTests.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/source-code-git/src/test/unittests/ipc/IpcLogOutputterTests.cpp -o CMakeFiles/unittests.dir/ipc/IpcLogOutputterTests.cpp.s

src/test/unittests/CMakeFiles/unittests.dir/shared/SerialKeyTests.cpp.o: src/test/unittests/CMakeFiles/unittests.dir/flags.make
src/test/unittests/CMakeFiles/unittests.dir/shared/SerialKeyTests.cpp.o: /home/lucero/code/synergy-core/source-code-git/src/test/unittests/shared/SerialKeyTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/test/unittests/CMakeFiles/unittests.dir/shared/SerialKeyTests.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unittests.dir/shared/SerialKeyTests.cpp.o -c /home/lucero/code/synergy-core/source-code-git/src/test/unittests/shared/SerialKeyTests.cpp

src/test/unittests/CMakeFiles/unittests.dir/shared/SerialKeyTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unittests.dir/shared/SerialKeyTests.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/source-code-git/src/test/unittests/shared/SerialKeyTests.cpp > CMakeFiles/unittests.dir/shared/SerialKeyTests.cpp.i

src/test/unittests/CMakeFiles/unittests.dir/shared/SerialKeyTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unittests.dir/shared/SerialKeyTests.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/source-code-git/src/test/unittests/shared/SerialKeyTests.cpp -o CMakeFiles/unittests.dir/shared/SerialKeyTests.cpp.s

src/test/unittests/CMakeFiles/unittests.dir/synergy/ArgParserTests.cpp.o: src/test/unittests/CMakeFiles/unittests.dir/flags.make
src/test/unittests/CMakeFiles/unittests.dir/synergy/ArgParserTests.cpp.o: /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/ArgParserTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/test/unittests/CMakeFiles/unittests.dir/synergy/ArgParserTests.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unittests.dir/synergy/ArgParserTests.cpp.o -c /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/ArgParserTests.cpp

src/test/unittests/CMakeFiles/unittests.dir/synergy/ArgParserTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unittests.dir/synergy/ArgParserTests.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/ArgParserTests.cpp > CMakeFiles/unittests.dir/synergy/ArgParserTests.cpp.i

src/test/unittests/CMakeFiles/unittests.dir/synergy/ArgParserTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unittests.dir/synergy/ArgParserTests.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/ArgParserTests.cpp -o CMakeFiles/unittests.dir/synergy/ArgParserTests.cpp.s

src/test/unittests/CMakeFiles/unittests.dir/synergy/ClientArgsParsingTests.cpp.o: src/test/unittests/CMakeFiles/unittests.dir/flags.make
src/test/unittests/CMakeFiles/unittests.dir/synergy/ClientArgsParsingTests.cpp.o: /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/ClientArgsParsingTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/test/unittests/CMakeFiles/unittests.dir/synergy/ClientArgsParsingTests.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unittests.dir/synergy/ClientArgsParsingTests.cpp.o -c /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/ClientArgsParsingTests.cpp

src/test/unittests/CMakeFiles/unittests.dir/synergy/ClientArgsParsingTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unittests.dir/synergy/ClientArgsParsingTests.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/ClientArgsParsingTests.cpp > CMakeFiles/unittests.dir/synergy/ClientArgsParsingTests.cpp.i

src/test/unittests/CMakeFiles/unittests.dir/synergy/ClientArgsParsingTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unittests.dir/synergy/ClientArgsParsingTests.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/ClientArgsParsingTests.cpp -o CMakeFiles/unittests.dir/synergy/ClientArgsParsingTests.cpp.s

src/test/unittests/CMakeFiles/unittests.dir/synergy/ClipboardChunkTests.cpp.o: src/test/unittests/CMakeFiles/unittests.dir/flags.make
src/test/unittests/CMakeFiles/unittests.dir/synergy/ClipboardChunkTests.cpp.o: /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/ClipboardChunkTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/test/unittests/CMakeFiles/unittests.dir/synergy/ClipboardChunkTests.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unittests.dir/synergy/ClipboardChunkTests.cpp.o -c /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/ClipboardChunkTests.cpp

src/test/unittests/CMakeFiles/unittests.dir/synergy/ClipboardChunkTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unittests.dir/synergy/ClipboardChunkTests.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/ClipboardChunkTests.cpp > CMakeFiles/unittests.dir/synergy/ClipboardChunkTests.cpp.i

src/test/unittests/CMakeFiles/unittests.dir/synergy/ClipboardChunkTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unittests.dir/synergy/ClipboardChunkTests.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/ClipboardChunkTests.cpp -o CMakeFiles/unittests.dir/synergy/ClipboardChunkTests.cpp.s

src/test/unittests/CMakeFiles/unittests.dir/synergy/ClipboardTests.cpp.o: src/test/unittests/CMakeFiles/unittests.dir/flags.make
src/test/unittests/CMakeFiles/unittests.dir/synergy/ClipboardTests.cpp.o: /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/ClipboardTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/test/unittests/CMakeFiles/unittests.dir/synergy/ClipboardTests.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unittests.dir/synergy/ClipboardTests.cpp.o -c /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/ClipboardTests.cpp

src/test/unittests/CMakeFiles/unittests.dir/synergy/ClipboardTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unittests.dir/synergy/ClipboardTests.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/ClipboardTests.cpp > CMakeFiles/unittests.dir/synergy/ClipboardTests.cpp.i

src/test/unittests/CMakeFiles/unittests.dir/synergy/ClipboardTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unittests.dir/synergy/ClipboardTests.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/ClipboardTests.cpp -o CMakeFiles/unittests.dir/synergy/ClipboardTests.cpp.s

src/test/unittests/CMakeFiles/unittests.dir/synergy/DeprecatedArgsParsingTests.cpp.o: src/test/unittests/CMakeFiles/unittests.dir/flags.make
src/test/unittests/CMakeFiles/unittests.dir/synergy/DeprecatedArgsParsingTests.cpp.o: /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/DeprecatedArgsParsingTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/test/unittests/CMakeFiles/unittests.dir/synergy/DeprecatedArgsParsingTests.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unittests.dir/synergy/DeprecatedArgsParsingTests.cpp.o -c /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/DeprecatedArgsParsingTests.cpp

src/test/unittests/CMakeFiles/unittests.dir/synergy/DeprecatedArgsParsingTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unittests.dir/synergy/DeprecatedArgsParsingTests.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/DeprecatedArgsParsingTests.cpp > CMakeFiles/unittests.dir/synergy/DeprecatedArgsParsingTests.cpp.i

src/test/unittests/CMakeFiles/unittests.dir/synergy/DeprecatedArgsParsingTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unittests.dir/synergy/DeprecatedArgsParsingTests.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/DeprecatedArgsParsingTests.cpp -o CMakeFiles/unittests.dir/synergy/DeprecatedArgsParsingTests.cpp.s

src/test/unittests/CMakeFiles/unittests.dir/synergy/GenericArgsParsingTests.cpp.o: src/test/unittests/CMakeFiles/unittests.dir/flags.make
src/test/unittests/CMakeFiles/unittests.dir/synergy/GenericArgsParsingTests.cpp.o: /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/GenericArgsParsingTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object src/test/unittests/CMakeFiles/unittests.dir/synergy/GenericArgsParsingTests.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unittests.dir/synergy/GenericArgsParsingTests.cpp.o -c /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/GenericArgsParsingTests.cpp

src/test/unittests/CMakeFiles/unittests.dir/synergy/GenericArgsParsingTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unittests.dir/synergy/GenericArgsParsingTests.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/GenericArgsParsingTests.cpp > CMakeFiles/unittests.dir/synergy/GenericArgsParsingTests.cpp.i

src/test/unittests/CMakeFiles/unittests.dir/synergy/GenericArgsParsingTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unittests.dir/synergy/GenericArgsParsingTests.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/GenericArgsParsingTests.cpp -o CMakeFiles/unittests.dir/synergy/GenericArgsParsingTests.cpp.s

src/test/unittests/CMakeFiles/unittests.dir/synergy/KeyMapTests.cpp.o: src/test/unittests/CMakeFiles/unittests.dir/flags.make
src/test/unittests/CMakeFiles/unittests.dir/synergy/KeyMapTests.cpp.o: /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/KeyMapTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object src/test/unittests/CMakeFiles/unittests.dir/synergy/KeyMapTests.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unittests.dir/synergy/KeyMapTests.cpp.o -c /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/KeyMapTests.cpp

src/test/unittests/CMakeFiles/unittests.dir/synergy/KeyMapTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unittests.dir/synergy/KeyMapTests.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/KeyMapTests.cpp > CMakeFiles/unittests.dir/synergy/KeyMapTests.cpp.i

src/test/unittests/CMakeFiles/unittests.dir/synergy/KeyMapTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unittests.dir/synergy/KeyMapTests.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/KeyMapTests.cpp -o CMakeFiles/unittests.dir/synergy/KeyMapTests.cpp.s

src/test/unittests/CMakeFiles/unittests.dir/synergy/KeyStateTests.cpp.o: src/test/unittests/CMakeFiles/unittests.dir/flags.make
src/test/unittests/CMakeFiles/unittests.dir/synergy/KeyStateTests.cpp.o: /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/KeyStateTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object src/test/unittests/CMakeFiles/unittests.dir/synergy/KeyStateTests.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unittests.dir/synergy/KeyStateTests.cpp.o -c /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/KeyStateTests.cpp

src/test/unittests/CMakeFiles/unittests.dir/synergy/KeyStateTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unittests.dir/synergy/KeyStateTests.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/KeyStateTests.cpp > CMakeFiles/unittests.dir/synergy/KeyStateTests.cpp.i

src/test/unittests/CMakeFiles/unittests.dir/synergy/KeyStateTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unittests.dir/synergy/KeyStateTests.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/KeyStateTests.cpp -o CMakeFiles/unittests.dir/synergy/KeyStateTests.cpp.s

src/test/unittests/CMakeFiles/unittests.dir/synergy/ServerArgsParsingTests.cpp.o: src/test/unittests/CMakeFiles/unittests.dir/flags.make
src/test/unittests/CMakeFiles/unittests.dir/synergy/ServerArgsParsingTests.cpp.o: /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/ServerArgsParsingTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object src/test/unittests/CMakeFiles/unittests.dir/synergy/ServerArgsParsingTests.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unittests.dir/synergy/ServerArgsParsingTests.cpp.o -c /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/ServerArgsParsingTests.cpp

src/test/unittests/CMakeFiles/unittests.dir/synergy/ServerArgsParsingTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unittests.dir/synergy/ServerArgsParsingTests.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/ServerArgsParsingTests.cpp > CMakeFiles/unittests.dir/synergy/ServerArgsParsingTests.cpp.i

src/test/unittests/CMakeFiles/unittests.dir/synergy/ServerArgsParsingTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unittests.dir/synergy/ServerArgsParsingTests.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/source-code-git/src/test/unittests/synergy/ServerArgsParsingTests.cpp -o CMakeFiles/unittests.dir/synergy/ServerArgsParsingTests.cpp.s

src/test/unittests/CMakeFiles/unittests.dir/__/global/TestEventQueue.cpp.o: src/test/unittests/CMakeFiles/unittests.dir/flags.make
src/test/unittests/CMakeFiles/unittests.dir/__/global/TestEventQueue.cpp.o: /home/lucero/code/synergy-core/source-code-git/src/test/global/TestEventQueue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object src/test/unittests/CMakeFiles/unittests.dir/__/global/TestEventQueue.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unittests.dir/__/global/TestEventQueue.cpp.o -c /home/lucero/code/synergy-core/source-code-git/src/test/global/TestEventQueue.cpp

src/test/unittests/CMakeFiles/unittests.dir/__/global/TestEventQueue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unittests.dir/__/global/TestEventQueue.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/source-code-git/src/test/global/TestEventQueue.cpp > CMakeFiles/unittests.dir/__/global/TestEventQueue.cpp.i

src/test/unittests/CMakeFiles/unittests.dir/__/global/TestEventQueue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unittests.dir/__/global/TestEventQueue.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/source-code-git/src/test/global/TestEventQueue.cpp -o CMakeFiles/unittests.dir/__/global/TestEventQueue.cpp.s

# Object files for target unittests
unittests_OBJECTS = \
"CMakeFiles/unittests.dir/Main.cpp.o" \
"CMakeFiles/unittests.dir/base/StringTests.cpp.o" \
"CMakeFiles/unittests.dir/ipc/IpcLogOutputterTests.cpp.o" \
"CMakeFiles/unittests.dir/shared/SerialKeyTests.cpp.o" \
"CMakeFiles/unittests.dir/synergy/ArgParserTests.cpp.o" \
"CMakeFiles/unittests.dir/synergy/ClientArgsParsingTests.cpp.o" \
"CMakeFiles/unittests.dir/synergy/ClipboardChunkTests.cpp.o" \
"CMakeFiles/unittests.dir/synergy/ClipboardTests.cpp.o" \
"CMakeFiles/unittests.dir/synergy/DeprecatedArgsParsingTests.cpp.o" \
"CMakeFiles/unittests.dir/synergy/GenericArgsParsingTests.cpp.o" \
"CMakeFiles/unittests.dir/synergy/KeyMapTests.cpp.o" \
"CMakeFiles/unittests.dir/synergy/KeyStateTests.cpp.o" \
"CMakeFiles/unittests.dir/synergy/ServerArgsParsingTests.cpp.o" \
"CMakeFiles/unittests.dir/__/global/TestEventQueue.cpp.o"

# External object files for target unittests
unittests_EXTERNAL_OBJECTS =

bin/unittests: src/test/unittests/CMakeFiles/unittests.dir/Main.cpp.o
bin/unittests: src/test/unittests/CMakeFiles/unittests.dir/base/StringTests.cpp.o
bin/unittests: src/test/unittests/CMakeFiles/unittests.dir/ipc/IpcLogOutputterTests.cpp.o
bin/unittests: src/test/unittests/CMakeFiles/unittests.dir/shared/SerialKeyTests.cpp.o
bin/unittests: src/test/unittests/CMakeFiles/unittests.dir/synergy/ArgParserTests.cpp.o
bin/unittests: src/test/unittests/CMakeFiles/unittests.dir/synergy/ClientArgsParsingTests.cpp.o
bin/unittests: src/test/unittests/CMakeFiles/unittests.dir/synergy/ClipboardChunkTests.cpp.o
bin/unittests: src/test/unittests/CMakeFiles/unittests.dir/synergy/ClipboardTests.cpp.o
bin/unittests: src/test/unittests/CMakeFiles/unittests.dir/synergy/DeprecatedArgsParsingTests.cpp.o
bin/unittests: src/test/unittests/CMakeFiles/unittests.dir/synergy/GenericArgsParsingTests.cpp.o
bin/unittests: src/test/unittests/CMakeFiles/unittests.dir/synergy/KeyMapTests.cpp.o
bin/unittests: src/test/unittests/CMakeFiles/unittests.dir/synergy/KeyStateTests.cpp.o
bin/unittests: src/test/unittests/CMakeFiles/unittests.dir/synergy/ServerArgsParsingTests.cpp.o
bin/unittests: src/test/unittests/CMakeFiles/unittests.dir/__/global/TestEventQueue.cpp.o
bin/unittests: src/test/unittests/CMakeFiles/unittests.dir/build.make
bin/unittests: src/lib/arch/libarch.a
bin/unittests: src/lib/base/libbase.a
bin/unittests: src/lib/client/libclient.a
bin/unittests: src/lib/server/libserver.a
bin/unittests: src/lib/common/libcommon.a
bin/unittests: src/lib/io/libio.a
bin/unittests: src/lib/net/libnet.a
bin/unittests: src/lib/platform/libplatform.a
bin/unittests: src/lib/server/libserver.a
bin/unittests: src/lib/synergy/libsynlib.a
bin/unittests: src/lib/mt/libmt.a
bin/unittests: src/lib/ipc/libipc.a
bin/unittests: src/test/libgtest.a
bin/unittests: src/test/libgmock.a
bin/unittests: src/lib/shared/libshared.a
bin/unittests: src/lib/client/libclient.a
bin/unittests: src/lib/server/libserver.a
bin/unittests: src/lib/platform/libplatform.a
bin/unittests: src/lib/synergy/libsynlib.a
bin/unittests: src/lib/ipc/libipc.a
bin/unittests: src/lib/shared/libshared.a
bin/unittests: src/lib/arch/libarch.a
bin/unittests: src/lib/base/libbase.a
bin/unittests: src/lib/common/libcommon.a
bin/unittests: src/lib/net/libnet.a
bin/unittests: src/lib/io/libio.a
bin/unittests: src/lib/mt/libmt.a
bin/unittests: src/test/unittests/CMakeFiles/unittests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking CXX executable ../../../bin/unittests"
	cd /home/lucero/code/synergy-core/build/src/test/unittests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/unittests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/test/unittests/CMakeFiles/unittests.dir/build: bin/unittests

.PHONY : src/test/unittests/CMakeFiles/unittests.dir/build

src/test/unittests/CMakeFiles/unittests.dir/clean:
	cd /home/lucero/code/synergy-core/build/src/test/unittests && $(CMAKE_COMMAND) -P CMakeFiles/unittests.dir/cmake_clean.cmake
.PHONY : src/test/unittests/CMakeFiles/unittests.dir/clean

src/test/unittests/CMakeFiles/unittests.dir/depend:
	cd /home/lucero/code/synergy-core/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lucero/code/synergy-core/source-code-git /home/lucero/code/synergy-core/source-code-git/src/test/unittests /home/lucero/code/synergy-core/build /home/lucero/code/synergy-core/build/src/test/unittests /home/lucero/code/synergy-core/build/src/test/unittests/CMakeFiles/unittests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/test/unittests/CMakeFiles/unittests.dir/depend

