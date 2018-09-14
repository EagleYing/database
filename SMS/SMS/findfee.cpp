#include "findfee.h"
#include "ui_moneyfind.h"
#include <QMessageBox>
#include "mainwindow.h"
#include "globle.h"
#include <QtDebug>
#include "studentform.h"

moneyfind::moneyfind(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::moneyfind)
{
    ui->setupUi(this);
}

moneyfind::~moneyfind()
{
    delete ui;
}

//term_choose_Box     *****************************************

void moneyfind::on_stu_money_queryButton_clicked()
{
    QString term = ui->term_choose_comboBox->currentText();
    //QString id=ui->stu_moneyIDineEdit->text();
    QString id=id_qj;

    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
    db = QSqlDatabase::database("qt_sql_default_connection");
    else
        db=QSqlDatabase::addDatabase("QODBC");
        db.setHostName("localhost");
        db.setDatabaseName("ORCL");
        db.setUserName("eagle");
        db.setPassword("161530301");
    if (!db.open())
    qDebug() << "Failed to connect to root mysql ";
     else qDebug() << "open";


    QSqlQuery query(db);
    db.exec("SET NAMES 'GBK'");

    qDebug()<<id;
   //query.exec("select fee,arrearage from fee where id='"+id+"' and name='"+name+"' and banji='"+banji+"' and major='"+major+"' and term='"+term+"'");
    //query.exec("select fee,arrearage from fee where id = '"+id+"' ");
    query.exec("select fee,arrearage from fee where  id='"+id+"' and term='"+term+"' ");


    if(query.next()){
       qDebug()<<"第一条数据为"<<query.value(0).toString();
        ui->stu_money_feelineEdit->setText(query.value(0).toString());
        ui->stu_money_arrearagelineEdit->setText(query.value(1).toString());



    }
        else
         {
           if(id.compare("")==0||term.compare("")==0)

                     return;

           else   QMessageBox::information(this, "警告", "不存在你所要查找的数据");

         }

}

void moneyfind::on_stu_money_backButton_clicked()
{
    this->hide();
    studentForm *qw=new studentForm;
    qw->show();
}
