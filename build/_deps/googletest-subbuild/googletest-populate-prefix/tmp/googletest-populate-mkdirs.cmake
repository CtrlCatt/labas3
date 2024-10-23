# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/media/ivan-pro/A8E00B75E00B4950/labas3/build/_deps/googletest-src"
  "/media/ivan-pro/A8E00B75E00B4950/labas3/build/_deps/googletest-build"
  "/media/ivan-pro/A8E00B75E00B4950/labas3/build/_deps/googletest-subbuild/googletest-populate-prefix"
  "/media/ivan-pro/A8E00B75E00B4950/labas3/build/_deps/googletest-subbuild/googletest-populate-prefix/tmp"
  "/media/ivan-pro/A8E00B75E00B4950/labas3/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
  "/media/ivan-pro/A8E00B75E00B4950/labas3/build/_deps/googletest-subbuild/googletest-populate-prefix/src"
  "/media/ivan-pro/A8E00B75E00B4950/labas3/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/media/ivan-pro/A8E00B75E00B4950/labas3/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/media/ivan-pro/A8E00B75E00B4950/labas3/build/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
