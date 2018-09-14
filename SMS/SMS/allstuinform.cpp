#include "allstuinform.h"
#include "ui_allstuinform.h"
#include"globle.h"
#include "studentform.h"
#include<QSqlDriver>
#include<QSqlDatabase>
#include<QDebug>
#include<QSqlQuery>

AllstuInform::AllstuInform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AllstuInform)
{
    //list_all_student.clear();
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
        QString all;
        QSqlQuery query("SET NAMES 'GBK'", db);
        db.exec("SET NAMES 'GBK'");
        query.exec("select id,name,sex,age,major,banji,address,phonenumber,beizhu from student where id='"+id+"'");

        while(query.next())
                   {
                       QStringList q;
                       q.clear();
                       QString id = query.value(0).toString();
                       QString user = query.value(1).toString();
                       QString sex =query.value(2).toString();
                       QString age=query.value(3).toString();
                       QString major=query.value(4).toString();
                       QString banji=query.value(5).toString();
                       QString address=query.value(6).toString();
                       QString phonenumber=query.value(7).toString();
                       QString beizhu=query.value(8).toString();
                       /*q<<id<<user<<sex<<age<<major<<banji<<address<<phonenumber<<beizhu;
                       list_all_student.append(q);*/
                       all = "SNO: " + id+"\n"+ "NAME: " + user+"\n" + "SEX: " + sex + "\n"+ "AGE: " + age + "\n"+ "MAJOR: " + major + "\n"+ "CLASS" + banji +"\n"+ "ADDRESS: " + address + "\n"+ "PHONE: " + phonenumber + "\n"+"REMARK: " + beizhu +"\n";

                  }
    query.exec("select dormnum,roomnum,bednum from dorm where id = '"+id+"' ");
    while(query.next())
    {
        QString dormnum = query.value(0).toString();
        QString roomnum = query.value(1).toString();
        QString bednum = query.value(2).toString();
        all = all + "DORMNUM: " + dormnum + "\n" + "ROOMNUM: " + roomnum + "\n" + "BEDNUM: " + bednum;
    }

    ui->setupUi(this);
    setWindowTitle(QString("EAGLE'S STUDENT MANAGER"));

    ui->textEdit->setPlainText(all);

}

AllstuInform::~AllstuInform()
{
    delete ui;
}

void AllstuInform::on_back_stuButton_clicked()
{
    this->hide();
        //list_all_student.clear();
        //ui->tableWidget->clear();

        studentForm  *f1=new studentForm;

        f1->show();
}
