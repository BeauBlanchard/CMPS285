#-------------------------------------------------
#
# Project created by QtCreator 2015-09-25T00:22:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Cove_Client
TEMPLATE = app


SOURCES += main.cpp\
    cove_login.cpp \
    cove_menu.cpp \
    cove_account.cpp

HEADERS  += \
    cove_login.h \
    cove_menu.h \
    cove_account.h

FORMS    += \
    cove_login.ui \
    cove_menu.ui \
    cove_account.ui
