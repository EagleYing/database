#ifndef SCOREMANAGE_H
#define SCOREMANAGE_H

#include <QWidget>

namespace Ui {
class scoremanage;
}

class scoremanage : public QWidget
{
    Q_OBJECT

public:
    explicit scoremanage(QWidget *parent = 0);
    ~scoremanage();

private slots:
    void on_score_querypushButton_clicked();

    void on_asc_Button_clicked();

    void on_desc_Button_clicked();

    void on_score_upadtepushButton_clicked();

    void on_score_backpushButton_clicked();
    void on_show_all_scoreButton_clicked();

private:
    Ui::scoremanage *ui;
};

#endif // SCOREMANAGE_H
