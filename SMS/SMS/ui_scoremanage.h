/********************************************************************************
** Form generated from reading UI file 'scoremanage.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCOREMANAGE_H
#define UI_SCOREMANAGE_H

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

class Ui_scoremanage
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *score_objectlineEdit;
    QLineEdit *score_IDlineEdit;
    QLineEdit *score_teacherlineEdit;
    QLineEdit *score_scorelineEdit;
    QPushButton *score_querypushButton;
    QPushButton *score_upadtepushButton;
    QPushButton *score_backpushButton;
    QTableWidget *tableWidget;
    QLineEdit *courseid_lineEdit;
    QLabel *label_4;
    QPushButton *show_all_scoreButton;
    QPushButton *asc_Button;
    QPushButton *desc_Button;
    QLabel *label_5;

    void setupUi(QWidget *scoremanage)
    {
        if (scoremanage->objectName().isEmpty())
            scoremanage->setObjectName(QStringLiteral("scoremanage"));
        scoremanage->resize(642, 569);
        label = new QLabel(scoremanage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 20, 311, 41));
        label->setStyleSheet(QStringLiteral("font: 20pt \"Arial\";"));
        label_2 = new QLabel(scoremanage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 140, 51, 21));
        label_3 = new QLabel(scoremanage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(250, 140, 71, 31));
        label_6 = new QLabel(scoremanage);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 190, 51, 31));
        label_7 = new QLabel(scoremanage);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(250, 190, 71, 31));
        score_objectlineEdit = new QLineEdit(scoremanage);
        score_objectlineEdit->setObjectName(QStringLiteral("score_objectlineEdit"));
        score_objectlineEdit->setGeometry(QRect(320, 140, 111, 31));
        score_IDlineEdit = new QLineEdit(scoremanage);
        score_IDlineEdit->setObjectName(QStringLiteral("score_IDlineEdit"));
        score_IDlineEdit->setGeometry(QRect(90, 140, 111, 31));
        score_teacherlineEdit = new QLineEdit(scoremanage);
        score_teacherlineEdit->setObjectName(QStringLiteral("score_teacherlineEdit"));
        score_teacherlineEdit->setGeometry(QRect(90, 190, 111, 31));
        score_scorelineEdit = new QLineEdit(scoremanage);
        score_scorelineEdit->setObjectName(QStringLiteral("score_scorelineEdit"));
        score_scorelineEdit->setGeometry(QRect(320, 190, 111, 31));
        score_querypushButton = new QPushButton(scoremanage);
        score_querypushButton->setObjectName(QStringLiteral("score_querypushButton"));
        score_querypushButton->setGeometry(QRect(480, 140, 81, 31));
        score_upadtepushButton = new QPushButton(scoremanage);
        score_upadtepushButton->setObjectName(QStringLiteral("score_upadtepushButton"));
        score_upadtepushButton->setGeometry(QRect(480, 190, 81, 31));
        score_backpushButton = new QPushButton(scoremanage);
        score_backpushButton->setObjectName(QStringLiteral("score_backpushButton"));
        score_backpushButton->setGeometry(QRect(480, 490, 81, 31));
        tableWidget = new QTableWidget(scoremanage);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(40, 250, 401, 291));
        courseid_lineEdit = new QLineEdit(scoremanage);
        courseid_lineEdit->setObjectName(QStringLiteral("courseid_lineEdit"));
        courseid_lineEdit->setGeometry(QRect(210, 80, 161, 31));
        label_4 = new QLabel(scoremanage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 80, 171, 21));
        show_all_scoreButton = new QPushButton(scoremanage);
        show_all_scoreButton->setObjectName(QStringLiteral("show_all_scoreButton"));
        show_all_scoreButton->setGeometry(QRect(440, 80, 121, 31));
        asc_Button = new QPushButton(scoremanage);
        asc_Button->setObjectName(QStringLiteral("asc_Button"));
        asc_Button->setGeometry(QRect(480, 300, 81, 31));
        desc_Button = new QPushButton(scoremanage);
        desc_Button->setObjectName(QStringLiteral("desc_Button"));
        desc_Button->setGeometry(QRect(480, 350, 81, 31));
        label_5 = new QLabel(scoremanage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(470, 240, 131, 51));

        retranslateUi(scoremanage);

        QMetaObject::connectSlotsByName(scoremanage);
    } // setupUi

    void retranslateUi(QWidget *scoremanage)
    {
        scoremanage->setWindowTitle(QApplication::translate("scoremanage", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("scoremanage", "GRADE MANEGEMENT", Q_NULLPTR));
        label_2->setText(QApplication::translate("scoremanage", "SNO", Q_NULLPTR));
        label_3->setText(QApplication::translate("scoremanage", "OBJECT", Q_NULLPTR));
        label_6->setText(QApplication::translate("scoremanage", "NAME", Q_NULLPTR));
        label_7->setText(QApplication::translate("scoremanage", "SCORE", Q_NULLPTR));
        score_querypushButton->setText(QApplication::translate("scoremanage", "SEARCH", Q_NULLPTR));
        score_upadtepushButton->setText(QApplication::translate("scoremanage", "UPDATE", Q_NULLPTR));
        score_backpushButton->setText(QApplication::translate("scoremanage", "BACK", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("scoremanage", "SNO", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("scoremanage", "CLASS", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("scoremanage", "NAME", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("scoremanage", "SCORE", Q_NULLPTR));
        label_4->setText(QApplication::translate("scoremanage", "FIND BY COURSE ID:", Q_NULLPTR));
        show_all_scoreButton->setText(QApplication::translate("scoremanage", "SHOW", Q_NULLPTR));
        asc_Button->setText(QApplication::translate("scoremanage", "ASC", Q_NULLPTR));
        desc_Button->setText(QApplication::translate("scoremanage", "DESC", Q_NULLPTR));
        label_5->setText(QApplication::translate("scoremanage", "ORDER BY SCORE:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class scoremanage: public Ui_scoremanage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCOREMANAGE_H
