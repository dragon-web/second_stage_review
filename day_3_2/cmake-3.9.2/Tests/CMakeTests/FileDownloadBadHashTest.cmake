if(NOT "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeTests" MATCHES "^/")
  set(slash /)
endif()
set(url "file://${slash}/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeTests/FileDownloadInput.png")
set(dir "/home/flf/second_stage_review/day_3_2/cmake-3.9.2/Tests/CMakeTests/downloads")

file(DOWNLOAD
  ${url}
  ${dir}/file3.png
  TIMEOUT 2
  STATUS status
  EXPECTED_HASH SHA1=5555555555555555555555555555555555555555
  )
