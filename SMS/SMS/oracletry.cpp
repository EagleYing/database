#include<QSqlDriver>
#include<QSqlDatabase>
#include<QDebug>

int main(){
qDebug()<<"Available drivers:";
QStringList drivers=QSqlDatabase::drivers();
QString driver;
foreach(driver,drivers);
qDebug()<<driver;
return 0;
}
