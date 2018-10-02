#include "MainView.h"
#include "ui_MainView.h"

MainView::MainView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainView)
{
    ui->setupUi(this);
}

MainView::~MainView()
{
    delete ui;
}

void MainView::on_pBtn_hasCome_clicked()
{
    emit hasCome();
}

void MainView::on_pBtn_gone_clicked()
{
    emit gone();
}

void MainView::on_timeEdit_hasCome_userTimeChanged(const QTime &time)
{

}

void MainView::on_dateEdit_hasCome_userDateChanged(const QDate &date)
{

}

void MainView::on_timeEdit_gone_userTimeChanged(const QTime &time)
{

}

void MainView::on_dateEdit_gone_userDateChanged(const QDate &date)
{

}
