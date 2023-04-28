#include "admin_interface.h"
#include "ui_admin_interface.h"
#include "admin.h"
#include "Chauffeur.h"
#include <QFile>
#include <fstream>
#include <iostream>
#include <QTextStream>
#include <QPushButton>
#include <string>
#include <QString>
#include <QLineEdit>
Admin_interface::Admin_interface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin_interface),Admin("nom", "prenom", "adresse"),Chauffeur("nom","prenom","adresse")
{
    connect(ui->pushButton,&QPushButton::clicked, this,&Admin_interface::FindByIdInter);
    connect(ui->pushButton,&QPushButton::clicked,this,&Admin_interface::AjouterChauffeur);

    ui->setupUi(this);
}


void Admin_interface::AjouterChauffeur(){
    QString NomChauffeurString = ui-> lineEdit_2->text();
    QString PrenomChauffeurString = ui-> lineEdit_3->text();
    QString AdresseChauffeurString = ui-> lineEdit_3->text();
    std::string NomChauffeur = NomChauffeurString.toStdString();
    std::string PrenomChauffeur = PrenomChauffeurString.toStdString();
    std::string AdresseChauffeur = AdresseChauffeurString.toStdString();
    Chauffeur  Chauffeur(NomChauffeur,PrenomChauffeur,AdresseChauffeur);

}
void Admin_interface::FindByIdInter()
{
        QString idChauffeurString = ui ->lineEdit_Chauff->text();

        // Conversion de la valeur saisie en entier
        int idChauffeur = idChauffeurString.toInt();

        // Appel de la fonction "findbyid" de la classe "Chauffeur"
            //Admin::FindById(idChauffeur);

}
Admin_interface::~Admin_interface()
{
    delete ui;
}
