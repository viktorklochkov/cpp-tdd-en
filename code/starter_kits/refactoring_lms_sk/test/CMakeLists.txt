add_executable(refactoring_lms_sk_test library_test.cpp)
target_link_libraries(refactoring_lms_sk_test PRIVATE lms_sk_lib)
target_link_libraries(refactoring_lms_sk_test PRIVATE Catch2::Catch2WithMain)
