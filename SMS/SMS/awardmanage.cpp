#include "awardmanage.h"
#include "ui_awardmanage.h"
#include <QMessageBox>
#include "mainwindow.h"
#include "globle.h"
#include <QtDebug>
#include "manger.h"
awardmanage::awardmanage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::awardmanage)
{
    ui->setupUi(this);
}

awardmanage::~awardmanage()
{
    delete ui;
}

void awardmanage::on_award_querypushButton_clicked()
{
    QString id=ui->award_inputIDlineEdit->text();
    ui->awardlineEdit->clear();
    //ui->timelineEdit->clear();
    QString name;
    QString major;
    QString all;
    QString time=ui->timelineEdit->text();
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


   query.exec("select a.time,a.award,s.name,s.major from award a,student s where a.id='"+id+"' and a.id=s.id and a.time = '"+time+"'");

    if(query.next())
    {
       //qDebug()<<"第一条数据为"<<query.value(0).toString();
        ui->timelineEdit->setText(query.value(0).toString());
        ui->awardlineEdit->setText(query.value(1).toString());
        name=query.value(2).toString();
        major=query.value(3).toString();
        all = "NAME: " + name +"     MAJOR: " + major;
    }
    else
    {
           if(id.compare("")==0)
               return;

           else  QMessageBox::information(this, "警告", "不存在你所要查找的编号");
     }
    ui->textEdit->setPlainText(all);

}

void awardmanage::on_award_addpushButton_clicked()
{
    QString id=ui->award_inputIDlineEdit->text();
    QString award=ui->awardlineEdit->text();
    QString time=ui->timelineEdit->text();

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
    query.exec("select id from award");
    bool T2=true;
    bool T3=false;
    while(query.next())
               {
                   QString id1= query.value(0).toString();
                   if(id.compare(id1)==0)
                   {

                    QMessageBox::information(this ,tr("提示") , tr("该编号已存在不允许再次添加!"));
                      T2=false;
                   }
                 }
    query.exec("select id from student");
    while(query.next())
    {
        QString id2 = query.value(0).toString();
        if(id.compare(id2)==0)
        {
             T3=true;
        }
    }
    if(T3==false)
    {
        QMessageBox::information(this ,tr("提示") , tr("Sno not exit"));
    }
    if(T2==true&&T3==true)
    {
         QString sql;
         sql = QString("insert into award (id,time,award)"
                  " VALUES ('%1', '%2','%3')")
            .arg(id).arg(time).arg(award);


        bool ok = query.exec(sql);
       if(ok)
       {
        db.commit();
        QMessageBox::information(this ,tr("提示") , tr("添加成功!"));
        }
        else
        {
        QMessageBox::information(this ,tr("提示") , tr("添加失败!"));
        }
     }
}

void awardmanage::on_award_deletepushButton_clicked()
{
    QString id=ui->award_inputIDlineEdit->text();
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
        query.exec("select id from student");
    bool T2=true;
    while(query.next())
               {
                   QString id1= query.value(0).toString();
                   if(id.compare(id1)==0)
                  {
                       QString sql;
                       sql = QString("DELETE FROM award "
                                     " where id = '%1' ").arg(id);
                       QSqlQuery query;
                       bool ok = query.exec(sql);
                       if(ok)
                       {
                           db.commit();
                           QMessageBox::information(this ,tr("提示") , tr("删除成功!"));
                           T2=false;
                       }
                       else
                       {
                           QMessageBox::information(this ,tr("提示") , tr("删除失败!"));
                           T2=false;
                       }

                   }
                 }
    if(T2==true)
    {
       QMessageBox::information(this ,tr("提示") , tr("改编号不存在无法删除"));
    }
}

void awardmanage::on_award_updatepushButton_clicked()
{
    QString id=ui->award_inputIDlineEdit->text();
    QString award=ui->awardlineEdit->text();
    QString time=ui->timelineEdit->text();
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
        query.exec("select id from award");
    bool T2=true;
    while(query.next())
               {
                   QString id1= query.value(0).toString();
                   if(id.compare(id1)==0)
                  {
                       QString sql;
                       sql = QString("UPDATE award "
                                     "set time = '%1',award='%2'"
                                     " where id = '%3' ")
                               .arg(time).arg(award).arg(id);
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
                           QMessageBox::information(this ,tr("TIPS") , tr("Fail to Update!"));
                           T2=false;
                       }

                   }
                 }
    if(T2==true)
    {
       QMessageBox::information(this ,tr("WARNING") , tr("Sno noy exit"));
    }
}

void awardmanage::on_award_backpushButton_clicked()
{
    this->hide();
    manger *sy=new manger;
    sy->show();
}
