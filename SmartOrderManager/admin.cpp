#include "personne.h"
#include "admin.h"
#include <iostream>
#include <fstream>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include "Chauffeur.h"

int Admin :: nextId=0;

Admin::Admin(std::string nom, std::string prenom, std::string adresse): Personne(nom, prenom,adresse) {
    idAdmin = ++nextId;
    //writeAdmin(*this);
}



void Admin::nbColisLivres(Chauffeur Chauffeur) const
{
    int nombreColis=0;

    for (Trajet trajet : Chauffeur.getTrajets()) {
        nombreColis += trajet.getNombreColis();
    }
    std::cout << "Le chauffeur " << Chauffeur.getNom() << " a livre " << nombreColis << " colis." << std::endl;

    //Ajouter le nombre de colis présents dans un trajet // FAIT
    //le récupérer pour chaque trajet associé au chauffeur pour récupérer le nombre de colis total livrés par le chauffeur.
}

/*void Admin::montantCollecte(Chauffeur chauffeur) {
    /*double montant = 0;
    for (Trajet trajet : chauffeur.getTrajets()) {
        montant += trajet.getMontantCollecte();
    }
    std::cout << "Le chauffeur " << chauffeur.getNom() << " a collecte un montant de " << montant << " euros." << std::endl;*/

    // Revoir cette fonction, peut-être pas utile/pas possible à réaliser car manque le prix etc..
    // Voir si l'on peut pas ajouter d'autres statistiques à la place de celle-ci.
//}

void Admin::writeAdmin(const Admin& admin){
    QFile file("Admin.txt");
    if(file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)){
        QTextStream ecriture(&file);
        ecriture << admin.toString() << Qt::endl;
        file.close();
    }else{
        std::cerr << "erreur d'ouverture du fichier chauffeur.txt "<< std::endl;
    }
}

/*void Admin::FindById(int idChauffeur) const{
    for (int i =0; i < getListeChauffeur().size();i++){
        if(idChauffeur == i)
            break;
    }
}*/

QString Admin::toString() const
{
    QString result =  QString::fromStdString(std::to_string(idAdmin) + "|" + nom + "|" + prenom + "|" + adresse);
    return result;
}
