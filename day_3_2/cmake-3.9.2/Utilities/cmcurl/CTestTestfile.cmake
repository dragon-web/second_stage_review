# CMake generated Testfile for 
# Source directory: /home/flf/second_stage_review/day_3_2/cmake-3.9.2/Utilities/cmcurl
# Build directory: /home/flf/second_stage_review/day_3_2/cmake-3.9.2/Utilities/cmcurl
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(curl "LIBCURL" "http://open.cdash.org/user.php")
subdirs("lib")
