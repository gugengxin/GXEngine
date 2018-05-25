
cmake_minimum_required(VERSION 3.6) 

project(gmake)

add_definitions(-std=c++11)

include_directories(../src)
aux_source_directory(../src GX_SRC)

add_executable(gmake ${GX_SRC})