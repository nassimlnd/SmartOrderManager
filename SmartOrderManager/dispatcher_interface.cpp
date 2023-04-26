#include "dispatcher_interface.h"
#include "ui_dispatcher_interface.h"

Dispatcher_interface::Dispatcher_interface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dispatcher_interface)
{
    ui->setupUi(this);
}

Dispatcher_interface::~Dispatcher_interface()
{
    delete ui;
}
