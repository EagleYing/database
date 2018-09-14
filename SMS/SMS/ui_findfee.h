/********************************************************************************
** Form generated from reading UI file 'findfee.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDFEE_H
#define UI_FINDFEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_moneyfind
{
public:
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *stu_money_arrearagelineEdit;
    QLineEdit *stu_money_feelineEdit;
    QPushButton *stu_money_queryButton;
    QPushButton *stu_money_backButton;
    QComboBox *term_choose_comboBox;

    void setupUi(QWidget *moneyfind)
    {
        if (moneyfind->objectName().isEmpty())
            moneyfind->setObjectName(QStringLiteral("moneyfind"));
        moneyfind->resize(509, 329);
        label = new QLabel(moneyfind);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 30, 54, 12));
        label_4 = new QLabel(moneyfind);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 20, 351, 51));
        label_4->setStyleSheet(QStringLiteral("font: 75 18pt \"Consolas\";"));
        label_5 = new QLabel(moneyfind);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 100, 71, 31));
        label_6 = new QLabel(moneyfind);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 230, 81, 31));
        label_7 = new QLabel(moneyfind);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 180, 81, 31));
        stu_money_arrearagelineEdit = new QLineEdit(moneyfind);
        stu_money_arrearagelineEdit->setObjectName(QStringLiteral("stu_money_arrearagelineEdit"));
        stu_money_arrearagelineEdit->setGeometry(QRect(170, 230, 141, 31));
        stu_money_feelineEdit = new QLineEdit(moneyfind);
        stu_money_feelineEdit->setObjectName(QStringLiteral("stu_money_feelineEdit"));
        stu_money_feelineEdit->setGeometry(QRect(170, 180, 141, 31));
        stu_money_queryButton = new QPushButton(moneyfind);
        stu_money_queryButton->setObjectName(QStringLiteral("stu_money_queryButton"));
        stu_money_queryButton->setGeometry(QRect(360, 100, 71, 31));
        stu_money_backButton = new QPushButton(moneyfind);
        stu_money_backButton->setObjectName(QStringLiteral("stu_money_backButton"));
        stu_money_backButton->setGeometry(QRect(360, 230, 71, 31));
        term_choose_comboBox = new QComboBox(moneyfind);
        term_choose_comboBox->setObjectName(QStringLiteral("term_choose_comboBox"));
        term_choose_comboBox->setGeometry(QRect(170, 100, 141, 31));

        retranslateUi(moneyfind);

        QMetaObject::connectSlotsByName(moneyfind);
    } // setupUi

    void retranslateUi(QWidget *moneyfind)
    {
        moneyfind->setWindowTitle(QApplication::translate("moneyfind", "Form", Q_NULLPTR));
        label->setText(QString());
        label_4->setText(QApplication::translate("moneyfind", "Payment Situation Lookup", Q_NULLPTR));
        label_5->setText(QApplication::translate("moneyfind", "TERM:", Q_NULLPTR));
        label_6->setText(QApplication::translate("moneyfind", "ARREARAGE:", Q_NULLPTR));
        label_7->setText(QApplication::translate("moneyfind", "FEE:", Q_NULLPTR));
        stu_money_queryButton->setText(QApplication::translate("moneyfind", "SEARCH", Q_NULLPTR));
        stu_money_backButton->setText(QApplication::translate("moneyfind", "BACK", Q_NULLPTR));
        term_choose_comboBox->clear();
        term_choose_comboBox->insertItems(0, QStringList()
         << QApplication::translate("moneyfind", "term 1", Q_NULLPTR)
         << QApplication::translate("moneyfind", "term 2", Q_NULLPTR)
         << QApplication::translate("moneyfind", "term 3", Q_NULLPTR)
         << QApplication::translate("moneyfind", "term 4", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class moneyfind: public Ui_moneyfind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDFEE_H
