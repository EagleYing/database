/********************************************************************************
** Form generated from reading UI file 'coursemanage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEMANAGE_H
#define UI_COURSEMANAGE_H

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

class Ui_coursemanage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *couresnamelineEdit;
    QLineEdit *course_IDlineEdit;
    QLineEdit *course_teacherlineEdit;
    QLineEdit *course_timelineEdit;
    QLineEdit *course_addresslineEdit;
    QLineEdit *periodlineEdit;
    QLineEdit *creditlineEdit;
    QPushButton *course_querypushButton;
    QPushButton *course_addpushButton;
    QPushButton *course_deletepushButton;
    QPushButton *course_updatepushButton;
    QPushButton *course_backpushButton;

    void setupUi(QWidget *coursemanage)
    {
        if (coursemanage->objectName().isEmpty())
            coursemanage->setObjectName(QStringLiteral("coursemanage"));
        coursemanage->resize(582, 486);
        label = new QLabel(coursemanage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 90, 171, 31));
        label_2 = new QLabel(coursemanage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 20, 241, 41));
        label_2->setStyleSheet(QStringLiteral("font: 75 18pt \"Consolas\";"));
        label_3 = new QLabel(coursemanage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 150, 71, 31));
        label_4 = new QLabel(coursemanage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 200, 81, 31));
        label_5 = new QLabel(coursemanage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 250, 71, 31));
        label_6 = new QLabel(coursemanage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 290, 71, 31));
        label_7 = new QLabel(coursemanage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(110, 350, 61, 31));
        label_8 = new QLabel(coursemanage);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(110, 400, 61, 31));
        couresnamelineEdit = new QLineEdit(coursemanage);
        couresnamelineEdit->setObjectName(QStringLiteral("couresnamelineEdit"));
        couresnamelineEdit->setGeometry(QRect(220, 150, 141, 31));
        course_IDlineEdit = new QLineEdit(coursemanage);
        course_IDlineEdit->setObjectName(QStringLiteral("course_IDlineEdit"));
        course_IDlineEdit->setGeometry(QRect(220, 90, 141, 31));
        course_teacherlineEdit = new QLineEdit(coursemanage);
        course_teacherlineEdit->setObjectName(QStringLiteral("course_teacherlineEdit"));
        course_teacherlineEdit->setGeometry(QRect(220, 200, 141, 31));
        course_timelineEdit = new QLineEdit(coursemanage);
        course_timelineEdit->setObjectName(QStringLiteral("course_timelineEdit"));
        course_timelineEdit->setGeometry(QRect(220, 250, 141, 31));
        course_addresslineEdit = new QLineEdit(coursemanage);
        course_addresslineEdit->setObjectName(QStringLiteral("course_addresslineEdit"));
        course_addresslineEdit->setGeometry(QRect(220, 300, 141, 31));
        periodlineEdit = new QLineEdit(coursemanage);
        periodlineEdit->setObjectName(QStringLiteral("periodlineEdit"));
        periodlineEdit->setGeometry(QRect(220, 350, 141, 31));
        creditlineEdit = new QLineEdit(coursemanage);
        creditlineEdit->setObjectName(QStringLiteral("creditlineEdit"));
        creditlineEdit->setGeometry(QRect(220, 400, 141, 31));
        course_querypushButton = new QPushButton(coursemanage);
        course_querypushButton->setObjectName(QStringLiteral("course_querypushButton"));
        course_querypushButton->setGeometry(QRect(400, 90, 81, 31));
        course_addpushButton = new QPushButton(coursemanage);
        course_addpushButton->setObjectName(QStringLiteral("course_addpushButton"));
        course_addpushButton->setGeometry(QRect(400, 200, 81, 31));
        course_deletepushButton = new QPushButton(coursemanage);
        course_deletepushButton->setObjectName(QStringLiteral("course_deletepushButton"));
        course_deletepushButton->setGeometry(QRect(400, 250, 81, 31));
        course_updatepushButton = new QPushButton(coursemanage);
        course_updatepushButton->setObjectName(QStringLiteral("course_updatepushButton"));
        course_updatepushButton->setGeometry(QRect(400, 300, 81, 31));
        course_backpushButton = new QPushButton(coursemanage);
        course_backpushButton->setObjectName(QStringLiteral("course_backpushButton"));
        course_backpushButton->setGeometry(QRect(400, 400, 81, 31));

        retranslateUi(coursemanage);

        QMetaObject::connectSlotsByName(coursemanage);
    } // setupUi

    void retranslateUi(QWidget *coursemanage)
    {
        coursemanage->setWindowTitle(QApplication::translate("coursemanage", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("coursemanage", "SEARCH BY COURSEID", Q_NULLPTR));
        label_2->setText(QApplication::translate("coursemanage", "COURSE MANAGEMENT", Q_NULLPTR));
        label_3->setText(QApplication::translate("coursemanage", "OBJECT:", Q_NULLPTR));
        label_4->setText(QApplication::translate("coursemanage", "TEACHER", Q_NULLPTR));
        label_5->setText(QApplication::translate("coursemanage", "TERM:", Q_NULLPTR));
        label_6->setText(QApplication::translate("coursemanage", "ADDRESS:", Q_NULLPTR));
        label_7->setText(QApplication::translate("coursemanage", "PERIOD:", Q_NULLPTR));
        label_8->setText(QApplication::translate("coursemanage", "CREDIT:", Q_NULLPTR));
        course_querypushButton->setText(QApplication::translate("coursemanage", "SEARCH", Q_NULLPTR));
        course_addpushButton->setText(QApplication::translate("coursemanage", "ADD", Q_NULLPTR));
        course_deletepushButton->setText(QApplication::translate("coursemanage", "DELETE", Q_NULLPTR));
        course_updatepushButton->setText(QApplication::translate("coursemanage", "UPDATE", Q_NULLPTR));
        course_backpushButton->setText(QApplication::translate("coursemanage", "BACK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class coursemanage: public Ui_coursemanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEMANAGE_H
