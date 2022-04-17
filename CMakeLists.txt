cmake_minimum_required(VERSION 3.1.0)
project(drivers C)

include_directories(${CMAKE_SOURCE_DIR} include)

add_library(motor_driver src/motor.c include/motor.h)
target_link_libraries(motor_driver i2c m)

enable_testing()

add_executable(test_motor src/test_motor.c)
target_link_libraries(test_motor motor_driver)

add_test(${PROJECT_NAME}_test test_motor)
