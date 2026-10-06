cmake_minimum_required(VERSION 4.4)


project(OpenXLSX
        VERSION 0.1
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(src)

# ============================================================================
# Configure OpenXLSX
# ============================================================================
set(OPENXLSX_CREATE_DOCS           OFF)
set(OPENXLSX_BUILD_SAMPLES         OFF)
set(         BUILD_SHARED_LIBS     OFF)

add_subdirectory( lib/OpenXLSX )

# Configure linkage for myapp
target_link_libraries(${PROJECT_NAME} PRIVATE OpenXLSX::OpenXLSX)
target_include_directories(${PROJECT_NAME} PRIVATE ${OpenXLSX_INCLUDES})

# Ensure configuration of install RPATH for myapp
set_target_properties(${PROJECT_NAME} PROPERTIES
  INSTALL_RPATH_USE_LINK_PATH TRUE
)