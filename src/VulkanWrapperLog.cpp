#include "VulkanWrapperLog.hpp"
#include <vulkan/vulkan.h>

uint32_t GetNumberOfExtensions()
{
    uint32_t extensionCount = 0;
    vkEnumerateInstanceExtensionProperties(nullptr, &extensionCount, nullptr);
    return extensionCount;
}