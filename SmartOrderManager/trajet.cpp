#include "Trajet.h"

int Trajet::idTrajet = 0;

Trajet::Trajet(int idChauffeur, const std::string& villeDepart, const std::string& villeArrivee,
               const std::string& horaireDepart, const std::string& horaireArrivee,
               double poids, double prix) :
    idChauffeur(idChauffeur),
    villeDepart(villeDepart),
    villeArrivee(villeArrivee),
    horaireDepart(horaireDepart),
    horaireArrivee(horaireArrivee),
    poids(poids),
    prix(prix),
    status(0)
{
    idTrajet = ++idTrajet;
}

Trajet::~Trajet()
{
}

int Trajet::getIdTrajet() const
{
    return idTrajet;
}

int Trajet::getIdChauffeur() const
{
    return idChauffeur;
}

std::string Trajet::getVilleDepart() const
{
    return villeDepart;
}

std::string Trajet::getVilleArrivee() const
{
    return villeArrivee;
}

std::string Trajet::getHoraireDepart() const
{
    return horaireDepart;
}

std::string Trajet::getHoraireArrivee() const
{
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

