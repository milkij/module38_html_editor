cmake_minimum_required(VERSION 3.23)
project(2)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/usr/local")

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        WebEngineWidgets
        REQUIRED)

add_executable(2 main.cpp web_editor.cpp web_editor.h web_editor.ui)
target_link_libraries(2
        Qt::Core
        Qt::Gui
        Qt::Widgets
        Qt6::WebEngineWidgets
        )

