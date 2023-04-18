#ifndef TRAJET_H
#define TRAJET_H

#include <string>

class Trajet
{
public:
    Trajet();

private:
    int idTrajet;
    int idChauffeur;
    std::string villeDepart;
    std::string villeArrivee;
    std::string horaireDepart;
    std::string horaireArrivee;
    double poids;
    double prix;
    int status;
};

#endif // TRAJET_H
