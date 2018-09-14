/********************************************************************************
** Form generated from reading UI file 'classmanage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLASSMANAGE_H
#define UI_CLASSMANAGE_H

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

class Ui_classmanage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *class_classIDlineEdit;
    QLineEdit *class_classnamelineEdit;
    QLineEdit *class_majorlineEdit;
    QLineEdit *class_membernumlineEdit;
    QLineEdit *instructorlineEdit;
    QPushButton *class_querypushButton;
    QPushButton *class_addpushButton;
    QPushButton *class_deletepushButton;
    QPushButton *class_upadatepushButton;
    QPushButton *class_backpushButton;
    QLabel *label_7;

    void setupUi(QWidget *classmanage)
    {
        if (classmanage->objectName().isEmpty())
            classmanage->setObjectName(QStringLiteral("classmanage"));
        classmanage->resize(590, 441);
        label = new QLabel(classmanage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 20, 211, 41));
        label->setStyleSheet(QStringLiteral("font: 75 18pt \"Consolas\";"));
        label_2 = new QLabel(classmanage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 70, 161, 31));
        label_3 = new QLabel(classmanage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 180, 61, 16));
        label_4 = new QLabel(classmanage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 220, 61, 20));
        label_5 = new QLabel(classmanage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 270, 51, 21));
        label_6 = new QLabel(classmanage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 320, 91, 31));
        class_classIDlineEdit = new QLineEdit(classmanage);
        class_classIDlineEdit->setObjectName(QStringLiteral("class_classIDlineEdit"));
        class_classIDlineEdit->setGeometry(QRect(230, 70, 141, 31));
        class_classnamelineEdit = new QLineEdit(classmanage);
        class_classnamelineEdit->setObjectName(QStringLiteral("class_classnamelineEdit"));
        class_classnamelineEdit->setGeometry(QRect(180, 170, 121, 31));
        class_majorlineEdit = new QLineEdit(classmanage);
        class_majorlineEdit->setObjectName(QStringLiteral("class_majorlineEdit"));
        class_majorlineEdit->setGeometry(QRect(180, 220, 121, 31));
        class_membernumlineEdit = new QLineEdit(classmanage);
        class_membernumlineEdit->setObjectName(QStringLiteral("class_membernumlineEdit"));
        class_membernumlineEdit->setGeometry(QRect(180, 270, 121, 31));
        instructorlineEdit = new QLineEdit(classmanage);
        instructorlineEdit->setObjectName(QStringLiteral("instructorlineEdit"));
        instructorlineEdit->setGeometry(QRect(180, 320, 121, 31));
        class_querypushButton = new QPushButton(classmanage);
        class_querypushButton->setObjectName(QStringLiteral("class_querypushButton"));
        class_querypushButton->setGeometry(QRect(410, 70, 81, 31));
        class_addpushButton = new QPushButton(classmanage);
        class_addpushButton->setObjectName(QStringLiteral("class_addpushButton"));
        class_addpushButton->setGeometry(QRect(410, 170, 81, 31));
        class_deletepushButton = new QPushButton(classmanage);
        class_deletepushButton->setObjectName(QStringLiteral("class_deletepushButton"));
        class_deletepushButton->setGeometry(QRect(410, 220, 81, 31));
        class_upadatepushButton = new QPushButton(classmanage);
        class_upadatepushButton->setObjectName(QStringLiteral("class_upadatepushButton"));
        class_upadatepushButton->setGeometry(QRect(410, 270, 81, 31));
        class_backpushButton = new QPushButton(classmanage);
        class_backpushButton->setObjectName(QStringLiteral("class_backpushButton"));
        class_backpushButton->setGeometry(QRect(410, 320, 81, 31));
        label_7 = new QLabel(classmanage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 120, 91, 31));

        retranslateUi(classmanage);

        QMetaObject::connectSlotsByName(classmanage);
    } // setupUi

    void retranslateUi(QWidget *classmanage)
    {
        classmanage->setWindowTitle(QApplication::translate("classmanage", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("classmanage", "CLASS MANAGEMENT", Q_NULLPTR));
        label_2->setText(QApplication::translate("classmanage", "SEARCH BY CLASSID:", Q_NULLPTR));
        label_3->setText(QApplication::translate("classmanage", "CLASS:", Q_NULLPTR));
        label_4->setText(QApplication::translate("classmanage", "MAJOR:", Q_NULLPTR));
        label_5->setText(QApplication::translate("classmanage", "SIZE:", Q_NULLPTR));
        label_6->setText(QApplication::translate("classmanage", "ADVISER:", Q_NULLPTR));
        class_querypushButton->setText(QApplication::translate("classmanage", "SEARCH", Q_NULLPTR));
        class_addpushButton->setText(QApplication::translate("classmanage", "ADD", Q_NULLPTR));
        class_deletepushButton->setText(QApplication::translate("classmanage", "DELETE", Q_NULLPTR));
        class_upadatepushButton->setText(QApplication::translate("classmanage", "UPDATE", Q_NULLPTR));
        class_backpushButton->setText(QApplication::translate("classmanage", "BACK", Q_NULLPTR));
        label_7->setText(QApplication::translate("classmanage", "RESULT:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class classmanage: public Ui_classmanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLASSMANAGE_H
