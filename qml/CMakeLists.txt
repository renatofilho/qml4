set(small_qml_SRCS
    small_object.cpp
    plugin.cpp
    )

set(small_qml_MOC_HDRS
    small_object.h
    plugin.h
    )

qt4_wrap_cpp(small_qml_MOC_SRCS ${small_qml_MOC_HDRS})

# Build
add_library(small_qml SHARED ${small_qml_SRCS} ${small_qml_MOC_SRCS})

include_directories(
    ${QT_INCLUDE_DIR}
    ${QT_QTCORE_INCLUDE_DIR}
    ${QT_QTGUI_INCLUDE_DIR}
    ${QT_QTDECLARATIVE_INCLUDE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR}
    )

target_link_libraries(small_qml
    ${QT_QTCORE_LIBRARY}
    ${QT_QTGUI_LIBRARY}
    ${QT_QTDECLARATIVE_LIBRARY}
    )
