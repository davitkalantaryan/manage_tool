#
# File gui_manage.pro
# File created : 05 Apr 2017
# Created by : Davit Kalantaryan (davit.kalantaryan@desy.de)
# This file can be used to produce Makefile for daqadcreceiver application
# for PITZ
#

include(../../lib/common_qt/sys_common.pri)
include(../../lib/common_qt/gui_common.pri)

SOURCES += \
    ../../../src/ui_manage/main_gui_manage.cpp \
    ../../../src/ui_manage/manage_ui_gui_application.cpp \
    ../../../src/ui_manage/manage_ui_gui_mainwindow.cpp \
    ../../../src/ui_manage/manage_ui_gui_centralwidget.cpp

HEADERS += \
    ../../../src/ui_manage/manage_ui_gui_application.hpp \
    ../../../src/ui_manage/manage_ui_gui_mainwindow.hpp \
    ../../../src/ui_manage/manage_ui_gui_centralwidget.hpp

RESOURCES += \
    ../../../src/resources/gui_manage.qrc

