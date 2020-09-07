# Install script for directory: /home/lucero/code/synergy-core/source-code-git/src/lib

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/lucero/code/synergy-core/build/src/lib/arch/cmake_install.cmake")
  include("/home/lucero/code/synergy-core/build/src/lib/base/cmake_install.cmake")
  include("/home/lucero/code/synergy-core/build/src/lib/client/cmake_install.cmake")
  include("/home/lucero/code/synergy-core/build/src/lib/common/cmake_install.cmake")
  include("/home/lucero/code/synergy-core/build/src/lib/io/cmake_install.cmake")
  include("/home/lucero/code/synergy-core/build/src/lib/ipc/cmake_install.cmake")
  include("/home/lucero/code/synergy-core/build/src/lib/mt/cmake_install.cmake")
  include("/home/lucero/code/synergy-core/build/src/lib/net/cmake_install.cmake")
  include("/home/lucero/code/synergy-core/build/src/lib/platform/cmake_install.cmake")
  include("/home/lucero/code/synergy-core/build/src/lib/server/cmake_install.cmake")
  include("/home/lucero/code/synergy-core/build/src/lib/synergy/cmake_install.cmake")
  include("/home/lucero/code/synergy-core/build/src/lib/shared/cmake_install.cmake")

endif()

