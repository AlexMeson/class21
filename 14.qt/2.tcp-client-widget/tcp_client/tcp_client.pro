QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += network

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    inputpage.cpp \
    transferpage.cpp

HEADERS += \
    inputpage.h \
    transferpage.h

FORMS += \
    inputpage.ui \
    transferpage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

#将构建模式切换为发布模式(Released)
#运行测试 使构建目录中 .../build-projectName-KitsName-Released/released/ 生成可执行文件
#将可执行文件放到一个独立的空目录中 在该目录下使用Kits对应的终端执行windeployqt your.exe
