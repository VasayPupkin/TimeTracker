#include "Mediator.h"

Mediator::Mediator(QObject *parent) : QObject(parent)
{
    start();
}

void Mediator::run()
{

}

void Mediator::start()
{
    initMembers();
}

void Mediator::initMembers()
{
    mainView = std::unique_ptr<MainView>(new MainView());
}
