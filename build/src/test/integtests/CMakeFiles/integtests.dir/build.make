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
include src/test/integtests/CMakeFiles/integtests.dir/depend.make

# Include the progress variables for this target.
include src/test/integtests/CMakeFiles/integtests.dir/progress.make

# Include the compile flags for this target's objects.
include src/test/integtests/CMakeFiles/integtests.dir/flags.make

src/test/integtests/CMakeFiles/integtests.dir/Main.cpp.o: src/test/integtests/CMakeFiles/integtests.dir/flags.make
src/test/integtests/CMakeFiles/integtests.dir/Main.cpp.o: /home/lucero/code/synergy-core/source-code-git/src/test/integtests/Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/test/integtests/CMakeFiles/integtests.dir/Main.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/integtests.dir/Main.cpp.o -c /home/lucero/code/synergy-core/source-code-git/src/test/integtests/Main.cpp

src/test/integtests/CMakeFiles/integtests.dir/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/integtests.dir/Main.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/source-code-git/src/test/integtests/Main.cpp > CMakeFiles/integtests.dir/Main.cpp.i

src/test/integtests/CMakeFiles/integtests.dir/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/integtests.dir/Main.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/source-code-git/src/test/integtests/Main.cpp -o CMakeFiles/integtests.dir/Main.cpp.s

src/test/integtests/CMakeFiles/integtests.dir/ipc/IpcTests.cpp.o: src/test/integtests/CMakeFiles/integtests.dir/flags.make
src/test/integtests/CMakeFiles/integtests.dir/ipc/IpcTests.cpp.o: /home/lucero/code/synergy-core/source-code-git/src/test/integtests/ipc/IpcTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/test/integtests/CMakeFiles/integtests.dir/ipc/IpcTests.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/integtests.dir/ipc/IpcTests.cpp.o -c /home/lucero/code/synergy-core/source-code-git/src/test/integtests/ipc/IpcTests.cpp

src/test/integtests/CMakeFiles/integtests.dir/ipc/IpcTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/integtests.dir/ipc/IpcTests.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/source-code-git/src/test/integtests/ipc/IpcTests.cpp > CMakeFiles/integtests.dir/ipc/IpcTests.cpp.i

src/test/integtests/CMakeFiles/integtests.dir/ipc/IpcTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/integtests.dir/ipc/IpcTests.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/source-code-git/src/test/integtests/ipc/IpcTests.cpp -o CMakeFiles/integtests.dir/ipc/IpcTests.cpp.s

src/test/integtests/CMakeFiles/integtests.dir/net/NetworkTests.cpp.o: src/test/integtests/CMakeFiles/integtests.dir/flags.make
src/test/integtests/CMakeFiles/integtests.dir/net/NetworkTests.cpp.o: /home/lucero/code/synergy-core/source-code-git/src/test/integtests/net/NetworkTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/test/integtests/CMakeFiles/integtests.dir/net/NetworkTests.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/integtests.dir/net/NetworkTests.cpp.o -c /home/lucero/code/synergy-core/source-code-git/src/test/integtests/net/NetworkTests.cpp

src/test/integtests/CMakeFiles/integtests.dir/net/NetworkTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/integtests.dir/net/NetworkTests.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/source-code-git/src/test/integtests/net/NetworkTests.cpp > CMakeFiles/integtests.dir/net/NetworkTests.cpp.i

src/test/integtests/CMakeFiles/integtests.dir/net/NetworkTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/integtests.dir/net/NetworkTests.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/source-code-git/src/test/integtests/net/NetworkTests.cpp -o CMakeFiles/integtests.dir/net/NetworkTests.cpp.s

src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsClipboardTests.cpp.o: src/test/integtests/CMakeFiles/integtests.dir/flags.make
src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsClipboardTests.cpp.o: /home/lucero/code/synergy-core/source-code-git/src/test/integtests/platform/XWindowsClipboardTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsClipboardTests.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/integtests.dir/platform/XWindowsClipboardTests.cpp.o -c /home/lucero/code/synergy-core/source-code-git/src/test/integtests/platform/XWindowsClipboardTests.cpp

src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsClipboardTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/integtests.dir/platform/XWindowsClipboardTests.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/source-code-git/src/test/integtests/platform/XWindowsClipboardTests.cpp > CMakeFiles/integtests.dir/platform/XWindowsClipboardTests.cpp.i

src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsClipboardTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/integtests.dir/platform/XWindowsClipboardTests.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/source-code-git/src/test/integtests/platform/XWindowsClipboardTests.cpp -o CMakeFiles/integtests.dir/platform/XWindowsClipboardTests.cpp.s

src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsKeyStateTests.cpp.o: src/test/integtests/CMakeFiles/integtests.dir/flags.make
src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsKeyStateTests.cpp.o: /home/lucero/code/synergy-core/source-code-git/src/test/integtests/platform/XWindowsKeyStateTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsKeyStateTests.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/integtests.dir/platform/XWindowsKeyStateTests.cpp.o -c /home/lucero/code/synergy-core/source-code-git/src/test/integtests/platform/XWindowsKeyStateTests.cpp

src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsKeyStateTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/integtests.dir/platform/XWindowsKeyStateTests.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/source-code-git/src/test/integtests/platform/XWindowsKeyStateTests.cpp > CMakeFiles/integtests.dir/platform/XWindowsKeyStateTests.cpp.i

src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsKeyStateTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/integtests.dir/platform/XWindowsKeyStateTests.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/source-code-git/src/test/integtests/platform/XWindowsKeyStateTests.cpp -o CMakeFiles/integtests.dir/platform/XWindowsKeyStateTests.cpp.s

src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsScreenSaverTests.cpp.o: src/test/integtests/CMakeFiles/integtests.dir/flags.make
src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsScreenSaverTests.cpp.o: /home/lucero/code/synergy-core/source-code-git/src/test/integtests/platform/XWindowsScreenSaverTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsScreenSaverTests.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/integtests.dir/platform/XWindowsScreenSaverTests.cpp.o -c /home/lucero/code/synergy-core/source-code-git/src/test/integtests/platform/XWindowsScreenSaverTests.cpp

src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsScreenSaverTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/integtests.dir/platform/XWindowsScreenSaverTests.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/source-code-git/src/test/integtests/platform/XWindowsScreenSaverTests.cpp > CMakeFiles/integtests.dir/platform/XWindowsScreenSaverTests.cpp.i

src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsScreenSaverTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/integtests.dir/platform/XWindowsScreenSaverTests.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/source-code-git/src/test/integtests/platform/XWindowsScreenSaverTests.cpp -o CMakeFiles/integtests.dir/platform/XWindowsScreenSaverTests.cpp.s

src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsScreenTests.cpp.o: src/test/integtests/CMakeFiles/integtests.dir/flags.make
src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsScreenTests.cpp.o: /home/lucero/code/synergy-core/source-code-git/src/test/integtests/platform/XWindowsScreenTests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsScreenTests.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/integtests.dir/platform/XWindowsScreenTests.cpp.o -c /home/lucero/code/synergy-core/source-code-git/src/test/integtests/platform/XWindowsScreenTests.cpp

src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsScreenTests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/integtests.dir/platform/XWindowsScreenTests.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/source-code-git/src/test/integtests/platform/XWindowsScreenTests.cpp > CMakeFiles/integtests.dir/platform/XWindowsScreenTests.cpp.i

src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsScreenTests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/integtests.dir/platform/XWindowsScreenTests.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/source-code-git/src/test/integtests/platform/XWindowsScreenTests.cpp -o CMakeFiles/integtests.dir/platform/XWindowsScreenTests.cpp.s

src/test/integtests/CMakeFiles/integtests.dir/__/global/TestEventQueue.cpp.o: src/test/integtests/CMakeFiles/integtests.dir/flags.make
src/test/integtests/CMakeFiles/integtests.dir/__/global/TestEventQueue.cpp.o: /home/lucero/code/synergy-core/source-code-git/src/test/global/TestEventQueue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/test/integtests/CMakeFiles/integtests.dir/__/global/TestEventQueue.cpp.o"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/integtests.dir/__/global/TestEventQueue.cpp.o -c /home/lucero/code/synergy-core/source-code-git/src/test/global/TestEventQueue.cpp

src/test/integtests/CMakeFiles/integtests.dir/__/global/TestEventQueue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/integtests.dir/__/global/TestEventQueue.cpp.i"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucero/code/synergy-core/source-code-git/src/test/global/TestEventQueue.cpp > CMakeFiles/integtests.dir/__/global/TestEventQueue.cpp.i

src/test/integtests/CMakeFiles/integtests.dir/__/global/TestEventQueue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/integtests.dir/__/global/TestEventQueue.cpp.s"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucero/code/synergy-core/source-code-git/src/test/global/TestEventQueue.cpp -o CMakeFiles/integtests.dir/__/global/TestEventQueue.cpp.s

# Object files for target integtests
integtests_OBJECTS = \
"CMakeFiles/integtests.dir/Main.cpp.o" \
"CMakeFiles/integtests.dir/ipc/IpcTests.cpp.o" \
"CMakeFiles/integtests.dir/net/NetworkTests.cpp.o" \
"CMakeFiles/integtests.dir/platform/XWindowsClipboardTests.cpp.o" \
"CMakeFiles/integtests.dir/platform/XWindowsKeyStateTests.cpp.o" \
"CMakeFiles/integtests.dir/platform/XWindowsScreenSaverTests.cpp.o" \
"CMakeFiles/integtests.dir/platform/XWindowsScreenTests.cpp.o" \
"CMakeFiles/integtests.dir/__/global/TestEventQueue.cpp.o"

# External object files for target integtests
integtests_EXTERNAL_OBJECTS =

bin/integtests: src/test/integtests/CMakeFiles/integtests.dir/Main.cpp.o
bin/integtests: src/test/integtests/CMakeFiles/integtests.dir/ipc/IpcTests.cpp.o
bin/integtests: src/test/integtests/CMakeFiles/integtests.dir/net/NetworkTests.cpp.o
bin/integtests: src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsClipboardTests.cpp.o
bin/integtests: src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsKeyStateTests.cpp.o
bin/integtests: src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsScreenSaverTests.cpp.o
bin/integtests: src/test/integtests/CMakeFiles/integtests.dir/platform/XWindowsScreenTests.cpp.o
bin/integtests: src/test/integtests/CMakeFiles/integtests.dir/__/global/TestEventQueue.cpp.o
bin/integtests: src/test/integtests/CMakeFiles/integtests.dir/build.make
bin/integtests: src/lib/arch/libarch.a
bin/integtests: src/lib/base/libbase.a
bin/integtests: src/lib/client/libclient.a
bin/integtests: src/lib/common/libcommon.a
bin/integtests: src/lib/io/libio.a
bin/integtests: src/lib/ipc/libipc.a
bin/integtests: src/lib/mt/libmt.a
bin/integtests: src/lib/net/libnet.a
bin/integtests: src/lib/platform/libplatform.a
bin/integtests: src/lib/server/libserver.a
bin/integtests: src/lib/synergy/libsynlib.a
bin/integtests: src/test/libgtest.a
bin/integtests: src/test/libgmock.a
bin/integtests: src/lib/client/libclient.a
bin/integtests: src/lib/ipc/libipc.a
bin/integtests: src/lib/platform/libplatform.a
bin/integtests: src/lib/server/libserver.a
bin/integtests: src/lib/synergy/libsynlib.a
bin/integtests: src/lib/shared/libshared.a
bin/integtests: src/lib/arch/libarch.a
bin/integtests: src/lib/base/libbase.a
bin/integtests: src/lib/common/libcommon.a
bin/integtests: src/lib/net/libnet.a
bin/integtests: src/lib/io/libio.a
bin/integtests: src/lib/mt/libmt.a
bin/integtests: src/test/integtests/CMakeFiles/integtests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lucero/code/synergy-core/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable ../../../bin/integtests"
	cd /home/lucero/code/synergy-core/build/src/test/integtests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/integtests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/test/integtests/CMakeFiles/integtests.dir/build: bin/integtests

.PHONY : src/test/integtests/CMakeFiles/integtests.dir/build

src/test/integtests/CMakeFiles/integtests.dir/clean:
	cd /home/lucero/code/synergy-core/build/src/test/integtests && $(CMAKE_COMMAND) -P CMakeFiles/integtests.dir/cmake_clean.cmake
.PHONY : src/test/integtests/CMakeFiles/integtests.dir/clean

src/test/integtests/CMakeFiles/integtests.dir/depend:
	cd /home/lucero/code/synergy-core/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lucero/code/synergy-core/source-code-git /home/lucero/code/synergy-core/source-code-git/src/test/integtests /home/lucero/code/synergy-core/build /home/lucero/code/synergy-core/build/src/test/integtests /home/lucero/code/synergy-core/build/src/test/integtests/CMakeFiles/integtests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/test/integtests/CMakeFiles/integtests.dir/depend

