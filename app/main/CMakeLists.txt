set(TARGET_NAME ${PROJECT_NAME})

add_executable(${TARGET_NAME}
    src/main.cpp
)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

target_link_libraries(${TARGET_NAME}
    SIMULATION.lib
    # GUI.lib
    # Qt5::Widgets
)

target_include_directories(${TARGET_NAME}
    PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/inc>
)