/********************************************************************************
** Form generated from reading UI file 'updatelogin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATELOGIN_H
#define UI_UPDATELOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_updatelogin
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *login_update_IDlineEdit;
    QLineEdit *login_updatenamelineEdit;
    QPushButton *login_update_queryButton;
    QLineEdit *update_loginpasswordlineEdit;
    QPushButton *login_updatepushButton;
    QPushButton *loginupdatebackButton;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *updatelogin)
    {
        if (updatelogin->objectName().isEmpty())
            updatelogin->setObjectName(QStringLiteral("updatelogin"));
        updatelogin->resize(400, 271);
        label = new QLabel(updatelogin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 20, 54, 12));
        label_2 = new QLabel(updatelogin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 80, 61, 31));
        label_3 = new QLabel(updatelogin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 130, 71, 31));
        label_4 = new QLabel(updatelogin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 180, 91, 31));
        login_update_IDlineEdit = new QLineEdit(updatelogin);
        login_update_IDlineEdit->setObjectName(QStringLiteral("login_update_IDlineEdit"));
        login_update_IDlineEdit->setGeometry(QRect(140, 80, 131, 31));
        login_updatenamelineEdit = new QLineEdit(updatelogin);
        login_updatenamelineEdit->setObjectName(QStringLiteral("login_updatenamelineEdit"));
        login_updatenamelineEdit->setGeometry(QRect(140, 130, 131, 31));
        login_update_queryButton = new QPushButton(updatelogin);
        login_update_queryButton->setObjectName(QStringLiteral("login_update_queryButton"));
        login_update_queryButton->setGeometry(QRect(300, 80, 71, 31));
        update_loginpasswordlineEdit = new QLineEdit(updatelogin);
        update_loginpasswordlineEdit->setObjectName(QStringLiteral("update_loginpasswordlineEdit"));
        update_loginpasswordlineEdit->setGeometry(QRect(140, 180, 131, 31));
        login_updatepushButton = new QPushButton(updatelogin);
        login_updatepushButton->setObjectName(QStringLiteral("login_updatepushButton"));
        login_updatepushButton->setGeometry(QRect(300, 130, 71, 31));
        loginupdatebackButton = new QPushButton(updatelogin);
        loginupdatebackButton->setObjectName(QStringLiteral("loginupdatebackButton"));
        loginupdatebackButton->setGeometry(QRect(300, 180, 71, 31));
        label_5 = new QLabel(updatelogin);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(150, 20, 54, 12));
        label_6 = new QLabel(updatelogin);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 20, 221, 31));
        label_6->setStyleSheet(QStringLiteral("font: 18pt \"Arial\";"));

        retranslateUi(updatelogin);

        QMetaObject::connectSlotsByName(updatelogin);
    } // setupUi

    void retranslateUi(QWidget *updatelogin)
    {
        updatelogin->setWindowTitle(QApplication::translate("updatelogin", "Form", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("updatelogin", "ID:", Q_NULLPTR));
        label_3->setText(QApplication::translate("updatelogin", "NAME:", Q_NULLPTR));
        label_4->setText(QApplication::translate("updatelogin", "PASSWORD:", Q_NULLPTR));
        login_update_queryButton->setText(QApplication::translate("updatelogin", "SEARCH", Q_NULLPTR));
        login_updatepushButton->setText(QApplication::translate("updatelogin", "UPDATE", Q_NULLPTR));
        loginupdatebackButton->setText(QApplication::translate("updatelogin", "BACK", Q_NULLPTR));
        label_5->setText(QString());
        label_6->setText(QApplication::translate("updatelogin", "UPDATE ADMIN", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class updatelogin: public Ui_updatelogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATELOGIN_H
