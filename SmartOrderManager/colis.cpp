#include "Colis.h"

int nextId=0;

Colis::Colis(std::string villeArrivee, std::string dateAjoutColis, int status)
{
    this->idColis = nextId++;
    this->villeArrivee = villeArrivee;
    this->dateAjoutColis = dateAjoutColis;
    this->status = status;
}

int Colis::getIdColis() const {
    return idColis;
}

const std::string& Colis::getVilleArrivee() const {
    return villeArrivee;
}

const std::string& Colis::getDateAjoutColis() const {
    return dateAjoutColis;
}

int Colis::getStatus() const {
    return status;
}

void Colis::setStatus(int status) {
    this->status = status;
}
