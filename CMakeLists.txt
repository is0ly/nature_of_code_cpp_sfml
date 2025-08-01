cmake_minimum_required(VERSION 3.28)
project(nature_of_code_cpp_sfml LANGUAGES CXX)

# Установка директории для исполняемых файлов
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Подключение SFML через FetchContent
include(FetchContent)
FetchContent_Declare(
        SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 3.0.1
        GIT_SHALLOW ON
        EXCLUDE_FROM_ALL
        SYSTEM
)
FetchContent_MakeAvailable(SFML)


# Создание исполняемого файла
add_executable(main
        src/main.cpp
        src/walker.cpp
        src/input.cpp
        src/window_utils.cpp
        src/render.cpp
        src/game_loop.cpp
)


# Указываем include-директорию
target_include_directories(main PRIVATE ${CMAKE_SOURCE_DIR}/include)

# Стандарты и библиотеки
target_compile_features(main PRIVATE cxx_std_17)
target_link_libraries(main PRIVATE SFML::Graphics)