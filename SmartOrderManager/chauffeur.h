#ifndef CHAUFFEUR_H
#define CHAUFFEUR_H

#include "personne.h"
#include "trajet.h"
#include <vector>

class Chauffeur : public Personne
{
public:
    Chauffeur();
    void ajout();
    void supprimer();
    void modifier();

private:
    int id;
    std::vector<Trajet> listeTrajets;
};

#endif // CHAUFFEUR_H
