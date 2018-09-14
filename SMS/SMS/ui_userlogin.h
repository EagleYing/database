/********************************************************************************
** Form generated from reading UI file 'userlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLOGIN_H
#define UI_USERLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userlogin
{
public:
    QPushButton *delete_loginButton;
    QPushButton *update_userButton;
    QPushButton *insert_loginButton;
    QPushButton *user_login_back;
    QLabel *label;

    void setupUi(QWidget *userlogin)
    {
        if (userlogin->objectName().isEmpty())
            userlogin->setObjectName(QStringLiteral("userlogin"));
        userlogin->resize(384, 300);
        delete_loginButton = new QPushButton(userlogin);
        delete_loginButton->setObjectName(QStringLiteral("delete_loginButton"));
        delete_loginButton->setGeometry(QRect(120, 90, 141, 31));
        update_userButton = new QPushButton(userlogin);
        update_userButton->setObjectName(QStringLiteral("update_userButton"));
        update_userButton->setGeometry(QRect(120, 130, 141, 31));
        insert_loginButton = new QPushButton(userlogin);
        insert_loginButton->setObjectName(QStringLiteral("insert_loginButton"));
        insert_loginButton->setGeometry(QRect(120, 170, 141, 31));
        user_login_back = new QPushButton(userlogin);
        user_login_back->setObjectName(QStringLiteral("user_login_back"));
        user_login_back->setGeometry(QRect(120, 210, 141, 31));
        label = new QLabel(userlogin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 311, 51));
        label->setStyleSheet(QStringLiteral("font: 75 18pt \"Consolas\";"));

        retranslateUi(userlogin);

        QMetaObject::connectSlotsByName(userlogin);
    } // setupUi

    void retranslateUi(QWidget *userlogin)
    {
        userlogin->setWindowTitle(QApplication::translate("userlogin", "Form", Q_NULLPTR));
        delete_loginButton->setText(QApplication::translate("userlogin", "DELETE", Q_NULLPTR));
        update_userButton->setText(QApplication::translate("userlogin", "UPDATE", Q_NULLPTR));
        insert_loginButton->setText(QApplication::translate("userlogin", "ADD", Q_NULLPTR));
        user_login_back->setText(QApplication::translate("userlogin", "BACK", Q_NULLPTR));
        label->setText(QApplication::translate("userlogin", "ADMIN USER MANAGEMENT", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class userlogin: public Ui_userlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOGIN_H
