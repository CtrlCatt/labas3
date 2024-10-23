add_test([=[seven.equality]=]  /media/ivan-pro/A8E00B75E00B4950/labas3/build/googltest [==[--gtest_filter=seven.equality]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[seven.equality]=]  PROPERTIES WORKING_DIRECTORY /media/ivan-pro/A8E00B75E00B4950/labas3/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  googltest_TESTS seven.equality)
