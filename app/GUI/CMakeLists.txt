set(TARGET_NAME GUI.lib)

add_library(${TARGET_NAME}
    src/GUI.cpp
    src/logicView.cpp
    src/mainWindow.cpp
    src/parts.cpp
)

find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt5 COMPONENTS Core REQUIRED)


target_link_libraries(${TARGET_NAME}
    Qt5::Widgets
)

target_include_directories(${TARGET_NAME}
    PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/inc>
)