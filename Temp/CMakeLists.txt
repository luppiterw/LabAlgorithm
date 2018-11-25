include_directories(./)
aux_source_directory(./ source_files)

message(${source_files})
add_library(temp SHARED ${source_files} )

#set_target_properties(sort ${PROJECT_OUT_PUT_DIR})
#install(TARGETS sort DESTINATION ${PROJECT_OUT_PUT_DIR})

#message("PROJECT_OUT_PUT_DIR" ${PROJECT_OUT_PUT_DIR})
