#include "findaward.h"
#include "ui_awardfind.h"
#include <QMessageBox>
#include "mainwindow.h"
#include "globle.h"
#include <QtDebug>
#include "studentform.h"
awardfind::awardfind(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::awardfind)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
}

awardfind::~awardfind()
{
    delete ui;
}

void awardfind::on_stu_award_querypushButton_clicked()
{
    //QString id=ui->stu_award_Input_IDlineEdit->text();
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    list_all_course.clear();
    QString id = id_qj;
    qDebug()<<"HERE"<<id;
    if(id.compare("")==0)
    QMessageBox::information(this,"","");

    QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");
    db.setHostName("localhost");
    db.setDatabaseName("ORCL");
    db.setUserName("eagle");
    db.setPassword("161530301");
    if (!db.open())
    qDebug() << "Failed to connect to root mysql admin";
     else qDebug() << "open";

    qDebug()<<"ID"<<id;
    QSqlQuery query(db);
    db.exec("SET NAMES 'GBK'");


   query.exec("select time,award from award where id='"+id+"'");



   while(query.next())
              {
                  QStringList q;
                  q.clear();

                  QString time = query.value(0).toString();
                  QString award = query.value(1).toString();

                  q<<time<<award;
                  list_all_course.append(q);

             }


     for(int i=0;i<list_all_course.size();i++){
         qDebug()<<list_all_course[i];

     }

     for(int i1=0;i1<list_all_course.size();i1++){

     int row = ui->tableWidget->rowCount();

     ui->tableWidget->insertRow(row);
     QStringList rowdata=list_all_course[i1].toStringList();

     for(int i  = 0 ; i <rowdata.size() ; i++)
     {
         QTableWidgetItem *item = new QTableWidgetItem;
         item->setText(rowdata.at(i));
         ui->tableWidget->setItem(row , i , item);
     }

     }

    /*else{
           if(id.compare("")==0)
               return;

           else  QMessageBox::information(this, "警告", "不存在你所要查找的学号");
         }*/

}

void awardfind::on_stu_award_backpushButton_clicked()
{
    this->hide();
    studentForm *sr=new studentForm;
    sr->show();
}
