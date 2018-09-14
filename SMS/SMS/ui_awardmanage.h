/********************************************************************************
** Form generated from reading UI file 'awardmanage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AWARDMANAGE_H
#define UI_AWARDMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_awardmanage
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *award_querypushButton;
    QLineEdit *award_inputIDlineEdit;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *timelineEdit;
    QLineEdit *awardlineEdit;
    QPushButton *award_addpushButton;
    QPushButton *award_deletepushButton;
    QPushButton *award_updatepushButton;
    QPushButton *award_backpushButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *awardmanage)
    {
        if (awardmanage->objectName().isEmpty())
            awardmanage->setObjectName(QStringLiteral("awardmanage"));
        awardmanage->resize(623, 445);
        label = new QLabel(awardmanage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 20, 251, 31));
        label->setStyleSheet(QStringLiteral("font: 20pt \"Arial\";"));
        label_2 = new QLabel(awardmanage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 90, 141, 31));
        award_querypushButton = new QPushButton(awardmanage);
        award_querypushButton->setObjectName(QStringLiteral("award_querypushButton"));
        award_querypushButton->setGeometry(QRect(460, 90, 81, 31));
        award_inputIDlineEdit = new QLineEdit(awardmanage);
        award_inputIDlineEdit->setObjectName(QStringLiteral("award_inputIDlineEdit"));
        award_inputIDlineEdit->setGeometry(QRect(220, 90, 191, 31));
        label_7 = new QLabel(awardmanage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 140, 51, 21));
        label_8 = new QLabel(awardmanage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(70, 290, 61, 20));
        timelineEdit = new QLineEdit(awardmanage);
        timelineEdit->setObjectName(QStringLiteral("timelineEdit"));
        timelineEdit->setGeometry(QRect(220, 130, 171, 31));
        awardlineEdit = new QLineEdit(awardmanage);
        awardlineEdit->setObjectName(QStringLiteral("awardlineEdit"));
        awardlineEdit->setGeometry(QRect(140, 290, 401, 31));
        award_addpushButton = new QPushButton(awardmanage);
        award_addpushButton->setObjectName(QStringLiteral("award_addpushButton"));
        award_addpushButton->setGeometry(QRect(70, 360, 81, 31));
        award_deletepushButton = new QPushButton(awardmanage);
        award_deletepushButton->setObjectName(QStringLiteral("award_deletepushButton"));
        award_deletepushButton->setGeometry(QRect(200, 360, 81, 31));
        award_updatepushButton = new QPushButton(awardmanage);
        award_updatepushButton->setObjectName(QStringLiteral("award_updatepushButton"));
        award_updatepushButton->setGeometry(QRect(340, 360, 71, 31));
        award_backpushButton = new QPushButton(awardmanage);
        award_backpushButton->setObjectName(QStringLiteral("award_backpushButton"));
        award_backpushButton->setGeometry(QRect(470, 360, 71, 31));
        textEdit = new QTextEdit(awardmanage);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(70, 180, 471, 41));

        retranslateUi(awardmanage);

        QMetaObject::connectSlotsByName(awardmanage);
    } // setupUi

    void retranslateUi(QWidget *awardmanage)
    {
        awardmanage->setWindowTitle(QApplication::translate("awardmanage", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("awardmanage", "Award Manage", Q_NULLPTR));
        label_2->setText(QApplication::translate("awardmanage", "SEARCH BY SNO:", Q_NULLPTR));
        award_querypushButton->setText(QApplication::translate("awardmanage", "SEARCH", Q_NULLPTR));
        label_7->setText(QApplication::translate("awardmanage", "TIME:", Q_NULLPTR));
        label_8->setText(QApplication::translate("awardmanage", "AWARD:", Q_NULLPTR));
        award_addpushButton->setText(QApplication::translate("awardmanage", "ADD", Q_NULLPTR));
        award_deletepushButton->setText(QApplication::translate("awardmanage", "DELETE", Q_NULLPTR));
        award_updatepushButton->setText(QApplication::translate("awardmanage", "UPDATE", Q_NULLPTR));
        award_backpushButton->setText(QApplication::translate("awardmanage", "BACK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class awardmanage: public Ui_awardmanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AWARDMANAGE_H
