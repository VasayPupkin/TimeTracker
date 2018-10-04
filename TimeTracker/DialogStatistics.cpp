#include "DialogStatistics.h"
#include "ui_DialogStatistics.h"

DialogStatistics::DialogStatistics(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogStatistics)
{
    ui->setupUi(this);
}

DialogStatistics::~DialogStatistics()
{
    delete ui;
}
