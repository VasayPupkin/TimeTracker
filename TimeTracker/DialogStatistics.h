#ifndef DIALOGSTATISTICS_H
#define DIALOGSTATISTICS_H

#include <QDialog>

namespace Ui {
class DialogStatistics;
}

class DialogStatistics : public QDialog
{
    Q_OBJECT

public:
    explicit DialogStatistics(QWidget *parent = 0);
    ~DialogStatistics();

private:
    Ui::DialogStatistics *ui;
};

#endif // DIALOGSTATISTICS_H
