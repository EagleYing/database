/********************************************************************************
** Form generated from reading UI file 'allstuinform.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLSTUINFORM_H
#define UI_ALLSTUINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AllstuInform
{
public:
    QLabel *label;
    QPushButton *back_stuButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *AllstuInform)
    {
        if (AllstuInform->objectName().isEmpty())
            AllstuInform->setObjectName(QStringLiteral("AllstuInform"));
        AllstuInform->resize(736, 452);
        label = new QLabel(AllstuInform);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 50, 261, 21));
        label->setStyleSheet(QStringLiteral("font: 75 16pt \"Consolas\";"));
        back_stuButton = new QPushButton(AllstuInform);
        back_stuButton->setObjectName(QStringLiteral("back_stuButton"));
        back_stuButton->setGeometry(QRect(560, 50, 75, 23));
        textEdit = new QTextEdit(AllstuInform);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(70, 120, 591, 251));
        textEdit->setStyleSheet(QStringLiteral(""));

        retranslateUi(AllstuInform);

        QMetaObject::connectSlotsByName(AllstuInform);
    } // setupUi

    void retranslateUi(QWidget *AllstuInform)
    {
        AllstuInform->setWindowTitle(QApplication::translate("AllstuInform", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("AllstuInform", "YOUR INFORMATION", Q_NULLPTR));
        back_stuButton->setText(QApplication::translate("AllstuInform", "BACK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AllstuInform: public Ui_AllstuInform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLSTUINFORM_H
