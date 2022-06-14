cmake_minimum_required(VERSION 3.20)

project(vulkan_wrapper)

add_subdirectory(./vendor/vulkan_headers)
add_subdirectory(./vendor/vulkan_loader)

add_library(vulkan_wrapper STATIC src/VulkanWrapperLog.cpp src/VulkanWrapperLog.hpp)

target_include_directories(vulkan_wrapper PUBLIC ./vendor/vulkan_headers/include)
target_link_libraries(vulkan_wrapper PRIVATE vulkan)