cmake_minimum_required(VERSION 3.16)

project(cppchallenger LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY  https://github.com/google/googletest.git
    GIT_TAG         e2239ee6043f73722e7aa812a459f54a28552929 # release-1.11.0
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_subdirectory(ch1)
