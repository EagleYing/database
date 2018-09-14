#include "scoremanage.h"
#include "ui_scoremanage.h"
#include <QMessageBox>
#include "mainwindow.h"
#include "globle.h"
#include <QtDebug>
#include "manger.h"
scoremanage::scoremanage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::scoremanage)
{
    ui->setupUi(this);
}

scoremanage::~scoremanage()
{
    delete ui;
}

void scoremanage::on_score_querypushButton_clicked()
{
    QString id=ui->score_IDlineEdit->text();
    QString object=ui->score_objectlineEdit->text();
    ui->score_teacherlineEdit->clear();
    ui->score_scorelineEdit->clear();
    if(id.compare("")==0||object.compare("")==0)
    QMessageBox::information(this, "WARNING", "Insufficient query conditions!");

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
  qDebug()<<":"<<id<<":"<<object;

   query.exec("select sc.id,sc.object,s.name,sc.score from student s,score sc where sc.id='"+id+"' and sc.object='"+object+"' and sc.id=s.id");

    if(query.next()){
       qDebug()<<"第一条数据为"<<query.value(0).toString();
        ui->score_IDlineEdit->setText(query.value(0).toString());
        ui->score_objectlineEdit->setText(query.value(1).toString());
        ui->score_teacherlineEdit->setText(query.value(2).toString());
        ui->score_scorelineEdit->setText(query.value(3).toString());
    }
        else
         {
           if(id.compare("")==0||object.compare("")==0)
                     return;
           else   QMessageBox::information(this, "WARNING", "No data exits!");
         }
}

void scoremanage::on_asc_Button_clicked()
{
    list_all_course.clear();
    QString courseid=ui->courseid_lineEdit->text();

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
    query.exec("select st.id,st.banji,st.name,s.score,s.object from score s,student st where s.courseid='"+courseid+"' and st.id=s.id order by s.score asc");
    while(query.next())
               {
                   QStringList q;
                   q.clear();

                   QString sno = query.value(0).toString();
                   QString banji = query.value(1).toString();
                   QString name =query.value(2).toString();
                   QString score = query.value(3).toString();

                   q<<sno<<banji<<name<<score;
                   list_all_course.append(q);

              }

      for(int i=0;i<list_all_course.size();i++){
          qDebug()<<list_all_course[i];

      }
      ui->tableWidget->setRowCount(0);

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

}

void scoremanage::on_desc_Button_clicked()
{
    list_all_course.clear();
    QString courseid=ui->courseid_lineEdit->text();

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
    query.exec("select st.id,st.banji,st.name,s.score,s.object from score s,student st where s.courseid='"+courseid+"' and st.id=s.id order by s.score desc");
    while(query.next())
               {
                   QStringList q;
                   q.clear();

                   QString sno = query.value(0).toString();
                   QString banji = query.value(1).toString();
                   QString name =query.value(2).toString();
                   QString score = query.value(3).toString();

                   q<<sno<<banji<<name<<score;
                   list_all_course.append(q);

              }

      for(int i=0;i<list_all_course.size();i++){
          qDebug()<<list_all_course[i];

      }
      ui->tableWidget->setRowCount(0);

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
}

void scoremanage::on_score_upadtepushButton_clicked()
{
    QString id=ui->score_IDlineEdit->text();
    QString object=ui->score_objectlineEdit->text();
    QString score=ui->score_scorelineEdit->text();
    QString teacher=ui->score_teacherlineEdit->text();
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
        query.exec("select id,object from score");
    bool T2=true;
    while(query.next())
               {
                   QString id1= query.value(0).toString();
                   QString object1= query.value(1).toString();


                   if(id.compare(id1)==0&&object.compare(object1)==0)
                  {
                       QString sql;
                       sql = QString("UPDATE score "
                                     "set  score= '%0'"
                                     " where id='"+id+"' and object='"+object+"' ")
                               .arg(score);



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

       QMessageBox::information(this ,tr("WARNING") , tr("ID not exits!"));


    }
}

void scoremanage::on_show_all_scoreButton_clicked()
{
    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    //ui->tableWidget->clearContents();
    list_all_course.clear();
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

    QString courseid = ui->courseid_lineEdit->text();
    QString object;
    qDebug()<<courseid;
    QSqlQuery query(db);
    db.exec("SET NAMES 'GBK'");
    query.exec("select st.id,st.banji,st.name,s.score,s.object from score s,student st where s.courseid='"+courseid+"' and st.id=s.id");

    while(query.next())
               {
                   QStringList q;
                   q.clear();

                   QString sno = query.value(0).toString();
                   QString banji = query.value(1).toString();
                   QString name =query.value(2).toString();
                   QString score = query.value(3).toString();
                   object = query.value(4).toString();

                   q<<sno<<banji<<name<<score;
                   list_all_course.append(q);

              }

      ui->score_objectlineEdit->setText(object);
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

}

void scoremanage::on_score_backpushButton_clicked()
{
    this->hide();
    manger *yh=new manger;
    yh->show();
}
