/********************************************************************************
** Form generated from reading UI file 'alldorminfor.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLDORMINFOR_H
#define UI_ALLDORMINFOR_H

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

class Ui_seedorminfor
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QPushButton *backButton;

    void setupUi(QWidget *seedorminfor)
    {
        if (seedorminfor->objectName().isEmpty())
            seedorminfor->setObjectName(QStringLiteral("seedorminfor"));
        seedorminfor->resize(720, 437);
        label = new QLabel(seedorminfor);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 30, 361, 31));
        label->setStyleSheet(QStringLiteral("font: 20pt \"Arial\";"));
        tableWidget = new QTableWidget(seedorminfor);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
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
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(60, 80, 601, 331));
        backButton = new QPushButton(seedorminfor);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setGeometry(QRect(590, 30, 61, 31));

        retranslateUi(seedorminfor);

        QMetaObject::connectSlotsByName(seedorminfor);
    } // setupUi

    void retranslateUi(QWidget *seedorminfor)
    {
        seedorminfor->setWindowTitle(QApplication::translate("seedorminfor", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("seedorminfor", "All Student Accommodation", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("seedorminfor", "SNO", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("seedorminfor", "NAME", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("seedorminfor", "SEX", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("seedorminfor", "DROMNUM", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("seedorminfor", "ROOMNUM", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("seedorminfor", "BEDNUM", Q_NULLPTR));
        backButton->setText(QApplication::translate("seedorminfor", "BACK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class seedorminfor: public Ui_seedorminfor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLDORMINFOR_H
