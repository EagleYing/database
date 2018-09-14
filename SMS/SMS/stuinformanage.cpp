#include "stuinformanage.h"
#include "ui_stuinformanage.h"
#include <QMessageBox>
#include "mainwindow.h"
#include "globle.h"
#include <QtDebug>
#include "manger.h"
#include "seeallstuinfor.h"
#include <QTextCodec>
#include <QBitArray>

stuinformanage::stuinformanage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::stuinformanage)
{
    ui->setupUi(this);
}

stuinformanage::~stuinformanage()
{
    delete ui;
}

void stuinformanage::on_infor_querypushButton_clicked()
{
    QTextCodec * codec=QTextCodec::codecForName("gbk");

    codec=QTextCodec::codecForName("gb2312");

    QString id=ui->infor_input_IDlineEdit->text();
        ui->infor_outputlineEdit->clear();
        ui->infor_classlineEdit->clear();
        ui->infor_namelineEdit->clear();
        ui->infor_adresslineEdit->clear();
        ui->infor_agelineEdit->clear();
        ui->infor_phonenumlineEdit->clear();
        ui->infor_passwordEdit->clear();

    if(id.compare("")==0)
    QMessageBox::information(this,"warning","sno not exit");

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

    query.exec("select id,name,sex,age,major,banji,address,phonenumber,beizhu,password from student where id='"+id+"'");

    if(query.next())
    {
        ui->infor_outputlineEdit->setText(query.value(0).toString());
        ui->infor_namelineEdit->setText(query.value(1).toString());
        ui->infor_agelineEdit->setText(query.value(3).toString());
        QString sex=query.value(2).toString();
        qDebug()<<sex;
        if(sex=="male"){
            ui->radioButton->setChecked(true);
        }else if(sex=="female"){
            ui->radioButton_2->setChecked(true);
        }

        QString major=query.value(4).toString();
        ui->major_comboBox->setCurrentText(major);
        ui->infor_classlineEdit->setText(query.value(5).toString());
        ui->infor_adresslineEdit->setText(query.value(6).toString());
        ui->infor_phonenumlineEdit->setText(query.value(7).toString());
        ui->infor_passwordEdit->setText(query.value(9).toString());
    }

    else
    {
           if(id.compare("")==0)
               return;
           else  QMessageBox::information(this, "WARNING", "Sno not exit!");
     }
}

void stuinformanage::on_infor_addButton_clicked()
{
    QString id=ui->infor_input_IDlineEdit->text();
    QString name=ui->infor_namelineEdit->text();
    QString banji=ui->infor_classlineEdit->text();
    QString major=ui->major_comboBox->currentText();
    QString sex;
    if(ui->radioButton->isChecked())
    {
        sex="male";
    }else if(ui->radioButton_2->isChecked())
    {
        sex="female";
    }
    QString address=ui->infor_adresslineEdit->text();
    QString age=ui->infor_agelineEdit->text();
    QString phonenumber=ui->infor_phonenumlineEdit->text();
    QString beizhu=ui->comboBox->currentText();
    QString password=ui->infor_passwordEdit->text();
    QString id2=ui->infor_outputlineEdit->text();

    bool T2=true;

    if(id2!=""&&id2.size()!=14){
        QMessageBox::information(this ,tr("WARNING") , tr("Sno's size must be 14!"));
        T2=false;
    }

    if(id2==""){
        QMessageBox::information(this ,tr("WARNING") , tr("Can not be null!"));\
        T2=false;
    }

    if(password.size()!=6){
        QMessageBox::information(this ,tr("WARNING") , tr("Password's size must be 6!"));\
        T2=false;
    }

    if(name==""||major==""||address==""||phonenumber==""){
        QMessageBox::information(this ,tr("WARNING") , tr("Somrthing is null"));\
        T2=false;
    }


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
    while(query.next())
               {
                   QString id1= query.value(0).toString();
                   if(id2.compare(id1)==0)
                   {
                      QMessageBox::information(this ,tr("WARNING") , tr("Exits already!"));
                      T2=false;
                   }
                 }
    if(T2==true)
    {
         QString sql;
         sql = QString("insert into student (id,name,sex,age,major,banji,address,phonenumber,beizhu,password)"
                  " VALUES ('%1', '%2' , '%3','%4','%5','%6','%7','%8','%9','%10' )")
            .arg(id2).arg(name).arg(sex).arg(age).arg(major).arg(banji).arg(address).arg(phonenumber).arg(beizhu).arg(password);


        bool ok = query.exec(sql);
       if(ok)
       {

        QMessageBox::information(this ,tr("TIPS") , tr("Insert success!"));
        db.commit();
      }
      else
      {
        QMessageBox::information(this ,tr("TIPS") , tr("Fail to insert!"));
      }
   }

}

void stuinformanage::on_infor_deletepushButton_clicked()
{
    QString id=ui->infor_input_IDlineEdit->text();
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
        qDebug() << "Failed to connect!";
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
                       QString sql,sql1,sql2,sql3,sql4;
                       sql = QString("DELETE FROM student"
                                     " where student.id = '%1' ").arg(id);
                       sql1 = QString("DELETE FROM score"
                                      " where score.id = '%1' ").arg(id);
                       sql2 = QString("DELETE FROM dorm"
                                       " where dorm.id = '%1' ").arg(id);
                       sql3 = QString("DELETE FROM fee"
                                       " where fee.id = '%1' ").arg(id);
                       sql4 = QString("DELETE FROM award"
                                      " where award.id = '%1' ").arg(id);
                       QSqlQuery query;
                       bool ok = query.exec(sql);
                       bool ok2 = query.exec(sql1);
                       qDebug()<<ok2;
                       if(ok)
                       {
                           QMessageBox::information(this ,tr("TIPS") , tr("Delete success!"));
                           T2=false;
                       }
                       else
                       {
                           QMessageBox::information(this ,tr("TIPS") , tr("Fail ti delete!"));
                           T2=false;
                       }

                   }
                 }
    if(T2==true)
    {

       QMessageBox::information(this ,tr("WARNING") , tr("Not exits!"));


    }
}

void stuinformanage::on_infor_updatepushButton_clicked()
{
    QString id=ui->infor_input_IDlineEdit->text();
    QString banji=ui->infor_classlineEdit->text();
    QString name=ui->infor_namelineEdit->text();
    QString major=ui->major_comboBox->currentText();
    QString sex;
    if(ui->radioButton->isChecked())
    {
       sex="male";
    }else if(ui->radioButton_2->isChecked())
    {
        sex="female";
    }
    QString address=ui->infor_adresslineEdit->text();
    QString age=ui->infor_agelineEdit->text();
    QString phonenumber=ui->infor_phonenumlineEdit->text();
    QString beizhu=ui->comboBox->currentText();
    QString password=ui->infor_passwordEdit->text();
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
        db.exec("SET NAMES GBK");
        query.exec("select id from student");
    bool T2=true;
    while(query.next())
               {
                   QString id1= query.value(0).toString();


                   if(id.compare(id1)==0)
                  {
                       QString sql;
                       sql = QString("UPDATE student "
                                     "set name = '%0',banji = '%1',major='%2',sex='%3',address='%4',age='%5',phonenumber='%6',beizhu='%7',password='%8'"
                                     " where id = '%9' ")
                               .arg(name).arg(banji).arg(major).arg(sex).arg(address).arg(age).arg(phonenumber).arg(beizhu).arg(password).arg(id);


                       QSqlQuery query;
                       bool ok = query.exec(sql);
                       if(ok)
                       {

                           QMessageBox::information(this ,tr("提示") , tr("更改成功!"));
                           T2=false;
                           db.commit();
                       }
                       else
                       {
                           QMessageBox::information(this ,tr("提示") , tr("更改失败!"));
                           T2=false;
                       }

                   }
                 }
    if(T2==true)
    {

       QMessageBox::information(this ,tr("Warning") , tr("Sno not exit"));
    }
    db.exec("SET NAMES UTF8");
}

void stuinformanage::on_infor_backpushButton_clicked()
{
    this->hide();
    manger *dg=new manger;
    dg->show();
}

void stuinformanage::on_infor_see_inforpushButton_clicked()
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


    QSqlQuery query(db);
    db.exec("SET NAMES 'GBK'");
    query.exec("select id,name,sex,age,major,banji,address,phonenumber,beizhu from student");

    while(query.next())
               {
                   QStringList q;
                   q.clear();
                  QString id = query.value(0).toString();
                   QString user = query.value(1).toString();
                   QString pass = query.value(2).toString();
                   QString sex =query.value(3).toString();
                   QString age=query.value(4).toString();
                   QString major=query.value(5).toString();
                   QString banji=query.value(6).toString();
                   QString address=query.value(7).toString();
                     QString phonenumber=query.value(8).toString();
                      QString beizhu=query.value(9).toString();
                      q<<id<<user<<pass<<sex<<age<<major<<banji<<address<<phonenumber<<beizhu;
                      list_all_student.append(q);




              }


      for(int i=0;i<list_all_student.size();i++){
          qDebug()<<list_all_student[i];

      }



    this->hide();
    seeallstuinfor *rt=new seeallstuinfor;
    rt->show();
}
