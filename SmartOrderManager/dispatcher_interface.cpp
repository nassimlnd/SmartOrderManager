#include "dispatcher_interface.h"
#include "ui_dispatcher_interface.h"
#include "Dispatcher.h"
Dispatcher_interface::Dispatcher_interface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dispatcher_interface), Dispatcher("nom", "prenom", "adresse")

{
    ui->setupUi(this);
}

Dispatcher_interface::~Dispatcher_interface()
{
    delete ui;
}
