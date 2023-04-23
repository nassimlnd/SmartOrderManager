#ifndef CHAUFFEUR_H
#define CHAUFFEUR_H

#include "personne.h"
#include "trajet.h"
#include <vector>

class Chauffeur : public Personne
{
public:
    Chauffeur(std::string nom, std:: string prenom, std::string adresse);
    int getId();
    std:: vector<Trajet> gettrajets();
    void ajout(Trajet trajet);
    void supprimer(int index);
    void modifier(int index, Trajet trajet);

private:
    int id;
    std::vector<Trajet> listeTrajets;
    static int nextId;
};

#endif // CHAUFFEUR_H
