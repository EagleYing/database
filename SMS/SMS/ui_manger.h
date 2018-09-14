/********************************************************************************
** Form generated from reading UI file 'manger.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANGER_H
#define UI_MANGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manger
{
public:
    QLabel *label;
    QPushButton *userloginButton;
    QPushButton *stu_inform_guanlipushButton;
    QPushButton *class_managepushButton;
    QPushButton *scoremanagepushButton;
    QPushButton *dorm_guanliButton;
    QPushButton *course_manageButton;
    QPushButton *award_managepushButton;
    QPushButton *feemanagepushButton;
    QPushButton *pushButton_9;
    QLabel *label_useradmin;

    void setupUi(QWidget *manger)
    {
        if (manger->objectName().isEmpty())
            manger->setObjectName(QStringLiteral("manger"));
        manger->resize(637, 453);
        label = new QLabel(manger);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(280, 30, 181, 31));
        label->setStyleSheet(QStringLiteral("font: 75 18pt \"Consolas\";"));
        userloginButton = new QPushButton(manger);
        userloginButton->setObjectName(QStringLiteral("userloginButton"));
        userloginButton->setGeometry(QRect(60, 120, 251, 41));
        stu_inform_guanlipushButton = new QPushButton(manger);
        stu_inform_guanlipushButton->setObjectName(QStringLiteral("stu_inform_guanlipushButton"));
        stu_inform_guanlipushButton->setGeometry(QRect(60, 180, 251, 41));
        class_managepushButton = new QPushButton(manger);
        class_managepushButton->setObjectName(QStringLiteral("class_managepushButton"));
        class_managepushButton->setGeometry(QRect(60, 240, 251, 41));
        scoremanagepushButton = new QPushButton(manger);
        scoremanagepushButton->setObjectName(QStringLiteral("scoremanagepushButton"));
        scoremanagepushButton->setGeometry(QRect(60, 300, 251, 41));
        dorm_guanliButton = new QPushButton(manger);
        dorm_guanliButton->setObjectName(QStringLiteral("dorm_guanliButton"));
        dorm_guanliButton->setGeometry(QRect(330, 120, 251, 41));
        course_manageButton = new QPushButton(manger);
        course_manageButton->setObjectName(QStringLiteral("course_manageButton"));
        course_manageButton->setGeometry(QRect(330, 180, 251, 41));
        award_managepushButton = new QPushButton(manger);
        award_managepushButton->setObjectName(QStringLiteral("award_managepushButton"));
        award_managepushButton->setGeometry(QRect(330, 240, 251, 41));
        feemanagepushButton = new QPushButton(manger);
        feemanagepushButton->setObjectName(QStringLiteral("feemanagepushButton"));
        feemanagepushButton->setGeometry(QRect(330, 300, 251, 41));
        pushButton_9 = new QPushButton(manger);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(60, 360, 521, 41));
        label_useradmin = new QLabel(manger);
        label_useradmin->setObjectName(QStringLiteral("label_useradmin"));
        label_useradmin->setGeometry(QRect(290, 60, 161, 41));

        retranslateUi(manger);

        QMetaObject::connectSlotsByName(manger);
    } // setupUi

    void retranslateUi(QWidget *manger)
    {
        manger->setWindowTitle(QApplication::translate("manger", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("manger", "MANAGER", Q_NULLPTR));
        userloginButton->setText(QApplication::translate("manger", "Login User Management", Q_NULLPTR));
        stu_inform_guanlipushButton->setText(QApplication::translate("manger", "Sstudent Information ", Q_NULLPTR));
        class_managepushButton->setText(QApplication::translate("manger", "Class Information ", Q_NULLPTR));
        scoremanagepushButton->setText(QApplication::translate("manger", "Geade Information", Q_NULLPTR));
        dorm_guanliButton->setText(QApplication::translate("manger", "Dormitory Information", Q_NULLPTR));
        course_manageButton->setText(QApplication::translate("manger", "Course Information ", Q_NULLPTR));
        award_managepushButton->setText(QApplication::translate("manger", "Award Information", Q_NULLPTR));
        feemanagepushButton->setText(QApplication::translate("manger", "Fee Information ", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("manger", "BACK TO LOGIN PAGE", Q_NULLPTR));
        label_useradmin->setText(QApplication::translate("manger", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class manger: public Ui_manger {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANGER_H
