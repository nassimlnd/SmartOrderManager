#include "Trajet.h"
#include <fstream>
#include <iostream>
#include <QFile>
#include  <QTextStream>
#include <QMessageBox>
#include <vector>
int nextIdTrajet = 0;

 std::vector<Trajet> AllTrajet;

Trajet::Trajet(int idChauffeur, std::string villeDepart, std::string villeArrivee, std::string horaireDepart, std::string horaireArrivee, double poids, double prix, int status) {
    this->idTrajet = ++nextIdTrajet;
    this->idChauffeur = idChauffeur;
    this->villeDepart = villeDepart;
    this->villeArrivee = villeArrivee;
    this->horaireDepart = horaireDepart;
    this->horaireArrivee = horaireArrivee;
    this->poids = poids;
    this->prix = prix;
    this->status = status;
    this->nombreColis= nombreColis;
    writeTrajet(*this);
    AllTrajet.push_back(*this);
}

void Trajet::writeTrajet( const Trajet& trajet){
    QFile file("Trajet.txt");
    if(file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)){
        QTextStream ecriture(&file);
        ecriture << trajet.toString() << Qt::endl;
        file.close();
    }else{
        std::cerr << "erreur d'ouverture du fichier Trajet.txt "<< std::endl;
    }
}





void Trajet::modifierTrajet(int idTrajet, const Trajet& trajet){

    for (int i =0; i < AllTrajet.size(); i++ ){
        if (idTrajet == i){
            AllTrajet[i].setVilleArrivee(trajet.getVilleArrivee());
            AllTrajet[i].setVilleDepart(trajet.getVilleDepart());
            AllTrajet[i].setHoraireArrivee(trajet.getHoraireArrivee());
            AllTrajet[i].setHoraireDepart(trajet.getHoraireDepart());
            AllTrajet[i].setStatus(trajet.getStatus());
            AllTrajet[i].setPoids(trajet.getPoids());
            AllTrajet[i].setPrix(trajet.getPrix());

        }
    }


}

std::vector<Trajet> getAllTrajet()  {
   return AllTrajet;
}


int Trajet::getIdTrajet() const{
    return idTrajet;
}

int Trajet::getIdChauffeur() const {
    return idChauffeur;
}

const std::string& Trajet::getVilleDepart() const {
    return villeDepart;
}

const std::string& Trajet::getVilleArrivee() const {
    return villeArrivee;
}

const std::string& Trajet::getHoraireDepart() const {
    return horaireDepart;
}

const std::string& Trajet::getHoraireArrivee() const {
    return horaireArrivee;
}

double Trajet::getPoids() const
{
    return poids;
}

double Trajet::getPrix() const
{
    return prix;
}

int Trajet::getStatus() const
{
    return status;
}

int Trajet::getNombreColis() const {
    return nombreColis;
}

void Trajet::setStatus(int status){
    this->status = status;
}

QString Trajet::toString() const
{
    QString result =  QString::fromStdString(std::to_string(idTrajet) + "|" + std::to_string(idChauffeur) + "|" + villeDepart + "|" + villeArrivee + "|"
                                            + horaireDepart + "|" + horaireArrivee + "|" + std::to_string(poids) + "|" + std::to_string(prix) + "|" + std::to_string(status) + "|"+ std::to_string(nombreColis));
    return result;

}

