/********************************************************************************
** Form generated from reading UI file 'allcourse.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLCOURSE_H
#define UI_ALLCOURSE_H

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

class Ui_allcourse
{
public:
    QTableWidget *tableWidget;
    QPushButton *back;
    QLabel *label;

    void setupUi(QWidget *allcourse)
    {
        if (allcourse->objectName().isEmpty())
            allcourse->setObjectName(QStringLiteral("allcourse"));
        allcourse->resize(781, 473);
        tableWidget = new QTableWidget(allcourse);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
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
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(40, 100, 701, 351));
        back = new QPushButton(allcourse);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(650, 50, 91, 31));
        label = new QLabel(allcourse);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 20, 391, 41));
        label->setStyleSheet(QStringLiteral("font: 75 18pt \"Consolas\";"));

        retranslateUi(allcourse);

        QMetaObject::connectSlotsByName(allcourse);
    } // setupUi

    void retranslateUi(QWidget *allcourse)
    {
        allcourse->setWindowTitle(QApplication::translate("allcourse", "Form", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("allcourse", "COURSEID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("allcourse", "OBJECT", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("allcourse", "TEACHER", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("allcourse", "TERM", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("allcourse", "ADDRESS", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("allcourse", "PERIOD", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("allcourse", "CREDIT", Q_NULLPTR));
        back->setText(QApplication::translate("allcourse", "BACK", Q_NULLPTR));
        label->setText(QApplication::translate("allcourse", "ALL COURSES' INFORMATION HERE", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class allcourse: public Ui_allcourse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLCOURSE_H
