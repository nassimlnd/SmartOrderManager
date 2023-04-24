#include "trajet.h"

int nextId = 0;

Trajet::Trajet(int idChauffeur, std::string villeDepart, std::string villeArrivee, std::string horaireDepart, std::string horaireArrivee, double poids, double prix, int status) {
    this->idTrajet = ++nextId;
    this->idChauffeur = idChauffeur;
    this->villeDepart = villeDepart;
    this->villeArrivee = villeArrivee;
    this->horaireDepart = horaireDepart;
    this->horaireArrivee = horaireArrivee;
    this->poids = poids;
    this->prix = prix;
    this->status = status;
}

int Trajet::getIdTrajet() const {
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

double Trajet::getPoids() const {
    return poids;
}

double Trajet::getPrix() const {
    return prix;
}

int Trajet::getStatus() const {
    return status;
}

void Trajet::setStatus(int status) {
    this->status = status;
}
