/********************************************************************************
** Form generated from reading UI file 'findscore.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDSCORE_H
#define UI_FINDSCORE_H

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

class Ui_findscore
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_findscore_id;
    QLabel *label_3;
    QLineEdit *lineEdit_findscore_class;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_findscore_teacher;
    QLineEdit *lineEdit_findscore_object;
    QLineEdit *lineEdit_findscore_time;
    QLineEdit *lineEdit_findscore_score;
    QLabel *label_4;
    QPushButton *findscoreButton;
    QPushButton *pushButton_findcore_back;
    QLabel *label_8;

    void setupUi(QWidget *findscore)
    {
        if (findscore->objectName().isEmpty())
            findscore->setObjectName(QStringLiteral("findscore"));
        findscore->resize(668, 363);
        findscore->setStyleSheet(QStringLiteral("font: 20pt \"Arial\";"));
        label = new QLabel(findscore);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 20, 101, 20));
        label->setStyleSheet(QStringLiteral("font: 14pt \"Arial\";"));
        label_2 = new QLabel(findscore);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 120, 61, 31));
        label_2->setStyleSheet(QStringLiteral("font: 9pt \"Arial\";"));
        lineEdit_findscore_id = new QLineEdit(findscore);
        lineEdit_findscore_id->setObjectName(QStringLiteral("lineEdit_findscore_id"));
        lineEdit_findscore_id->setGeometry(QRect(90, 130, 151, 20));
        lineEdit_findscore_id->setStyleSheet(QStringLiteral("font: 75 12pt \"Aharoni\";"));
        label_3 = new QLabel(findscore);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 150, 54, 21));
        label_3->setStyleSheet(QStringLiteral("font: 9pt \"Arial\";"));
        lineEdit_findscore_class = new QLineEdit(findscore);
        lineEdit_findscore_class->setObjectName(QStringLiteral("lineEdit_findscore_class"));
        lineEdit_findscore_class->setGeometry(QRect(90, 160, 151, 20));
        lineEdit_findscore_class->setStyleSheet(QStringLiteral("font: 9pt \"Arial\";"));
        label_5 = new QLabel(findscore);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 100, 54, 20));
        label_5->setStyleSheet(QStringLiteral("font: 9pt \"Arial\";"));
        label_6 = new QLabel(findscore);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 60, 54, 31));
        label_6->setStyleSheet(QStringLiteral("font: 9pt \"Arial\";"));
        label_7 = new QLabel(findscore);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 200, 61, 31));
        label_7->setStyleSheet(QStringLiteral("font: 9pt \"Arial\";"));
        lineEdit_findscore_teacher = new QLineEdit(findscore);
        lineEdit_findscore_teacher->setObjectName(QStringLiteral("lineEdit_findscore_teacher"));
        lineEdit_findscore_teacher->setGeometry(QRect(90, 180, 151, 20));
        lineEdit_findscore_teacher->setStyleSheet(QStringLiteral("font: 9pt \"Arial\";"));
        lineEdit_findscore_object = new QLineEdit(findscore);
        lineEdit_findscore_object->setObjectName(QStringLiteral("lineEdit_findscore_object"));
        lineEdit_findscore_object->setGeometry(QRect(90, 100, 141, 20));
        lineEdit_findscore_object->setStyleSheet(QStringLiteral("font: 9pt \"Arial\";"));
        lineEdit_findscore_time = new QLineEdit(findscore);
        lineEdit_findscore_time->setObjectName(QStringLiteral("lineEdit_findscore_time"));
        lineEdit_findscore_time->setGeometry(QRect(90, 60, 141, 20));
        lineEdit_findscore_time->setStyleSheet(QStringLiteral("font: 9pt \"Arial\";"));
        lineEdit_findscore_score = new QLineEdit(findscore);
        lineEdit_findscore_score->setObjectName(QStringLiteral("lineEdit_findscore_score"));
        lineEdit_findscore_score->setGeometry(QRect(90, 210, 141, 20));
        lineEdit_findscore_score->setStyleSheet(QStringLiteral("font: 9pt \"Arial\";"));
        label_4 = new QLabel(findscore);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 170, 61, 31));
        label_4->setStyleSheet(QStringLiteral("font: 9pt \"Arial\";"));
        findscoreButton = new QPushButton(findscore);
        findscoreButton->setObjectName(QStringLiteral("findscoreButton"));
        findscoreButton->setGeometry(QRect(170, 270, 75, 23));
        findscoreButton->setStyleSheet(QStringLiteral("font: 9pt \"Arial\";"));
        pushButton_findcore_back = new QPushButton(findscore);
        pushButton_findcore_back->setObjectName(QStringLiteral("pushButton_findcore_back"));
        pushButton_findcore_back->setGeometry(QRect(430, 270, 75, 23));
        pushButton_findcore_back->setStyleSheet(QStringLiteral("font: 9pt \"Arial\";"));
        label_8 = new QLabel(findscore);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(220, 230, 261, 20));
        label_8->setStyleSheet(QStringLiteral("font: 9pt \"Arial\";"));

        retranslateUi(findscore);

        QMetaObject::connectSlotsByName(findscore);
    } // setupUi

    void retranslateUi(QWidget *findscore)
    {
        findscore->setWindowTitle(QApplication::translate("findscore", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("findscore", "\346\210\220\347\273\251\346\237\245\350\257\242", Q_NULLPTR));
        label_2->setText(QApplication::translate("findscore", "\345\255\246\345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("findscore", "\347\217\255\347\272\247", Q_NULLPTR));
        label_5->setText(QApplication::translate("findscore", "\347\247\221\347\233\256", Q_NULLPTR));
        label_6->setText(QApplication::translate("findscore", "\345\255\246\346\234\237", Q_NULLPTR));
        label_7->setText(QApplication::translate("findscore", "\345\210\206\346\225\260", Q_NULLPTR));
        label_4->setText(QApplication::translate("findscore", "\346\216\210\350\257\276\350\200\201\345\270\210", Q_NULLPTR));
        findscoreButton->setText(QApplication::translate("findscore", "\346\237\245\350\257\242", Q_NULLPTR));
        pushButton_findcore_back->setText(QApplication::translate("findscore", "\350\277\224\345\233\236", Q_NULLPTR));
        label_8->setText(QApplication::translate("findscore", "\346\263\250\346\204\217\357\274\232\345\255\246\345\217\267\357\274\214\347\247\221\347\233\256\357\274\214\345\255\246\346\234\237\344\270\272\345\277\205\345\241\253", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class findscore: public Ui_findscore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDSCORE_H
