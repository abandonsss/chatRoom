QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QT += network

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addfriends.cpp \
    drawer.cpp \
    friendslist.cpp \
    main.cpp \
    onlinestate.cpp \
    sign.cpp \
    tcpclient.cpp

HEADERS += \
    addfriends.h \
    command.h \
    drawer.h \
    friendslist.h \
    information.h \
    onlinestate.h \
    sign.h \
    tcpclient.h

FORMS +=

TRANSLATIONS += \
    chatRoom_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
