
#include "colis.h"

Colis::Colis(int id, std::string villeArrivee, std::string dateAjoutColis, int status)
{
    this->idColis = id;
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
