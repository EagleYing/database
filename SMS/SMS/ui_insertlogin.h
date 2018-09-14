/********************************************************************************
** Form generated from reading UI file 'insertlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERTLOGIN_H
#define UI_INSERTLOGIN_H

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

class Ui_insertlogin
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *inster_IdlineEdit;
    QLabel *label_3;
    QLineEdit *insert_namelineEdit_;
    QPushButton *insertloginqueryButton;
    QLabel *label_4;
    QLineEdit *insert_passwordlineEdit;
    QPushButton *insertloginButton;
    QPushButton *insert_back_Button;

    void setupUi(QWidget *insertlogin)
    {
        if (insertlogin->objectName().isEmpty())
            insertlogin->setObjectName(QStringLiteral("insertlogin"));
        insertlogin->resize(412, 268);
        label = new QLabel(insertlogin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 20, 211, 31));
        label->setStyleSheet(QStringLiteral("font: 75 18pt \"Consolas\";"));
        label_2 = new QLabel(insertlogin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 80, 111, 31));
        inster_IdlineEdit = new QLineEdit(insertlogin);
        inster_IdlineEdit->setObjectName(QStringLiteral("inster_IdlineEdit"));
        inster_IdlineEdit->setGeometry(QRect(140, 80, 141, 31));
        label_3 = new QLabel(insertlogin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 130, 61, 31));
        insert_namelineEdit_ = new QLineEdit(insertlogin);
        insert_namelineEdit_->setObjectName(QStringLiteral("insert_namelineEdit_"));
        insert_namelineEdit_->setGeometry(QRect(140, 130, 141, 31));
        insertloginqueryButton = new QPushButton(insertlogin);
        insertloginqueryButton->setObjectName(QStringLiteral("insertloginqueryButton"));
        insertloginqueryButton->setGeometry(QRect(310, 80, 71, 31));
        label_4 = new QLabel(insertlogin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 180, 81, 31));
        insert_passwordlineEdit = new QLineEdit(insertlogin);
        insert_passwordlineEdit->setObjectName(QStringLiteral("insert_passwordlineEdit"));
        insert_passwordlineEdit->setGeometry(QRect(140, 180, 141, 31));
        insertloginButton = new QPushButton(insertlogin);
        insertloginButton->setObjectName(QStringLiteral("insertloginButton"));
        insertloginButton->setGeometry(QRect(310, 130, 71, 31));
        insert_back_Button = new QPushButton(insertlogin);
        insert_back_Button->setObjectName(QStringLiteral("insert_back_Button"));
        insert_back_Button->setGeometry(QRect(310, 180, 71, 31));

        retranslateUi(insertlogin);

        QMetaObject::connectSlotsByName(insertlogin);
    } // setupUi

    void retranslateUi(QWidget *insertlogin)
    {
        insertlogin->setWindowTitle(QApplication::translate("insertlogin", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("insertlogin", "ADD ADMIN USER", Q_NULLPTR));
        label_2->setText(QApplication::translate("insertlogin", "SEARCH BY ID:", Q_NULLPTR));
        label_3->setText(QApplication::translate("insertlogin", "NAME:", Q_NULLPTR));
        insertloginqueryButton->setText(QApplication::translate("insertlogin", "SEARCH", Q_NULLPTR));
        label_4->setText(QApplication::translate("insertlogin", "PASSWORD:", Q_NULLPTR));
        insertloginButton->setText(QApplication::translate("insertlogin", "ADD", Q_NULLPTR));
        insert_back_Button->setText(QApplication::translate("insertlogin", "BACK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class insertlogin: public Ui_insertlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERTLOGIN_H
