#include "chauffeur_interface.h"
#include "ui_chauffeur_interface.h"

chauffeur_interface::chauffeur_interface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chauffeur_interface)
{
    ui->setupUi(this);
}

chauffeur_interface::~chauffeur_interface()
{
    delete ui;
}
