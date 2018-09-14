/********************************************************************************
** Form generated from reading UI file 'allstuinfor.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLSTUINFOR_H
#define UI_ALLSTUINFOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_seeallstuinfor
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *backButton;

    void setupUi(QWidget *seeallstuinfor)
    {
        if (seeallstuinfor->objectName().isEmpty())
            seeallstuinfor->setObjectName(QStringLiteral("seeallstuinfor"));
        seeallstuinfor->resize(982, 530);
        label = new QLabel(seeallstuinfor);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(280, 40, 441, 41));
        label->setStyleSheet(QStringLiteral("font: 20pt \"Arial\";"));
        tableWidget = new QTableWidget(seeallstuinfor);
        if (tableWidget->columnCount() < 9)
            tableWidget->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(40, 110, 901, 391));
        backButton = new QPushButton(seeallstuinfor);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(800, 50, 91, 31));

        retranslateUi(seeallstuinfor);

        QMetaObject::connectSlotsByName(seeallstuinfor);
    } // setupUi

    void retranslateUi(QWidget *seeallstuinfor)
    {
        seeallstuinfor->setWindowTitle(QApplication::translate("seeallstuinfor", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("seeallstuinfor", "ALL STUDENTS' INFORMATION", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("seeallstuinfor", "SNO", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("seeallstuinfor", "NAME", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("seeallstuinfor", "SEX", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("seeallstuinfor", "AGE", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("seeallstuinfor", "MAJOR", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("seeallstuinfor", "CLASS", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("seeallstuinfor", "HOMEADDRESS", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("seeallstuinfor", "PHONE", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("seeallstuinfor", "IDENTITY", Q_NULLPTR));
        backButton->setText(QApplication::translate("seeallstuinfor", "BACK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class seeallstuinfor: public Ui_seeallstuinfor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLSTUINFOR_H
