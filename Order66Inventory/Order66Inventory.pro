QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dbConnection.cpp \
    itemlookup.cpp \
    main.cpp \
    mainwindow.cpp \
    recentorders.cpp \
    saletrends.cpp \
    viewinventory.cpp

HEADERS += \
    dbConnection.h \
    itemlookup.h \
    mainwindow.h \
    recentorders.h \
    saletrends.h \
    viewinventory.h

FORMS += \
    itemlookup.ui \
    mainwindow.ui \
    recentorders.ui \
    saletrends.ui \
    viewinventory.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
