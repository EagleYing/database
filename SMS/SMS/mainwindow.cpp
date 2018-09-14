#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtDebug>
#include<globle.h>
#include "manger.h"
#include<QSqlDriver>
#include<QSqlDatabase>
#include<QDebug>
#include <QTextCodec>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QTextCodec *codec = QTextCodec::codecForName("GBK");
    QTextCodec::setCodecForLocale(codec);
    ui->setupUi(this);
    ui->Login_password->setEchoMode(QLineEdit::Password);
    ui->Login_username->setText("eagle");
    ui->Login_password->setText("eagle");
    ui->radioButton_2->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LoginButton_clicked()
{
        QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");     //此处第2个参数应该是odbc中配置的名称吧,即sql或oracle
        db.setDatabaseName("ORCL");
        db.setUserName("eagle");
        db.setPassword("161530301");

   QString username = ui->Login_username->text();
   QString password = ui->Login_password->text();
   QString id;
   qDebug()<<"用户名："<<username<<"密码:"<<password;
   if (!db.open())
   qDebug() << "Failed to connect to root mysql admin";
    else qDebug() << "open";
   if( ui->radioButton->isChecked()){
       QSqlQuery query(db);
       db.exec("SET NAMES 'GBK'");
       query.exec("select id,username,password from admin");
       bool T1=false;
       while(query.next())
          {
                      QString user = query.value(1).toString();
                      QString pass = query.value(2).toString();
                      qDebug() << user << pass ;
                      if(username.compare(user)==0&&password.compare(pass)==0){
                          password_qj=password;
                          username_qj=username;
                          id_qj=id;
                          T1=true;
                          this->hide();
                          m=new manger;
                          m->show();
                      }
           }


       if(T1==false)
        QMessageBox::information(this, "WARNING", "Incorrect username or password");
}

   if( ui->radioButton_2->isChecked()){
   QSqlQuery query(db);
   db.exec("SET NAMES 'ORCL'");
   query.exec("select id,name,password from student");
   bool T=false;
   while(query.next())
              {
                  QString sid = query.value(0).toString();
                  QString user = query.value(1).toString();
                  QString pass = query.value(2).toString();
                  qDebug() << user << pass ;
                  if(username.compare(sid)==0&&password.compare(pass)==0){
                      password_qj=password;
                      username_qj=sid;
                      id_qj = sid;
                      T=true;
                      this->hide();
                      f=new studentForm;
                      f->show();
                  }
              }
   if(T==false)
    QMessageBox::information(this, "WARNING", "Incorrect username or password");
   }
}

void MainWindow::show2(){
 this->hide();
  f=new studentForm;
  f->show();
}


void MainWindow::on_remitButton_clicked()
{
    ui->Login_username->clear();
    ui->Login_password->clear();
}
