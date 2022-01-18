#-------------------------------------------------
#
# Project created by QtCreator 2022-01-13T16:36:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        practice_pj.cpp \
    employee.cpp \
    employeehandler.cpp \
    normal_employee.cpp \
    base_employee.cpp \
    A_employee.cpp \
    B_employee.cpp \
    C_employee.cpp

HEADERS += \
        practice_pj.h \
    employee.h \
    employeehandler.h \
    normal_employee.h \
    base_employee.h \
    A_employee.h \
    B_employee.h \
    C_employee.h

FORMS += \
        practice_pj.ui
