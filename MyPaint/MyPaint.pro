#-------------------------------------------------
#
# Project created by QtCreator 2019-08-14T10:39:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyPaint
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    canvasScene.cpp \
    canvasView.cpp

HEADERS  += mainwindow.h \
    canvasScene.h \
    canvasView.h

FORMS    += mainwindow.ui
