add_test( TestName.myclass /media/yang/momenta/momenta/project/test/gtestpractise/prac2/build/hello_test [==[--gtest_filter=TestName.myclass]==] --gtest_also_run_disabled_tests)
set_tests_properties( TestName.myclass PROPERTIES WORKING_DIRECTORY /media/yang/momenta/momenta/project/test/gtestpractise/prac2/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( TestName.increment_by_10 /media/yang/momenta/momenta/project/test/gtestpractise/prac2/build/hello_test [==[--gtest_filter=TestName.increment_by_10]==] --gtest_also_run_disabled_tests)
set_tests_properties( TestName.increment_by_10 PROPERTIES WORKING_DIRECTORY /media/yang/momenta/momenta/project/test/gtestpractise/prac2/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( hello_test_TESTS TestName.myclass TestName.increment_by_10)