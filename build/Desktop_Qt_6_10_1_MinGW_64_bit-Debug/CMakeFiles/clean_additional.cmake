# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ClinicQueue_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ClinicQueue_autogen.dir\\ParseCache.txt"
  "ClinicQueue_autogen"
  )
endif()
