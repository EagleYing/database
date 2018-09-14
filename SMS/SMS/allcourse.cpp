#include "allcourse.h"
#include "ui_allcourse.h"
#include <QDebug.h>
#include "globle.h"
#include "findcourse.h"

allcourse::allcourse(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::allcourse)
{
    ui->setupUi(this);
    setWindowTitle(QString("EAGLE'S STUDENT MANAGER"));

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

allcourse::~allcourse()
{
    delete ui;
}

void allcourse::on_back_clicked()
{
    this->hide();
        list_all_course.clear();
        ui->tableWidget->clear();

        coursefind  *f1=new coursefind;

        f1->show();
}
