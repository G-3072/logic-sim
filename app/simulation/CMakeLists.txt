set(TARGET_NAME SIMULATION.lib)

add_library(${TARGET_NAME} STATIC
    src/LogicGates.cpp
)

target_link_libraries(${TARGET_NAME}
    Qt5::Widgets
)

target_include_directories(${TARGET_NAME}
    PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/inc>
)