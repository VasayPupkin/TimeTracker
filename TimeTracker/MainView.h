#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QMainWindow>

namespace Ui {
class MainView;
}

class MainView : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainView(QWidget *parent = 0);
    ~MainView();

signals:
    void hasCome();
    void gone();

private slots:
    void on_pBtn_hasCome_clicked();

    void on_pBtn_gone_clicked();

    void on_timeEdit_hasCome_userTimeChanged(const QTime &time);

    void on_dateEdit_hasCome_userDateChanged(const QDate &date);

    void on_timeEdit_gone_userTimeChanged(const QTime &time);

    void on_dateEdit_gone_userDateChanged(const QDate &date);

private:
    Ui::MainView *ui;
};

#endif // MAINVIEW_H
