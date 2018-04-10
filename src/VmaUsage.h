#ifndef VMA_USAGE_H_
#define VMA_USAGE_H_

#ifdef _WIN32

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <vulkan/vulkan.h>

/*
In every place where you want to use Vulkan Memory Allocator, define appropriate
macros if you want to configure the library and then include its header to
include all public interface declarations. Example:
*/

//#define VMA_USE_STL_CONTAINERS 1

//#define VMA_HEAVY_ASSERT(expr)

#pragma warning(push, 4)
#pragma warning(disable: 4127) // conditional expression is constant
#pragma warning(disable: 4100) // unreferenced formal parameter
#pragma warning(disable: 4189) // local variable is initialized but not referenced

#include "vk_mem_alloc.h"

#pragma warning(pop)

#else // #ifdef _WIN32

#include <vulkan/vulkan.h>
#include "vk_mem_alloc.h"

#endif // #ifdef _WIN32

#endif
