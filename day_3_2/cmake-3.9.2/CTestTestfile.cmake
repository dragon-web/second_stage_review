# CMake generated Testfile for 
# Source directory: /home/flf/second_stage_review/day_3_2/cmake-3.9.2
# Build directory: /home/flf/second_stage_review/day_3_2/cmake-3.9.2
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
include("/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/EnforceConfig.cmake")
add_test(SystemInformationNew "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/bin/cmake" "--system-information" "-G" "Unix Makefiles")
subdirs("Source/kwsys")
subdirs("Utilities/KWIML")
subdirs("Utilities/cmlibrhash")
subdirs("Utilities/cmzlib")
subdirs("Utilities/cmcurl")
subdirs("Utilities/cmcompress")
subdirs("Utilities/cmexpat")
subdirs("Utilities/cmbzip2")
subdirs("Utilities/cmliblzma")
subdirs("Utilities/cmlibarchive")
subdirs("Utilities/cmjsoncpp")
subdirs("Utilities/cmlibuv")
subdirs("Source/CursesDialog/form")
subdirs("Source")
subdirs("Utilities")
subdirs("Tests")
subdirs("Auxiliary")
