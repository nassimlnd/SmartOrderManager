#include "Chauffeur.h"
#include "personne.h"
#include <fstream>
#include <iostream>
#include <QFile>
#include  <QTextStream>
#include <QMessageBox>

int Chauffeur :: nextId=0;

Chauffeur::Chauffeur(std::string nom, std::string prenom, std::string adresse) : Personne(nom, prenom,adresse)
{
    idChauffeur = ++nextId;
    writeChauffeur(*this);
}

int Chauffeur::getId()
{
    return idChauffeur;
}

std::vector<Trajet> Chauffeur::getTrajets()
{
    return listeTrajets;
}

void Chauffeur::ajout(Trajet trajet)
{
    listeTrajets.push_back(trajet);
}
void Chauffeur::supprimer(int index)
{
    listeTrajets.erase(listeTrajets.begin()+index);
}

void Chauffeur::modifier(int index, Trajet trajet){
    listeTrajets[index]=trajet;
}


void Chauffeur::writeChauffeur( const Chauffeur& chauffeur){
    QFile file("chauffeur.txt");
    if(file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)){
        QTextStream ecriture(&file);
        ecriture << chauffeur.toString() << Qt::endl;
        file.close();
    }else{
        std::cerr << "erreur d'ouverture du fichier chauffeur.txt "<< std::endl;
    }
}

QString Chauffeur::toString() const
{
    QString result =  QString::fromStdString(std::to_string(idChauffeur) + "|" + nom + "|" + prenom + "|" + adresse);
    return result;
}
