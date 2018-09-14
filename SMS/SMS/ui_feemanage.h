/********************************************************************************
** Form generated from reading UI file 'feemanage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FEEMANAGE_H
#define UI_FEEMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_feemanage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *fee_IDlineEdit;
    QLineEdit *fee_feelineEdit;
    QLineEdit *fee_arrearage_lineEdit;
    QPushButton *fee_querypushButton;
    QPushButton *fee_addpushButton;
    QPushButton *fee_deletepushButton;
    QPushButton *fee_updatepushButton;
    QPushButton *fee_backpushButton;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QTextEdit *textEdit;
    QLabel *label_3;

    void setupUi(QWidget *feemanage)
    {
        if (feemanage->objectName().isEmpty())
            feemanage->setObjectName(QStringLiteral("feemanage"));
        feemanage->resize(538, 459);
        label = new QLabel(feemanage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 10, 221, 51));
        label->setStyleSheet(QStringLiteral("font: 75 18pt \"Consolas\";"));
        label_2 = new QLabel(feemanage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 110, 51, 31));
        label_6 = new QLabel(feemanage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 160, 61, 31));
        label_7 = new QLabel(feemanage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 270, 61, 31));
        label_8 = new QLabel(feemanage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 320, 71, 31));
        fee_IDlineEdit = new QLineEdit(feemanage);
        fee_IDlineEdit->setObjectName(QStringLiteral("fee_IDlineEdit"));
        fee_IDlineEdit->setGeometry(QRect(100, 110, 131, 31));
        fee_feelineEdit = new QLineEdit(feemanage);
        fee_feelineEdit->setObjectName(QStringLiteral("fee_feelineEdit"));
        fee_feelineEdit->setGeometry(QRect(100, 270, 131, 31));
        fee_arrearage_lineEdit = new QLineEdit(feemanage);
        fee_arrearage_lineEdit->setObjectName(QStringLiteral("fee_arrearage_lineEdit"));
        fee_arrearage_lineEdit->setGeometry(QRect(100, 320, 131, 31));
        fee_querypushButton = new QPushButton(feemanage);
        fee_querypushButton->setObjectName(QStringLiteral("fee_querypushButton"));
        fee_querypushButton->setGeometry(QRect(400, 150, 91, 31));
        fee_addpushButton = new QPushButton(feemanage);
        fee_addpushButton->setObjectName(QStringLiteral("fee_addpushButton"));
        fee_addpushButton->setGeometry(QRect(30, 380, 81, 41));
        fee_deletepushButton = new QPushButton(feemanage);
        fee_deletepushButton->setObjectName(QStringLiteral("fee_deletepushButton"));
        fee_deletepushButton->setGeometry(QRect(160, 380, 91, 41));
        fee_updatepushButton = new QPushButton(feemanage);
        fee_updatepushButton->setObjectName(QStringLiteral("fee_updatepushButton"));
        fee_updatepushButton->setGeometry(QRect(300, 380, 91, 41));
        fee_backpushButton = new QPushButton(feemanage);
        fee_backpushButton->setObjectName(QStringLiteral("fee_backpushButton"));
        fee_backpushButton->setGeometry(QRect(420, 380, 81, 41));
        radioButton = new QRadioButton(feemanage);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(100, 160, 41, 21));
        radioButton_2 = new QRadioButton(feemanage);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(170, 160, 31, 21));
        radioButton_3 = new QRadioButton(feemanage);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(240, 160, 31, 21));
        radioButton_4 = new QRadioButton(feemanage);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(310, 160, 31, 21));
        textEdit = new QTextEdit(feemanage);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(30, 200, 471, 41));
        label_3 = new QLabel(feemanage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 60, 461, 31));

        retranslateUi(feemanage);

        QMetaObject::connectSlotsByName(feemanage);
    } // setupUi

    void retranslateUi(QWidget *feemanage)
    {
        feemanage->setWindowTitle(QApplication::translate("feemanage", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("feemanage", "FEE MANAGEMENT", Q_NULLPTR));
        label_2->setText(QApplication::translate("feemanage", "SNO:", Q_NULLPTR));
        label_6->setText(QApplication::translate("feemanage", "TERM:", Q_NULLPTR));
        label_7->setText(QApplication::translate("feemanage", "FEE:", Q_NULLPTR));
        label_8->setText(QApplication::translate("feemanage", "ARREARS", Q_NULLPTR));
        fee_querypushButton->setText(QApplication::translate("feemanage", "SEARCH", Q_NULLPTR));
        fee_addpushButton->setText(QApplication::translate("feemanage", "ADD", Q_NULLPTR));
        fee_deletepushButton->setText(QApplication::translate("feemanage", "DELETE", Q_NULLPTR));
        fee_updatepushButton->setText(QApplication::translate("feemanage", "UPDATE", Q_NULLPTR));
        fee_backpushButton->setText(QApplication::translate("feemanage", "BACK", Q_NULLPTR));
        radioButton->setText(QApplication::translate("feemanage", "1", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("feemanage", "2", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("feemanage", "3", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("feemanage", "4", Q_NULLPTR));
        label_3->setText(QApplication::translate("feemanage", "SEARCH BY SNO AND TERM:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class feemanage: public Ui_feemanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FEEMANAGE_H
