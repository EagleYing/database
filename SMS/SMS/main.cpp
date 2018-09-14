#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));
    QFont f("Consolas",12);
    a.setFont(f);

        QFile file(":/qss/psblack.css");
        if (file.open(QFile::ReadOnly)) {
            QString qss = QLatin1String(file.readAll());
            QString paletteColor = qss.mid(20, 7);
            qApp->setPalette(QPalette(QColor(paletteColor)));
            qApp->setStyleSheet(qss);
            file.close();
        }
    MainWindow w;
    w.show();

    return a.exec();
}
