#include "alldorminfor.h"
#include "ui_seedorminfor.h"
#include "globle.h"
#include "dormmanage.h"
#include <QDebug.h>
seedorminfor::seedorminfor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::seedorminfor)
{

    ui->setupUi(this);
    setWindowTitle(QString("EAGLE'S STUDENT MANAGER"));
    for(int i1=0;i1<list_all_dormstudent.size();i1++)
    {

    int row = ui->tableWidget->rowCount();

    ui->tableWidget->insertRow(row);
    QStringList rowdata=list_all_dormstudent[i1].toStringList();

    for(int i  = 0 ; i <rowdata .size() ; i++)
    {
        QTableWidgetItem *item = new QTableWidgetItem;
        item->setText(rowdata.at(i));
        ui->tableWidget->setItem(row , i , item);
    }
    qDebug()<<"ALL STUDETS";

}



}

seedorminfor::~seedorminfor()
{
    delete ui;
}

void seedorminfor::on_backButton_clicked()
{
    list_all_dormstudent.clear();
     ui->tableWidget->clear();
    this->hide();

    dormmanage *vb=new dormmanage;
    vb->show();
}
