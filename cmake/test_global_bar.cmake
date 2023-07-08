
set(TEST_GLOBAL_BAR "bar") 

function(add_test_global)
  set(TEST_GLOBAL_BAR "${TEST_GLOBAL_BAR} bar") 
  message(STATUS "TEST_GLOBAL_FOO: ${TEST_GLOBAL_FOO}")
endfunction()
