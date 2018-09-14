/********************************************************************************
** Form generated from reading UI file 'studentform.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTFORM_H
#define UI_STUDENTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_studentForm
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *stu_findclass_inforButton;
    QPushButton *stu_award_button;
    QPushButton *stu_query_fee_Button;
    QPushButton *stu_find_coursebutton;
    QLabel *label;
    QLabel *label_user;

    void setupUi(QWidget *studentForm)
    {
        if (studentForm->objectName().isEmpty())
            studentForm->setObjectName(QStringLiteral("studentForm"));
        studentForm->resize(553, 373);
        studentForm->setStyleSheet(QStringLiteral(""));
        pushButton = new QPushButton(studentForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 260, 171, 41));
        pushButton->setStyleSheet(QStringLiteral(""));
        pushButton_3 = new QPushButton(studentForm);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 120, 171, 41));
        pushButton_3->setStyleSheet(QStringLiteral(""));
        pushButton_3->setCheckable(false);
        stu_findclass_inforButton = new QPushButton(studentForm);
        stu_findclass_inforButton->setObjectName(QStringLiteral("stu_findclass_inforButton"));
        stu_findclass_inforButton->setGeometry(QRect(80, 190, 171, 41));
        stu_findclass_inforButton->setStyleSheet(QStringLiteral(""));
        stu_award_button = new QPushButton(studentForm);
        stu_award_button->setObjectName(QStringLiteral("stu_award_button"));
        stu_award_button->setGeometry(QRect(300, 120, 171, 41));
        stu_query_fee_Button = new QPushButton(studentForm);
        stu_query_fee_Button->setObjectName(QStringLiteral("stu_query_fee_Button"));
        stu_query_fee_Button->setGeometry(QRect(80, 260, 171, 41));
        stu_find_coursebutton = new QPushButton(studentForm);
        stu_find_coursebutton->setObjectName(QStringLiteral("stu_find_coursebutton"));
        stu_find_coursebutton->setGeometry(QRect(300, 190, 171, 41));
        stu_find_coursebutton->setStyleSheet(QStringLiteral(""));
        label = new QLabel(studentForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 20, 101, 31));
        label->setStyleSheet(QStringLiteral("font: 75 18pt \"Consolas\";"));
        label_user = new QLabel(studentForm);
        label_user->setObjectName(QStringLiteral("label_user"));
        label_user->setGeometry(QRect(220, 50, 171, 41));

        retranslateUi(studentForm);

        QMetaObject::connectSlotsByName(studentForm);
    } // setupUi

    void retranslateUi(QWidget *studentForm)
    {
        studentForm->setWindowTitle(QApplication::translate("studentForm", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("studentForm", "BACK", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("studentForm", "BASIC INFORMATION", Q_NULLPTR));
        stu_findclass_inforButton->setText(QApplication::translate("studentForm", "ClASS INQUIRY", Q_NULLPTR));
        stu_award_button->setText(QApplication::translate("studentForm", "AWARD INQUIRY", Q_NULLPTR));
        stu_query_fee_Button->setText(QApplication::translate("studentForm", "FEE INQUIRY", Q_NULLPTR));
        stu_find_coursebutton->setText(QApplication::translate("studentForm", "COURSE SYSTEM", Q_NULLPTR));
        label->setText(QApplication::translate("studentForm", "WELCONE", Q_NULLPTR));
        label_user->setText(QApplication::translate("studentForm", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class studentForm: public Ui_studentForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTFORM_H
