#include <string>
#include "Trajet.h"
#include <fstream>
#include <iostream>
#include <QFile>
#include  <QTextStream>
#include <QMessageBox>
#include <vector>
#include <sstream>
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

void Trajet::writeTrajet(  Trajet& trajet){
    QFile file("Trajet.txt");
    if(file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)){
        QTextStream ecriture(&file);
        ecriture << trajet.toString() << Qt::endl;
        file.close();
    }else{
        std::cerr << "erreur d'ouverture du fichier Trajet.txt "<< std::endl;
    }
}


void Trajet::modifierTrajet(int idTrajet,  Trajet& trajet){
/*
    QFile file("Trajet.txt");
    QFile file2("tempo.txt");
    std::vector<Trajet> ligneTrajet;
    std::string ligne;
    std::string villeDepart, villeArrivee, horaireDepart, horaireArrivee;
    int idChauffeur;
    double poids, prix;
    if (file.open(QIODevice::ReadWrite|QIODevice::Text))
    {
        QTextStream lecture(&file);
        QString montext = lecture.readAll();

        while (!lecture.atEnd()) {
            ligne = lecture.readLine().toStdString();

        }
        std::stringstream ss(ligne);

        int status;
                       idChauffeur = std::stoi (ss.str());
                       getline(ss, villeDepart, '|');
                       getline(ss, villeArrivee, '|');
                       getline(ss, horaireDepart, '|');
                       getline(ss, horaireArrivee, '|');
                       poids = std::stod(ss.str());
                       prix = std::stod(ss.str());
                       status = std::stoi (ss.str());
         for (int i = 0; i<AllTrajet.size();i++){

            Trajet t(idChauffeur,villeDepart,villeArrivee,horaireDepart,horaireArrivee,poids,prix,status);
             ligneTrajet.push_back(t);
         }

    }
    if(file2.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)){
        QTextStream ecriture(&file2);
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

            for(const Trajet& t : ligneTrajet){
                std::string idChauffeur = std::to_string(t.idChauffeur);
                std::string status = std::to_string(t.status);
                std::string poids = std::to_string(t.poids);
                std::string prix = std::to_string(t.prix);

                std::string ligneT = std::to_string(t.idChauffeur) + "|" + t.villeDepart + "|" + t.villeArrivee + "|" + t.horaireDepart + "|" + t.horaireArrivee + "|" + std::to_string(t.poids) + "|" + std::to_string(t.prix) + "|" + std::to_string(t.status);

                ecriture << ligneT<< endl;

            }
    }

    file.close();
    file2.close();
    remove("Trajet.txt");
    rename("tempo.txt","Trajet.txt");
    */
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

void Trajet::setVilleArrivee(const std::string& villeArrivee) {
    this->villeArrivee = villeArrivee;
}

void Trajet::setVilleDepart(const std::string& villeDepart) {
    this->villeDepart = villeDepart;
}


void Trajet::setHoraireArrivee(const std::string& horaireArrivee) {
    this->horaireArrivee = horaireArrivee;
}
void Trajet::setNombreColis(int nombreColis) {
    this->nombreColis = nombreColis;
}
void Trajet::setHoraireDepart(const std::string& horaireDepart) {
    this->horaireDepart = horaireDepart;
}
void Trajet::setPoids(double poids){
    this->poids = poids;
}
void Trajet::setPrix(double prix){
    this->prix = prix;
}
QString Trajet::toString() const
{
    QString result =  QString::fromStdString(std::to_string(idTrajet) + "|" + std::to_string(idChauffeur) + "|" + villeDepart + "|" + villeArrivee + "|"
                                            + horaireDepart + "|" + horaireArrivee + "|" + std::to_string(poids) + "|" + std::to_string(prix) + "|" + std::to_string(status) + "|"+ std::to_string(nombreColis));
    return result;
}

