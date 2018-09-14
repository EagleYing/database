#include "findcourse.h"
#include "ui_coursefind.h"
#include <QMessageBox>
#include "mainwindow.h"
#include "globle.h"
#include <QtDebug>
#include "studentform.h"
#include "allcourse.h"

coursefind::coursefind(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::coursefind)
{
    ui->setupUi(this);
    setWindowTitle(QString("EAGLE"));
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

    QString id;
    id = id_qj;

    QSqlQuery query("SET NAMES 'GBK'", db);
    db.exec("SET NAMES 'GBK'");
    query.exec("select sc.object, sc.score, c.teacher from score sc, course c where sc.id = '"+id+"' and sc.object = c.object ");

    while(query.next())
               {
                   QStringList q;
                   q.clear();

                   QString object = query.value(0).toString();
                   QString score = query.value(1).toString();
                   QString teacher =query.value(2).toString();

                   q<<object<<teacher<<score;
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

}

coursefind::~coursefind()
{
    delete ui;
}

void coursefind::on_stu_query_courseButton_clicked()
{
    QString id=ui->stu_course_IDlineEdit->text();//id is courseid


    if(id.compare("")==0)
    QMessageBox::information(this, "WARNING", "Plwase input course num!");

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


   query.exec("select object,teacher,coursetime,courseaddress,period,credit from course where id='"+id+"'");



    if(query.next()){
       qDebug()<<"第一条数据为"<<query.value(0).toString();
        ui->stu_course_namelineEdit->setText(query.value(0).toString());
        ui->stu_teacher_namelineEdit->setText(query.value(1).toString());
        ui->stu_course_timelineEdit->setText(query.value(2).toString());
        ui->stu_course_addresslineEdit->setText(query.value(3).toString());
        ui->stu_course_periodlineEdit->setText(query.value(4).toString());
        ui->stu_course_creditlineEdit->setText(query.value(5).toString());



    }

    else{
           if(id.compare("")==0)
               return;

           else  QMessageBox::information(this,"WARNING","Not exits!");
      }

}

void coursefind::on_stu_course_backButton_clicked()
{
    this->hide();
    studentForm *st=new studentForm;
    st->show();
}

void coursefind::on_show_all_courseButton_clicked()
{
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

    QString id;
    id = id_qj;

    QSqlQuery query("SET NAMES 'GBK'", db);
    db.exec("SET NAMES 'GBK'");
    query.exec("select id,object,teacher,coursetime,courseaddress,period,credit from course");

    while(query.next())
               {
                   QStringList q;
                   q.clear();
                   QString id = query.value(0).toString();
                   QString object = query.value(1).toString();
                   QString teacher = query.value(2).toString();
                   QString coursetime =query.value(3).toString();
                   QString courseaddress=query.value(4).toString();
                   QString period=query.value(5).toString();
                   QString credit=query.value(6).toString();
                   q<<id<<object<<teacher<<coursetime<<courseaddress<<period<<credit;
                   list_all_course.append(q);

              }


      for(int i=0;i<list_all_course.size();i++){
          qDebug()<<list_all_course[i];

      }

      this->hide();
      allcourse  *as=new allcourse;

      as->show();
}

void coursefind::on_choose_clicked()
{
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

    QString id;
    id = id_qj;
    QString object = ui->stu_course_namelineEdit->text();
    //QString time = ui->stu_course_timelineEdit->text();
    //QString teacher = ui->stu_teacher_namelineEdit->text();
    QString score = "unrated";
    QString courseid=ui->stu_course_IDlineEdit->text();

    qDebug()<<object;
    qDebug()<<id;

    QSqlQuery query("SET NAMES 'GBK'",db);
    query.exec("select object from score where id = '"+id+"' ");
    bool T2=true;
    while(query.next())
               {
                   qDebug()<<"here"<<query.value(0).toString();
                   QString id1= query.value(0).toString();

                   if(object.compare(id1)==0)
                   {
                      QMessageBox::information(this ,tr("WARNING") , tr("Exits already!"));
                      T2=false;
                   }
                 }
    if(T2==true)
    {
        qDebug()<<"insert";
         QString sql;
         sql = QString("insert into score (id,object,courseid,score)"
                  " VALUES ('%1', '%2' , '%3','%4')")
            .arg(id).arg(object).arg(courseid).arg(score);
        bool ok = query.exec(sql);
       if(ok)
       {
         db.commit();
        QMessageBox::information(this ,tr("TIPS") , tr("Success!Back and check"));
      }
      else
      {
        QMessageBox::information(this ,tr("TIPS") , tr("Fail!"));
      }
   }
}

void coursefind::on_drop_courseButton_clicked()
{
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

    QString id;
    id = id_qj;

    QString object = ui->stu_course_namelineEdit->text();
    QString courseid=ui->stu_course_IDlineEdit->text();
    QString id1;
    QString courseid1;

    qDebug()<<object;
    qDebug()<<id;

    QSqlQuery query("SET NAMES 'GBK'",db);
    query.exec("select object,courseid,score from score where id = '"+id+"' and object = '"+object+"' and courseid='"+courseid+"' ");
    bool T2=true;
    while(query.next())
               {
                   qDebug()<<"here"<<query.value(0).toString();
                   QString score = query.value(2).toString();
                   qDebug()<<score;
                   id1= query.value(0).toString();
                   courseid1=query.value(1).toString();
                   if(score!="unrated")
                   {
                      QMessageBox::information(this ,tr("WARNING") , tr("Rated!"));
                      T2=false;
                   }
                 }
    if(T2==true&&object.compare(id1)==0&&courseid.compare(courseid1)==0)
    {
        qDebug()<<"delete";
         QString sql;
         sql = QString("delete from score"
                  " where id = '"+id+"' and object = '"+object+"' and courseid='"+courseid+"' ");
        bool ok = query.exec(sql);
       if(ok)
       {
         db.commit();
        QMessageBox::information(this ,tr("TIPS") , tr("Success!Back and chack"));
      }
      else
      {
        QMessageBox::information(this ,tr("WARNING") , tr("Fail!"));
      }
   }
}
