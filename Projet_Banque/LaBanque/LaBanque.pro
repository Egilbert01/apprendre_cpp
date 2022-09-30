TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        CompteBancaire.cpp \
        compteclient.cpp \
        compteepargne.cpp \
        main.cpp \
        menu.cpp

HEADERS += \
    CompteBancaire.h \
    compteclient.h \
    compteepargne.h \
    menu.h
