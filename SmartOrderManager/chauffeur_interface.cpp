#include "chauffeur_interface.h"
#include "ui_chauffeur_interface.h"
#include "chauffeur.h"

Chauffeur_interface::Chauffeur_interface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Chauffeur_interface), Chauffeur("nom", "prenom", "adresse")
{
    ui->setupUi(this);
    connect(ui->pushButton_modifier_chauffeur,&QPushButton::clicked, this,&MainWindow::ModifierChauffeur);

}
void Chauffeur_interface::ModifierChauffeur(){
    QString NomChauffeur = ;
    ui->lineEdit->setText(NomChauffeur);
    QString PrenomomChauffeur = ; //remplir avec les information de la connexion du Chauffeur
    ui->lineEdit_2->setText(PrenomomChauffeur);
    QString AdresseChauffeur = ;
    ui->lineEdit_3->setText(AdresseChauffeur);
}

Chauffeur_interface::~Chauffeur_interface()
{
    delete ui;
}
