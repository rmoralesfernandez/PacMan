cmake_minimum_required(VERSION 3.16)
project(CMakeSFMLProject LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.x)
FetchContent_MakeAvailable(SFML)

set(PROJECT_HEADERS 
    include/Game.h
    include/Pacman.h
    include/Pacman_Manager.h
    include/Enemy_Manager.h
    include/Enemy.h
    include/World_Manager.h
    include/Map.h
    include/Collecionables.h
)

set(PROJECT_SOURCES 
    src/main.cpp
    src/Game.cpp
    src/Pacman.cpp
    src/Pacman_Manager.cpp
    src/Enemy_Manager.cpp
    src/Enemy.cpp
    src/World_Manager.cpp
    src/Map.cpp
    src/Collecionables.cpp
)

set(PROJECT_FILES 
  ${PROJECT_HEADERS} 
  ${PROJECT_SOURCES}
)

include_directories(include)

add_executable(CMakeSFMLProject ${PROJECT_FILES})
target_link_libraries(CMakeSFMLProject PRIVATE sfml-graphics)
target_compile_features(CMakeSFMLProject PRIVATE cxx_std_17)

if(WIN32)
    add_custom_command(
        TARGET CMakeSFMLProject
        COMMENT "Copy OpenAL DLL"
        PRE_BUILD COMMAND ${CMAKE_COMMAND} -E copy ${SFML_SOURCE_DIR}/extlibs/bin/$<IF:$<EQUAL:${CMAKE_SIZEOF_VOID_P},8>,x64,x86>/openal32.dll $<TARGET_FILE_DIR:CMakeSFMLProject>
        VERBATIM)
endif()

install(TARGETS CMakeSFMLProject)

# Pone 'hello_world_app' como el proyecto por defecto en la solucion que cmake genera
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT ${PROJECT_NAME})
