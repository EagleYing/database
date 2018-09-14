/********************************************************************************
** Form generated from reading UI file 'coursefind.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEFIND_H
#define UI_COURSEFIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_coursefind
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *stu_course_IDlineEdit;
    QLineEdit *stu_course_namelineEdit;
    QLineEdit *stu_teacher_namelineEdit;
    QLineEdit *stu_course_timelineEdit;
    QLineEdit *stu_course_addresslineEdit;
    QLineEdit *stu_course_periodlineEdit;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *stu_course_creditlineEdit;
    QPushButton *stu_query_courseButton;
    QPushButton *stu_course_backButton;
    QPushButton *show_all_courseButton;
    QTableWidget *tableWidget;
    QPushButton *choose;
    QPushButton *drop_courseButton;

    void setupUi(QWidget *coursefind)
    {
        if (coursefind->objectName().isEmpty())
            coursefind->setObjectName(QStringLiteral("coursefind"));
        coursefind->resize(807, 463);
        label = new QLabel(coursefind);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 20, 541, 51));
        label->setStyleSheet(QStringLiteral("font: 75 18pt \"Consolas\";"));
        label_2 = new QLabel(coursefind);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(380, 90, 131, 31));
        label_3 = new QLabel(coursefind);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(380, 170, 81, 31));
        label_4 = new QLabel(coursefind);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(380, 210, 61, 31));
        label_5 = new QLabel(coursefind);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(380, 250, 61, 31));
        label_6 = new QLabel(coursefind);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(380, 290, 91, 31));
        label_7 = new QLabel(coursefind);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(380, 330, 71, 31));
        stu_course_IDlineEdit = new QLineEdit(coursefind);
        stu_course_IDlineEdit->setObjectName(QStringLiteral("stu_course_IDlineEdit"));
        stu_course_IDlineEdit->setGeometry(QRect(520, 90, 141, 31));
        stu_course_namelineEdit = new QLineEdit(coursefind);
        stu_course_namelineEdit->setObjectName(QStringLiteral("stu_course_namelineEdit"));
        stu_course_namelineEdit->setGeometry(QRect(520, 170, 141, 31));
        stu_teacher_namelineEdit = new QLineEdit(coursefind);
        stu_teacher_namelineEdit->setObjectName(QStringLiteral("stu_teacher_namelineEdit"));
        stu_teacher_namelineEdit->setGeometry(QRect(520, 210, 141, 31));
        stu_course_timelineEdit = new QLineEdit(coursefind);
        stu_course_timelineEdit->setObjectName(QStringLiteral("stu_course_timelineEdit"));
        stu_course_timelineEdit->setGeometry(QRect(520, 250, 141, 31));
        stu_course_addresslineEdit = new QLineEdit(coursefind);
        stu_course_addresslineEdit->setObjectName(QStringLiteral("stu_course_addresslineEdit"));
        stu_course_addresslineEdit->setGeometry(QRect(520, 290, 141, 31));
        stu_course_periodlineEdit = new QLineEdit(coursefind);
        stu_course_periodlineEdit->setObjectName(QStringLiteral("stu_course_periodlineEdit"));
        stu_course_periodlineEdit->setGeometry(QRect(520, 330, 141, 31));
        label_8 = new QLabel(coursefind);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(260, 200, 54, 12));
        label_9 = new QLabel(coursefind);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(380, 130, 81, 21));
        label_10 = new QLabel(coursefind);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(380, 370, 71, 31));
        stu_course_creditlineEdit = new QLineEdit(coursefind);
        stu_course_creditlineEdit->setObjectName(QStringLiteral("stu_course_creditlineEdit"));
        stu_course_creditlineEdit->setGeometry(QRect(520, 370, 141, 31));
        stu_query_courseButton = new QPushButton(coursefind);
        stu_query_courseButton->setObjectName(QStringLiteral("stu_query_courseButton"));
        stu_query_courseButton->setGeometry(QRect(700, 90, 81, 31));
        stu_course_backButton = new QPushButton(coursefind);
        stu_course_backButton->setObjectName(QStringLiteral("stu_course_backButton"));
        stu_course_backButton->setGeometry(QRect(700, 370, 81, 31));
        show_all_courseButton = new QPushButton(coursefind);
        show_all_courseButton->setObjectName(QStringLiteral("show_all_courseButton"));
        show_all_courseButton->setGeometry(QRect(700, 170, 81, 31));
        tableWidget = new QTableWidget(coursefind);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(30, 90, 301, 321));
        choose = new QPushButton(coursefind);
        choose->setObjectName(QStringLiteral("choose"));
        choose->setGeometry(QRect(700, 230, 81, 31));
        drop_courseButton = new QPushButton(coursefind);
        drop_courseButton->setObjectName(QStringLiteral("drop_courseButton"));
        drop_courseButton->setGeometry(QRect(700, 300, 81, 31));

        retranslateUi(coursefind);

        QMetaObject::connectSlotsByName(coursefind);
    } // setupUi

    void retranslateUi(QWidget *coursefind)
    {
        coursefind->setWindowTitle(QApplication::translate("coursefind", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("coursefind", "YOUR COURSE                     EDIT HERE", Q_NULLPTR));
        label_2->setText(QApplication::translate("coursefind", "FIND BY COURSE ID:", Q_NULLPTR));
        label_3->setText(QApplication::translate("coursefind", "COURSE NAME:", Q_NULLPTR));
        label_4->setText(QApplication::translate("coursefind", "TEACHER:", Q_NULLPTR));
        label_5->setText(QApplication::translate("coursefind", "TERM:", Q_NULLPTR));
        label_6->setText(QApplication::translate("coursefind", "ADDRESS:", Q_NULLPTR));
        label_7->setText(QApplication::translate("coursefind", "PERIOD:", Q_NULLPTR));
        label_8->setText(QString());
        label_9->setText(QApplication::translate("coursefind", "RESULT:", Q_NULLPTR));
        label_10->setText(QApplication::translate("coursefind", "CRIDET:", Q_NULLPTR));
        stu_query_courseButton->setText(QApplication::translate("coursefind", "SEARCH", Q_NULLPTR));
        stu_course_backButton->setText(QApplication::translate("coursefind", "BACK", Q_NULLPTR));
        show_all_courseButton->setText(QApplication::translate("coursefind", "SHOW ALL", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("coursefind", "OBJECT", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("coursefind", "TEACHER", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("coursefind", "SCORE", Q_NULLPTR));
        choose->setText(QApplication::translate("coursefind", "CHOOSE", Q_NULLPTR));
        drop_courseButton->setText(QApplication::translate("coursefind", "DROP", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class coursefind: public Ui_coursefind {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEFIND_H
