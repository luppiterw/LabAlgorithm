cmake_minimum_required(VERSION 3.10)
project(LabAlgorithm)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)
#set(CMAKE_BUILD_TYPE Release)

set(PREFIX "${PROJECT_SOURCE_DIR}")
message(${PROJECT_SOURCE_DIR})
set(PROJECT_OUT_PUT_DIR ${PROJECT_SOURCE_DIR}/bin)
set(srcdirs
        ${PROJECT_SOURCE_DIR}
        ${PROJECT_SOURCE_DIR}/Sort
        ${PROJECT_SOURCE_DIR}/Kits
        ${PROJECT_SOURCE_DIR}/Tester
#        ${PROJECT_SOURCE_DIR}/Temp
        )

include_directories(
        ${PROJECT_SOURCE_DIR}/Sort
        ${PROJECT_SOURCE_DIR}/Kits
        ${PROJECT_SOURCE_DIR}/Tester
        )

#link_directories()
#add_subdirectory(Temp)

foreach(srcdir ${srcdirs})
    include_directories(${srcdir})
    aux_source_directory(${srcdir} project_source_files)
endforeach()

add_executable(LabAlgorithm ${project_source_files} Kits/TextUtils.hpp)
#target_link_libraries(LabAlgorithm sort)
#install(TARGETS LabAlgorithm DESTINATION ${PROJECT_OUT_PUT_DIR})
