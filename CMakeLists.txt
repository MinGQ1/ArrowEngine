cmake_minimum_required (VERSION 3.5)
project(ArrowEngine)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Moudle Path
set (CMAKE_MODULE_PATH
	"${CMAKE_SOURCE_DIR}/CMake"
)

set(ARROW_SOURCE_DIR ${PROJECT_SOURCE_DIR})

include(PreConfigure)

# Include dir
include_directories("${ARROW_SOURCE_DIR}/ArrowEngine/External/spdlog/include")
include_directories("${ARROW_SOURCE_DIR}/ArrowEngine/External/glfw/include")
include_directories("${ARROW_SOURCE_DIR}/ArrowEngine/Src")

# Platform preprocessor defination
IF(WIN32)
	add_compile_definitions(AE_PLATFORM_WINDOWS)
ENDIF(WIN32)

# Sub dir
add_subdirectory(ArrowEngine)
add_subdirectory(SandBox)

#Project dependencies
add_dependencies(Application ArrowEngine)