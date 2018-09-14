/********************************************************************************
** Form generated from reading UI file 'findclass.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDCLASS_H
#define UI_FINDCLASS_H

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

class Ui_findclass
{
public:
    QLabel *label;
    QLineEdit *stu_find_classidIlineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *stu_find_class_namelineEdit;
    QLineEdit *stu_find_class_majorlineEdit;
    QLineEdit *stu_find_class_numlineEdit;
    QLabel *label_7;
    QPushButton *stu_find_classqueryButton;
    QPushButton *stu_findclassbackButton;
    QLineEdit *stu_find_class_instructorlineEdit;
    QLabel *label_6;

    void setupUi(QWidget *findclass)
    {
        if (findclass->objectName().isEmpty())
            findclass->setObjectName(QStringLiteral("findclass"));
        findclass->resize(526, 401);
        label = new QLabel(findclass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 80, 151, 31));
        stu_find_classidIlineEdit = new QLineEdit(findclass);
        stu_find_classidIlineEdit->setObjectName(QStringLiteral("stu_find_classidIlineEdit"));
        stu_find_classidIlineEdit->setGeometry(QRect(200, 80, 151, 31));
        label_2 = new QLabel(findclass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 160, 101, 31));
        label_3 = new QLabel(findclass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 210, 91, 31));
        label_4 = new QLabel(findclass);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 260, 71, 31));
        label_5 = new QLabel(findclass);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 310, 81, 31));
        stu_find_class_namelineEdit = new QLineEdit(findclass);
        stu_find_class_namelineEdit->setObjectName(QStringLiteral("stu_find_class_namelineEdit"));
        stu_find_class_namelineEdit->setGeometry(QRect(170, 160, 151, 31));
        stu_find_class_majorlineEdit = new QLineEdit(findclass);
        stu_find_class_majorlineEdit->setObjectName(QStringLiteral("stu_find_class_majorlineEdit"));
        stu_find_class_majorlineEdit->setGeometry(QRect(170, 210, 151, 31));
        stu_find_class_numlineEdit = new QLineEdit(findclass);
        stu_find_class_numlineEdit->setObjectName(QStringLiteral("stu_find_class_numlineEdit"));
        stu_find_class_numlineEdit->setGeometry(QRect(170, 260, 151, 31));
        label_7 = new QLabel(findclass);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 120, 121, 21));
        stu_find_classqueryButton = new QPushButton(findclass);
        stu_find_classqueryButton->setObjectName(QStringLiteral("stu_find_classqueryButton"));
        stu_find_classqueryButton->setGeometry(QRect(380, 80, 91, 31));
        stu_findclassbackButton = new QPushButton(findclass);
        stu_findclassbackButton->setObjectName(QStringLiteral("stu_findclassbackButton"));
        stu_findclassbackButton->setGeometry(QRect(380, 310, 91, 31));
        stu_find_class_instructorlineEdit = new QLineEdit(findclass);
        stu_find_class_instructorlineEdit->setObjectName(QStringLiteral("stu_find_class_instructorlineEdit"));
        stu_find_class_instructorlineEdit->setGeometry(QRect(170, 310, 151, 31));
        label_6 = new QLabel(findclass);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(120, 10, 351, 41));
        label_6->setStyleSheet(QStringLiteral("font: 75 18pt \"Consolas\";"));

        retranslateUi(findclass);

        QMetaObject::connectSlotsByName(findclass);
    } // setupUi

    void retranslateUi(QWidget *findclass)
    {
        findclass->setWindowTitle(QApplication::translate("findclass", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("findclass", "FIND BY CLASSID:", Q_NULLPTR));
        label_2->setText(QApplication::translate("findclass", "CLASS NAME:", Q_NULLPTR));
        label_3->setText(QApplication::translate("findclass", "MAJOR:", Q_NULLPTR));
        label_4->setText(QApplication::translate("findclass", "SIZE:", Q_NULLPTR));
        label_5->setText(QApplication::translate("findclass", "ADVISER:", Q_NULLPTR));
        label_7->setText(QApplication::translate("findclass", "RESULT:", Q_NULLPTR));
        stu_find_classqueryButton->setText(QApplication::translate("findclass", "SEARCH", Q_NULLPTR));
        stu_findclassbackButton->setText(QApplication::translate("findclass", "BACK", Q_NULLPTR));
        label_6->setText(QApplication::translate("findclass", "SEARCH CLASS INFROMATION", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class findclass: public Ui_findclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDCLASS_H
