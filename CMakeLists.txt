cmake_minimum_required(VERSION 3.15.5)

# Set the name of the project and store it in a variable, PROJECT_NAME.
project(git_playground)

set(Headers "")
set(Sources "")
set(Libraries "")

################################################################################
# Third-Party Libraries and Headers
################################################################################

# Require at least this version of boost
find_package(Boost 1.71.0)
if(NOT Boost_FOUND)
  message(FATAL_ERROR "boost not found")
endif()

list(APPEND Headers ${CMAKE_CURRENT_SOURCE_DIR}/inc)
list(APPEND Headers ${Boost_INCLUDE_DIRS})

################################################################################
# Source files and compiler options
################################################################################

list(APPEND Sources src/A.cpp
                    src/B.cpp
                    src/maincli.cpp)

if (MSVC)
    add_compile_options(-Zi
                        -W4
                        -EHsc
                        -D_CRT_SECURE_NO_WARNINGS
                        -DSTRICT
                        -DUNICODE
                        -D_UNICODE)

else()
    # fail until we target more platforms
    message(FATAL_ERROR "compiler not supported")
endif()

################################################################################
# Executable and its options
################################################################################

add_executable(${PROJECT_NAME} ${Sources})

if (MSVC)
    target_link_options(${PROJECT_NAME} PRIVATE -SUBSYSTEM:CONSOLE
                                                -INCREMENTAL:NO)
else()
    # fail until we target more platforms
    message(FATAL_ERROR "compiler not supported")
endif()

target_link_libraries(${PROJECT_NAME} ${Libraries})

target_include_directories(${PROJECT_NAME} PRIVATE ${Headers})