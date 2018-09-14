/********************************************************************************
** Form generated from reading UI file 'findaward.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDAWARD_H
#define UI_FINDAWARD_H

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

class Ui_awardfind
{
public:
    QLabel *label;
    QPushButton *stu_award_querypushButton;
    QPushButton *stu_award_backpushButton;
    QTableWidget *tableWidget;

    void setupUi(QWidget *awardfind)
    {
        if (awardfind->objectName().isEmpty())
            awardfind->setObjectName(QStringLiteral("awardfind"));
        awardfind->resize(621, 459);
        label = new QLabel(awardfind);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 20, 331, 51));
        label->setStyleSheet(QStringLiteral("font: 75 18pt \"Consolas\";"));
        stu_award_querypushButton = new QPushButton(awardfind);
        stu_award_querypushButton->setObjectName(QStringLiteral("stu_award_querypushButton"));
        stu_award_querypushButton->setGeometry(QRect(490, 20, 75, 23));
        stu_award_backpushButton = new QPushButton(awardfind);
        stu_award_backpushButton->setObjectName(QStringLiteral("stu_award_backpushButton"));
        stu_award_backpushButton->setGeometry(QRect(490, 60, 75, 23));
        tableWidget = new QTableWidget(awardfind);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(40, 100, 531, 321));

        retranslateUi(awardfind);

        QMetaObject::connectSlotsByName(awardfind);
    } // setupUi

    void retranslateUi(QWidget *awardfind)
    {
        awardfind->setWindowTitle(QApplication::translate("awardfind", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("awardfind", "AWARD INFORMATION SEARCH", Q_NULLPTR));
        stu_award_querypushButton->setText(QApplication::translate("awardfind", "SHOW", Q_NULLPTR));
        stu_award_backpushButton->setText(QApplication::translate("awardfind", "BACK", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("awardfind", "TIME", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("awardfind", "AWARD", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class awardfind: public Ui_awardfind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDAWARD_H
