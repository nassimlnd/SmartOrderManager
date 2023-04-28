#include "chauffeur_interface.h"
#include "ui_Chauffeur_interface.h"
#include "chauffeur.h"

Chauffeur_interface::Chauffeur_interface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Chauffeur_interface), Chauffeur("nom", "prenom", "adresse")
{
    ui->setupUi(this);
}

Chauffeur_interface::~Chauffeur_interface()
{
    delete ui;
}
