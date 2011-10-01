#-------------------------------------------------
#
# Project created by QtCreator 2011-09-17T00:02:27
#
#-------------------------------------------------

QT       += core gui

TARGET = Obscure-Reference
TEMPLATE = app


SOURCES += main.cpp\
        or_main_window.cpp \
    spreadsheet_interface.cpp \
    database_interface.cpp \
    database_object.cpp \
    player.cpp \
    team.cpp \
    manager.cpp \
    or_system_util.cpp

HEADERS  += \
    spreadsheet_interface.hpp \
    or_system_util.hpp \
    or_main_window.hpp \
    database_interface.hpp \
    database_object.hpp \
    player.hpp \
    team.hpp \
    manager.hpp

FORMS    += or_main_window.ui
