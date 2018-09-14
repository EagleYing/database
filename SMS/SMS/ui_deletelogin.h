/********************************************************************************
** Form generated from reading UI file 'deletelogin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETELOGIN_H
#define UI_DELETELOGIN_H

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

class Ui_deletelogin
{
public:
    QLineEdit *login_IDlineEdit;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *login_deletename_lineEdit;
    QPushButton *deletequeryButton;
    QLabel *label_3;
    QLineEdit *dele_login_passwordlineEdit;
    QPushButton *login_deleteButton;
    QPushButton *deletebackButton;
    QLabel *label_4;

    void setupUi(QWidget *deletelogin)
    {
        if (deletelogin->objectName().isEmpty())
            deletelogin->setObjectName(QStringLiteral("deletelogin"));
        deletelogin->resize(400, 256);
        login_IDlineEdit = new QLineEdit(deletelogin);
        login_IDlineEdit->setObjectName(QStringLiteral("login_IDlineEdit"));
        login_IDlineEdit->setGeometry(QRect(140, 80, 121, 31));
        label = new QLabel(deletelogin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 80, 111, 31));
        label_2 = new QLabel(deletelogin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 130, 81, 31));
        login_deletename_lineEdit = new QLineEdit(deletelogin);
        login_deletename_lineEdit->setObjectName(QStringLiteral("login_deletename_lineEdit"));
        login_deletename_lineEdit->setGeometry(QRect(140, 130, 121, 31));
        deletequeryButton = new QPushButton(deletelogin);
        deletequeryButton->setObjectName(QStringLiteral("deletequeryButton"));
        deletequeryButton->setGeometry(QRect(290, 80, 71, 31));
        label_3 = new QLabel(deletelogin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 170, 81, 31));
        dele_login_passwordlineEdit = new QLineEdit(deletelogin);
        dele_login_passwordlineEdit->setObjectName(QStringLiteral("dele_login_passwordlineEdit"));
        dele_login_passwordlineEdit->setGeometry(QRect(140, 170, 121, 31));
        login_deleteButton = new QPushButton(deletelogin);
        login_deleteButton->setObjectName(QStringLiteral("login_deleteButton"));
        login_deleteButton->setGeometry(QRect(290, 130, 71, 31));
        deletebackButton = new QPushButton(deletelogin);
        deletebackButton->setObjectName(QStringLiteral("deletebackButton"));
        deletebackButton->setGeometry(QRect(290, 170, 71, 31));
        label_4 = new QLabel(deletelogin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 10, 241, 41));
        label_4->setStyleSheet(QStringLiteral("font: 75 18pt \"Consolas\";"));

        retranslateUi(deletelogin);

        QMetaObject::connectSlotsByName(deletelogin);
    } // setupUi

    void retranslateUi(QWidget *deletelogin)
    {
        deletelogin->setWindowTitle(QApplication::translate("deletelogin", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("deletelogin", "SEARCH BY ID:", Q_NULLPTR));
        label_2->setText(QApplication::translate("deletelogin", "NAME:", Q_NULLPTR));
        deletequeryButton->setText(QApplication::translate("deletelogin", "SEARCH", Q_NULLPTR));
        label_3->setText(QApplication::translate("deletelogin", "PASSWORD:", Q_NULLPTR));
        login_deleteButton->setText(QApplication::translate("deletelogin", "DELETE", Q_NULLPTR));
        deletebackButton->setText(QApplication::translate("deletelogin", "BACK", Q_NULLPTR));
        label_4->setText(QApplication::translate("deletelogin", "DELETE ADMIN USER", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class deletelogin: public Ui_deletelogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETELOGIN_H
