# CMake generated Testfile for 
# Source directory: /home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeOnly
# Build directory: /home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeOnly
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(CMakeOnly.LinkInterfaceLoop "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/bin/cmake" "-DTEST=LinkInterfaceLoop" "-P" "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeOnly/Test.cmake")
set_tests_properties(CMakeOnly.LinkInterfaceLoop PROPERTIES  TIMEOUT "90")
add_test(CMakeOnly.CheckSymbolExists "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/bin/cmake" "-DTEST=CheckSymbolExists" "-P" "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeOnly/Test.cmake")
add_test(CMakeOnly.CheckCXXSymbolExists "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/bin/cmake" "-DTEST=CheckCXXSymbolExists" "-P" "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeOnly/Test.cmake")
add_test(CMakeOnly.CheckCXXCompilerFlag "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/bin/cmake" "-DTEST=CheckCXXCompilerFlag" "-P" "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeOnly/Test.cmake")
add_test(CMakeOnly.CheckLanguage "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/bin/cmake" "-DTEST=CheckLanguage" "-P" "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeOnly/Test.cmake")
add_test(CMakeOnly.CheckStructHasMember "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/bin/cmake" "-DTEST=CheckStructHasMember" "-P" "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeOnly/Test.cmake")
add_test(CMakeOnly.CompilerIdC "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/bin/cmake" "-DTEST=CompilerIdC" "-P" "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeOnly/Test.cmake")
add_test(CMakeOnly.CompilerIdCXX "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/bin/cmake" "-DTEST=CompilerIdCXX" "-P" "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeOnly/Test.cmake")
add_test(CMakeOnly.AllFindModules "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/bin/cmake" "-DTEST=AllFindModules" "-DCMAKE_ARGS=-DCMake_TEST_CMakeOnly.AllFindModules_NO_VERSION=" "-P" "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeOnly/Test.cmake")
add_test(CMakeOnly.SelectLibraryConfigurations "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/bin/cmake" "-DTEST=SelectLibraryConfigurations" "-P" "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeOnly/Test.cmake")
add_test(CMakeOnly.TargetScope "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/bin/cmake" "-DTEST=TargetScope" "-P" "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeOnly/Test.cmake")
add_test(CMakeOnly.find_library "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/bin/cmake" "-DTEST=find_library" "-P" "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeOnly/Test.cmake")
add_test(CMakeOnly.find_path "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/bin/cmake" "-DTEST=find_path" "-P" "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeOnly/Test.cmake")
add_test(CMakeOnly.ProjectInclude "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/bin/cmake" "-DTEST=ProjectInclude" "-DCMAKE_ARGS=-DCMAKE_PROJECT_ProjectInclude_INCLUDE=/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeOnly/ProjectInclude/include.cmake" "-P" "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeOnly/Test.cmake")
add_test(CMakeOnly.MajorVersionSelection-PythonLibs_2 "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/bin/cmake" "-DTEST=MajorVersionSelection-PythonLibs_2" "-DTEST_SOURCE=MajorVersionSelection" "-DCMAKE_ARGS=-DMAJOR_TEST_MODULE=PythonLibs;-DMAJOR_TEST_VERSION=2;-DMAJOR_TEST_NO_LANGUAGES=FALSE;-DMAJOR_TEST_VERSION_VAR=PYTHONLIBS_VERSION_STRING" "-P" "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeOnly/Test.cmake")
add_test(CMakeOnly.MajorVersionSelection-PythonLibs_3 "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/bin/cmake" "-DTEST=MajorVersionSelection-PythonLibs_3" "-DTEST_SOURCE=MajorVersionSelection" "-DCMAKE_ARGS=-DMAJOR_TEST_MODULE=PythonLibs;-DMAJOR_TEST_VERSION=3;-DMAJOR_TEST_NO_LANGUAGES=FALSE;-DMAJOR_TEST_VERSION_VAR=PYTHONLIBS_VERSION_STRING" "-P" "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeOnly/Test.cmake")
add_test(CMakeOnly.MajorVersionSelection-PythonInterp_2 "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/bin/cmake" "-DTEST=MajorVersionSelection-PythonInterp_2" "-DTEST_SOURCE=MajorVersionSelection" "-DCMAKE_ARGS=-DMAJOR_TEST_MODULE=PythonInterp;-DMAJOR_TEST_VERSION=2;-DMAJOR_TEST_NO_LANGUAGES=TRUE;-DMAJOR_TEST_VERSION_VAR=PYTHON_VERSION_STRING" "-P" "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeOnly/Test.cmake")
add_test(CMakeOnly.MajorVersionSelection-PythonInterp_3 "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/bin/cmake" "-DTEST=MajorVersionSelection-PythonInterp_3" "-DTEST_SOURCE=MajorVersionSelection" "-DCMAKE_ARGS=-DMAJOR_TEST_MODULE=PythonInterp;-DMAJOR_TEST_VERSION=3;-DMAJOR_TEST_NO_LANGUAGES=TRUE;-DMAJOR_TEST_VERSION_VAR=PYTHON_VERSION_STRING" "-P" "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeOnly/Test.cmake")
add_test(CMakeOnly.MajorVersionSelection-Qt_3 "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/bin/cmake" "-DTEST=MajorVersionSelection-Qt_3" "-DTEST_SOURCE=MajorVersionSelection" "-DCMAKE_ARGS=-DMAJOR_TEST_MODULE=Qt;-DMAJOR_TEST_VERSION=3;-DMAJOR_TEST_NO_LANGUAGES=FALSE;-DMAJOR_TEST_VERSION_VAR=QT_VERSION_STRING" "-P" "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeOnly/Test.cmake")
add_test(CMakeOnly.MajorVersionSelection-Qt_4 "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/bin/cmake" "-DTEST=MajorVersionSelection-Qt_4" "-DTEST_SOURCE=MajorVersionSelection" "-DCMAKE_ARGS=-DMAJOR_TEST_MODULE=Qt;-DMAJOR_TEST_VERSION=4;-DMAJOR_TEST_NO_LANGUAGES=FALSE;-DMAJOR_TEST_VERSION_VAR=QT_VERSION_STRING" "-P" "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeOnly/Test.cmake")