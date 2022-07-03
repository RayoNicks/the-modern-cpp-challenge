set(PROBLEM prime_factors_of_a_number)

add_library(${PROBLEM} STATIC ${PROBLEM}.cpp)
target_include_directories(${PROBLEM} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(${PROBLEM} PRIVATE largest_prime_smaller_than_given_number)

add_executable(${PROBLEM}-main main.cpp)
target_include_directories(${PROBLEM}-main PRIVATE ${PROBLEM})
target_link_libraries(${PROBLEM}-main PRIVATE ${PROBLEM})

add_executable(${PROBLEM}-unittest test.cpp)
target_include_directories(${PROBLEM}-unittest PRIVATE ${PROBLEM})
target_link_libraries(${PROBLEM}-unittest PRIVATE ${PROBLEM} gtest_main gmock_main)

add_test(
    NAME ${PROBLEM}-test
    COMMAND $<TARGET_FILE:${PROBLEM}-unittest>)
