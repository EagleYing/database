/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLineEdit *Login_password;
    QLineEdit *Login_username;
    QLabel *label_3;
    QPushButton *LoginButton;
    QPushButton *remitButton;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(368, 336);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 130, 71, 31));
        radioButton = new QRadioButton(centralWidget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(50, 180, 89, 16));
        radioButton_2 = new QRadioButton(centralWidget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(170, 170, 141, 31));
        Login_password = new QLineEdit(centralWidget);
        Login_password->setObjectName(QStringLiteral("Login_password"));
        Login_password->setGeometry(QRect(130, 130, 181, 31));
        Login_password->setStyleSheet(QLatin1String("font: 6pt \"Arial\";\n"
"font: 9pt \"Arial\";"));
        Login_username = new QLineEdit(centralWidget);
        Login_username->setObjectName(QStringLiteral("Login_username"));
        Login_username->setGeometry(QRect(130, 90, 181, 31));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 20, 191, 41));
        label_3->setStyleSheet(QStringLiteral("font: 75 14pt \"Consolas\";"));
        LoginButton = new QPushButton(centralWidget);
        LoginButton->setObjectName(QStringLiteral("LoginButton"));
        LoginButton->setGeometry(QRect(50, 220, 261, 31));
        remitButton = new QPushButton(centralWidget);
        remitButton->setObjectName(QStringLiteral("remitButton"));
        remitButton->setGeometry(QRect(50, 260, 261, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 90, 81, 31));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DESIGHER: YingYizhou", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "PASSWORD", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "MANAGER", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "COMMON USER", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "STUDENT INFORMATION MANAGEMENT", Q_NULLPTR));
        LoginButton->setText(QApplication::translate("MainWindow", "LOGIN", Q_NULLPTR));
        remitButton->setText(QApplication::translate("MainWindow", "RESET", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "USERNAME", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
