add_library(leap_year_lib_sk leap_year.h leap_year.cpp)

add_executable(leap_year_test_sk leap_year_test.cpp)
target_link_libraries(leap_year_test_sk leap_year_lib_sk Catch2WithMain)

add_executable(leap_year_scenario_test_sk leap_year_scenario_test.cpp)
target_link_libraries(leap_year_scenario_test_sk leap_year_lib_sk Catch2WithMain)