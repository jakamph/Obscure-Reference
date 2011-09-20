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
    player.cpp \
    team.cpp \
    manager.cpp

HEADERS  += \
    spreadsheet_interface.hpp \
    or_main_window.hpp \
    database_interface.hpp \
    player.hpp \
    team.hpp \
    manager.hpp \
    or_system_util.hpp

FORMS    += or_main_window.ui
