#include "studentform.h"
#include "ui_studentform.h"
#include "mainwindow.h"
#include "globle.h"
#include  <QtDebug>
#include "allstuinform.h"
#include "findscore.h"
#include "dormfind.h"
#include "findcourse.h"
#include "findaward.h"
#include "findclass.h"
#include "findfee.h"

studentForm::studentForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::studentForm)
{
    ui->setupUi(this);
  QLabel *lab= ui->label_user;
  lab->setStyleSheet("color:#ff6600;");
  lab->setText("USER"+username_qj);
  setWindowTitle(QString("EAGLE'S STUDENT MANAGER"));

}

studentForm::~studentForm()
{
    delete ui;
}

void studentForm::on_pushButton_clicked()
{
    MainWindow *h;
    this->hide();
    h=new MainWindow  ;

    h->show();
}

void studentForm::on_pushButton_3_clicked()
{
    this->hide();
      AllstuInform  *as=new AllstuInform;

      as->show();


}

/*void studentForm::on_pushButton_student_findscore_clicked()
{
    this->hide();
    findscore *ff=new findscore;
    ff->show();
}*/

void studentForm::on_stu_find_dormButton_clicked()
{
    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
    db = QSqlDatabase::database("qt_sql_default_connection");
    else
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("studentmanager");
    db.setUserName(sqluser);
    db.setPassword(sqlpass);
    if (!db.open())
    qDebug() << "Failed to connect to root mysql admin";
    else qDebug() << "open";


    QSqlQuery query(db);
    db.exec("SET NAMES 'GBK'");
    query.exec("select dormnum,id,name,sex,bednum,beizhu from student");

    while(query.next())
               {
                   QStringList q1;
                   q1.clear();
                   QString dormnum = query.value(0).toString();
                   QString id = query.value(1).toString();
                   QString name = query.value(2).toString();
                   QString sex =query.value(3).toString();
                   QString bednum=query.value(4).toString();
                   QString beizhu=query.value(5).toString();

                   q1<<dormnum <<id<<name<<sex<<bednum<<beizhu;
                   list_all_dormstudent.append(q1);

               }

    this->hide();
    dormfind *fd=new dormfind;
    fd->show();

}

void studentForm::on_stu_find_coursebutton_clicked()
{
    this->hide();
    coursefind *fg=new coursefind;
    fg->show();

}

void studentForm::on_stu_award_button_clicked()
{
    this->hide();
    awardfind *fw=new awardfind;
    fw->show();
}

void studentForm::on_stu_findclass_inforButton_clicked()
{
    this->hide();
    findclass *fg=new findclass;
    fg->show();
}

void studentForm::on_stu_query_fee_Button_clicked()
{
    this->hide();
    moneyfind *fe=new moneyfind;
    fe->show();
}
