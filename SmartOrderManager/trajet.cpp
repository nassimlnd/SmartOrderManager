#include "trajet.h"

int Trajet::nextId = 0;

Trajet::Trajet(int idChauf, std::string villeDep, std::string villeArr, std::string horaireDep, std::string horaireArr, double poids, double prix, int status) {
    this->idTrajet = ++nextId;
    this->idChauf = idChauf;
    this->villeDep = villeDep;
    this->villeArr = villeArr;
    this->horaireDep = horaireDep;
    this->horaireArr = horaireArr;
    this->poids = poids;
    this->prix = prix;
    this->status = status;
}

int Trajet::getIdTrajet() const {
    return idTrajet;
}

int Trajet::getIdChauf() const {
    return idChauf;
}

std::string Trajet::getVilleDep() const {
    return villeDep;
}

std::string Trajet::getVilleArr() const {
    return villeArr;
}

std::string Trajet::getHoraireDep() const {
    return horaireDep;
}

std::string Trajet::getHoraireArr() const {
    return horaireArr;
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
