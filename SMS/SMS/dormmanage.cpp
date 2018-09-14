#include "dormmanage.h"
#include "ui_dormmanage.h"
#include <QMessageBox>
#include "mainwindow.h"
#include "globle.h"
#include <QtDebug>
#include "alldorminfor.h"
dormmanage::dormmanage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dormmanage)
{
    ui->setupUi(this);
}

dormmanage::~dormmanage()
{
    delete ui;
}

void dormmanage::on_dorm_queryButton_clicked()
{
    QString id=ui->dorm_inputlineEdit->text();
    QString name;
    QString sex;
    QString all;
        ui->dormnum_lineEdit->clear();
        ui->dorm_roomnum_numlineEdit->clear();
        ui->dorm_bednumlineEdit->clear();

    if(id.compare("")==0)
    QMessageBox::information(this,"WARNING","Please input sno");

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
    qDebug() << "Failed to connect to root mysql admin";
     else qDebug() << "open";


    QSqlQuery query(db);
    db.exec("SET NAMES 'GBK'");


   query.exec("select d.dormnum,d.roomnum,d.bednum,s.name,s.sex from dorm d,student s where d.id='"+id+"' and s.id=d.id");



    if(query.next())
    {
       qDebug()<<"第一条数据为"<<query.value(0).toString();
        ui->dormnum_lineEdit->setText(query.value(0).toString());
        ui->dorm_roomnum_numlineEdit->setText(query.value(1).toString());
          ui->dorm_bednumlineEdit->setText(query.value(2).toString());
          name=query.value(3).toString();
          sex=query.value(4).toString();
          all="NAME: "+name+"    SEX: " + sex;
    }

    else
    {
           if(id.compare("")==0)
               return;

           else  QMessageBox::information(this, "警告", "不存在你所要查找的编号");
     }
    ui->textEdit->setPlainText(all);
}

void dormmanage::on_dorm_addButton_clicked()
{
    QString id=ui->dorm_inputlineEdit->text();
    QString dormnum=ui->dormnum_lineEdit->text();
    QString roomnum=ui->dorm_roomnum_numlineEdit->text();
    QString bednum=ui->dorm_bednumlineEdit->text();



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
    qDebug() << "Failed to connect to root mysql admin";
     else qDebug() << "open";


    QSqlQuery query(db);
    db.exec("SET NAMES 'GBK'");
    query.exec("select id from dorm");
    bool T2=true;
    bool T3=false;
    while(query.next())
               {
                   QString id1= query.value(0).toString();

                  if(id.compare(id1)==0)
                   {
                    QMessageBox::information(this ,tr("WARNING") , tr("Sno already exits!"));
                      T2=false;
                   }
                 }
    query.exec("select id from student");
    while(query.next())
    {
        QString id2=query.value(0).toString();
        if(id.compare(id2)==0)
        {
            T3=true;
        }
    }
    if(T3==false)
    {
        QMessageBox::information(this ,tr("WARNING") , tr("Sno not exits!"));
    }
    if(T2==true&&T3==true)
    {
         QString sql;
         sql = QString("insert into dorm (id,dormnum,roomnum,bednum)"
                  " VALUES ('%0','%1', '%2' , '%3')")
            .arg(id).arg(dormnum).arg(roomnum).arg(bednum);


        bool ok = query.exec(sql);
       if(ok)
       {
        db.commit();
        QMessageBox::information(this ,tr("TIPS") , tr("SUCCESS!"));
      }
      else
      {
        QMessageBox::information(this ,tr("TIPS") , tr("FAIL!"));
      }
   }
}

void dormmanage::on_dorm_deleteButton_clicked()
{
    QString id=ui->dorm_inputlineEdit->text();

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
        qDebug() << "Failed to connect to root mysql admin";
         else qDebug() << "open";



        QSqlQuery query(db);
        db.exec("SET NAMES 'GBK'");
        query.exec("select id from dorm");
    bool T2=true;
    while(query.next())
               {
                   QString id1= query.value(0).toString();


                   if(id.compare(id1)==0)
                  {
                       QString sql;
                       sql = QString("DELETE FROM dorm "
                                     " where id = '%1' ").arg(id);

                       QSqlQuery query;
                       bool ok = query.exec(sql);
                       if(ok)
                       {
                           db.commit();
                           QMessageBox::information(this ,tr("TIPS") , tr("Delete success!"));
                           T2=false;
                       }
                       else
                       {
                           QMessageBox::information(this ,tr("TIPS") , tr("Fail to delete!"));
                           T2=false;
                       }

                   }
                 }
    if(T2==true)
    {
       QMessageBox::information(this ,tr("WARNING") , tr("Sno not exit!"));
    }
}

void dormmanage::on_updateButton_clicked()
{
    QString id=ui->dorm_inputlineEdit->text();
    QString dormnum=ui->dormnum_lineEdit->text();
    QString roomnum=ui->dorm_roomnum_numlineEdit->text();
    QString bednum=ui->dorm_bednumlineEdit->text();
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
        qDebug() << "Failed to connect to root mysql admin";
         else qDebug() << "open";



        QSqlQuery query(db);
        db.exec("SET NAMES 'GBK'");
        query.exec("select id from dorm");
    bool T2=true;
    while(query.next())
               {
                   QString id1= query.value(0).toString();


                   if(id.compare(id1)==0)
                  {
                       QString sql;
                       qDebug()<<"update here";
                       sql = QString("UPDATE dorm "
                                     "set  dormnum= '%0',roomnum = '%1', bednum='%2' "
                                     " where id = '%3' ")
                               .arg(dormnum).arg(roomnum).arg(bednum).arg(id);


                       QSqlQuery query;
                       bool ok = query.exec(sql);
                       if(ok)
                       {
                           db.commit();
                           QMessageBox::information(this ,tr("TIPS") , tr("Update success!"));
                           T2=false;
                       }
                       else
                       {
                           QMessageBox::information(this ,tr("TIPS") , tr("Fail to update!"));
                           T2=false;
                       }

                   }
                 }
    if(T2==true)
    {

       QMessageBox::information(this ,tr("WARNING") , tr("Sno not exit"));


    }
}

void dormmanage::on_dorm_backButton_clicked()
{
    this->hide();
    manger *lk=new manger;
    lk->show();
}

void dormmanage::on_see_all_dorm_Button_clicked()
{
    list_all_dormstudent.clear();
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
    qDebug() << "Failed to connect to root mysql admin";
     else qDebug() << "open";


    QSqlQuery query(db);
    db.exec("SET NAMES 'GBK'");
    query.exec("select d.id,s.name,s.sex,d.dormnum,d.roomnum,d.bednum from dorm d,student s where d.id=s.id");

    while(query.next())
               {
                   QStringList q1;
                   q1.clear();
                   qDebug()<<"show all here";
                   QString id = query.value(0).toString();
                   QString name = query.value(1).toString();
                   QString sex =query.value(2).toString();
                   QString dormnum = query.value(3).toString();
                   QString roomnum = query.value(4).toString();
                   QString bednum=query.value(5).toString();

                      q1<<id<<name<<sex<<dormnum<<roomnum<<bednum;
                      list_all_dormstudent.append(q1);
                    }

    this->hide();
    seedorminfor *ol=new seedorminfor;
    ol->show();
}
