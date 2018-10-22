#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <memory>

#include <QObject>
#include "MainView.h"

class Mediator : public QObject
{
    Q_OBJECT
public:
    explicit Mediator(QObject *parent = nullptr);

    void run();

signals:

public slots:

private:
    void start();
    void initMembers();

private:
    std::unique_ptr<MainView> mainView;
};

#endif // MEDIATOR_H
