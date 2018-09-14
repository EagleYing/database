#-------------------------------------------------
#
# Project created by QtCreator 2017-07-08T19:56:42
#
#-------------------------------------------------

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SMS
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    studentform.cpp \
    manger.cpp \
    globle.cpp \
    allstuinform.cpp \
    findscore.cpp \
    dormfind.cpp \
    findclass.cpp \
    userlogin.cpp \
    deletelogin.cpp \
    updatelogin.cpp \
    insertlogin.cpp \
    stuinformanage.cpp \
    dormmanage.cpp \
    awardmanage.cpp \
    scoremanage.cpp \
    coursemanage.cpp \
    classmanage.cpp \
    feemanage.cpp \
    allcourse.cpp \
    findcourse.cpp \
    findaward.cpp \
    findfee.cpp \
    allstuinfor.cpp \
    alldorminfor.cpp

HEADERS  += mainwindow.h \
    studentform.h \
    manger.h \
    globle.h \
    allstuinform.h \
    findscore.h \
    dormfind.h \
    findclass.h \
    userlogin.h \
    deletelogin.h \
    updatelogin.h \
    insertlogin.h \
    stuinformanage.h \
    dormmanage.h \
    awardmanage.h \
    scoremanage.h \
    coursemanage.h \
    classmanage.h \
    feemanage.h \
    allcourse.h \
    findcourse.h \
    findaward.h \
    findfee.h \
    allstuinfor.h \
    alldorminfor.h

FORMS    += mainwindow.ui \
    studentform.ui \
    manger.ui \
    allstuinform.ui \
    findscore.ui \
    dormfind.ui \
    findclass.ui \
    coursefind.ui \
    userlogin.ui \
    deletelogin.ui \
    updatelogin.ui \
    insertlogin.ui \
    stuinformanage.ui \
    dormmanage.ui \
    awardmanage.ui \
    scoremanage.ui \
    coursemanage.ui \
    classmanage.ui \
    feemanage.ui \
    allcourse.ui \
    findaward.ui \
    findfee.ui \
    allstuinfor.ui \
    alldorminfor.ui

QT       += sql

RESOURCES += \
    other/main.qrc \
    other/qss.qrc

DISTFILES += \
    other/image/fontawesome-webfont.ttf \
    other/image/qt_zh_CN.qm \
    other/image/widgets.qm \
    other/image/btn_close.png \
    other/image/btn_ok.png \
    other/image/Font Awesome Cheatsheet.png \
    other/image/msg_error.png \
    other/image/msg_info.png \
    other/image/msg_question.png \
    other/qss/psblack/add_bottom.png \
    other/qss/psblack/add_left.png \
    other/qss/psblack/add_right.png \
    other/qss/psblack/add_top.png \
    other/qss/psblack/branch_close.png \
    other/qss/psblack/branch_open.png \
    other/qss/psblack/calendar_nextmonth.png \
    other/qss/psblack/calendar_prevmonth.png \
    other/qss/psblack/checkbox_checked.png \
    other/qss/psblack/checkbox_checked_disable.png \
    other/qss/psblack/checkbox_parcial.png \
    other/qss/psblack/checkbox_parcial_disable.png \
    other/qss/psblack/checkbox_unchecked.png \
    other/qss/psblack/checkbox_unchecked_disable.png \
    other/qss/psblack/radiobutton_checked.png \
    other/qss/psblack/radiobutton_checked_disable.png \
    other/qss/psblack/radiobutton_unchecked.png \
    other/qss/psblack/radiobutton_unchecked_disable.png \
    other/main.ico \
    other/qss/psblack.css \
    other/main.rc

