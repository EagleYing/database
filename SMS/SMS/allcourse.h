#ifndef ALLCOURSE_H
#define ALLCOURSE_H

#include <QWidget>

namespace Ui {
class allcourse;
}

class allcourse : public QWidget
{
    Q_OBJECT

public:
    explicit allcourse(QWidget *parent = 0);
    ~allcourse();

private slots:
    void on_back_clicked();

private:
    Ui::allcourse *ui;
};

#endif // ALLCOURSE_H
