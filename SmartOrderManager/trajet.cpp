#include "Trajet.h"

<<<<<<< HEAD
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
=======
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
>>>>>>> 974d00d57dcffc21981a9530ee75ff535a6d9335
}

Trajet::~Trajet()
{
}

int Trajet::getIdTrajet() const
{
    return idTrajet;
}

<<<<<<< HEAD
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
=======
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
>>>>>>> 974d00d57dcffc21981a9530ee75ff535a6d9335
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

