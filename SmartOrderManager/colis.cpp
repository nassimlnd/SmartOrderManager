#include "Colis.h"

int Colis::idColisCompteur = 0;

Colis::Colis(int idColis,std::string villeArrivee, std::string dateAjoutColis, int status)
    : idColis(++idColisCompteur), villeArrivee(villeArrivee), dateAjoutColis(dateAjoutColis), status(0)
{
}

Colis::~Colis()
{
}

int Colis::getIdColis() const
{
    return idColis;
}

std::string Colis::getVilleArrivee() const
{
    return villeArrivee;
}

void Colis::setVilleArrivee(int villeArrivee)
{
    villeArrivee = villeArrivee;
}

std::string Colis::getDateAjoutColis() const
{
    return dateAjoutColis;
}

void Colis::setDateAjoutColis(std::string dateAjoutColis)
{
    dateAjoutColis = dateAjoutColis;
}

int Colis::getStatus() const
{
    return status;
}

void Colis::setStatus(int status)
{
    status = status;
}

double Colis::getPoids() {
    return poids;
}
