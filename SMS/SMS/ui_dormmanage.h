/********************************************************************************
** Form generated from reading UI file 'dormmanage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DORMMANAGE_H
#define UI_DORMMANAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dormmanage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *dorm_inputlineEdit;
    QLabel *label_3;
    QLineEdit *dorm_roomnum_numlineEdit;
    QLabel *label_4;
    QLineEdit *dormnum_lineEdit;
    QLineEdit *dorm_bednumlineEdit;
    QLabel *label_7;
    QPushButton *dorm_queryButton;
    QPushButton *dorm_addButton;
    QPushButton *dorm_deleteButton;
    QPushButton *updateButton;
    QPushButton *dorm_backButton;
    QPushButton *see_all_dorm_Button;
    QTextEdit *textEdit;

    void setupUi(QWidget *dormmanage)
    {
        if (dormmanage->objectName().isEmpty())
            dormmanage->setObjectName(QStringLiteral("dormmanage"));
        dormmanage->resize(559, 484);
        label = new QLabel(dormmanage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 20, 311, 61));
        label->setStyleSheet(QStringLiteral("font: 75 18pt \"Consolas\";"));
        label_2 = new QLabel(dormmanage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 120, 131, 31));
        dorm_inputlineEdit = new QLineEdit(dormmanage);
        dorm_inputlineEdit->setObjectName(QStringLiteral("dorm_inputlineEdit"));
        dorm_inputlineEdit->setGeometry(QRect(200, 120, 151, 31));
        label_3 = new QLabel(dormmanage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 300, 101, 31));
        dorm_roomnum_numlineEdit = new QLineEdit(dormmanage);
        dorm_roomnum_numlineEdit->setObjectName(QStringLiteral("dorm_roomnum_numlineEdit"));
        dorm_roomnum_numlineEdit->setGeometry(QRect(160, 300, 131, 31));
        label_4 = new QLabel(dormmanage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 250, 91, 31));
        dormnum_lineEdit = new QLineEdit(dormmanage);
        dormnum_lineEdit->setObjectName(QStringLiteral("dormnum_lineEdit"));
        dormnum_lineEdit->setGeometry(QRect(160, 250, 131, 31));
        dorm_bednumlineEdit = new QLineEdit(dormmanage);
        dorm_bednumlineEdit->setObjectName(QStringLiteral("dorm_bednumlineEdit"));
        dorm_bednumlineEdit->setGeometry(QRect(160, 350, 131, 31));
        label_7 = new QLabel(dormmanage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(50, 350, 91, 31));
        dorm_queryButton = new QPushButton(dormmanage);
        dorm_queryButton->setObjectName(QStringLiteral("dorm_queryButton"));
        dorm_queryButton->setGeometry(QRect(400, 120, 81, 31));
        dorm_addButton = new QPushButton(dormmanage);
        dorm_addButton->setObjectName(QStringLiteral("dorm_addButton"));
        dorm_addButton->setGeometry(QRect(50, 410, 81, 41));
        dorm_deleteButton = new QPushButton(dormmanage);
        dorm_deleteButton->setObjectName(QStringLiteral("dorm_deleteButton"));
        dorm_deleteButton->setGeometry(QRect(170, 410, 81, 41));
        updateButton = new QPushButton(dormmanage);
        updateButton->setObjectName(QStringLiteral("updateButton"));
        updateButton->setGeometry(QRect(300, 410, 81, 41));
        dorm_backButton = new QPushButton(dormmanage);
        dorm_backButton->setObjectName(QStringLiteral("dorm_backButton"));
        dorm_backButton->setGeometry(QRect(410, 410, 81, 41));
        see_all_dorm_Button = new QPushButton(dormmanage);
        see_all_dorm_Button->setObjectName(QStringLiteral("see_all_dorm_Button"));
        see_all_dorm_Button->setGeometry(QRect(400, 250, 81, 31));
        textEdit = new QTextEdit(dormmanage);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(50, 180, 441, 51));

        retranslateUi(dormmanage);

        QMetaObject::connectSlotsByName(dormmanage);
    } // setupUi

    void retranslateUi(QWidget *dormmanage)
    {
        dormmanage->setWindowTitle(QApplication::translate("dormmanage", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("dormmanage", "Student Accommodation", Q_NULLPTR));
        label_2->setText(QApplication::translate("dormmanage", "SEARCH BY SNO:", Q_NULLPTR));
        label_3->setText(QApplication::translate("dormmanage", "ROOMNUM:", Q_NULLPTR));
        label_4->setText(QApplication::translate("dormmanage", "DORMNUM:", Q_NULLPTR));
        label_7->setText(QApplication::translate("dormmanage", "BEDNUM:", Q_NULLPTR));
        dorm_queryButton->setText(QApplication::translate("dormmanage", "SEARCH", Q_NULLPTR));
        dorm_addButton->setText(QApplication::translate("dormmanage", "ADD", Q_NULLPTR));
        dorm_deleteButton->setText(QApplication::translate("dormmanage", "DELETE", Q_NULLPTR));
        updateButton->setText(QApplication::translate("dormmanage", "RESET", Q_NULLPTR));
        dorm_backButton->setText(QApplication::translate("dormmanage", "BACK", Q_NULLPTR));
        see_all_dorm_Button->setText(QApplication::translate("dormmanage", "SHOW ALL ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dormmanage: public Ui_dormmanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DORMMANAGE_H
