QT += core
QT -= gui

TARGET = rtspServer
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    rtspserver.cpp

HEADERS += \
    rtspserver.h
INCLUDEPATH+=/opt/ffmpeg/include
LIBS+=-L/opt/ffmpeg/lib -lavformat

