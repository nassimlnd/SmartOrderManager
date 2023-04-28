#ifndef CHAUFFEUR_H
#define CHAUFFEUR_H

#include <string>
#include <vector>
#include "Trajet.h"
#include "Personne.h"

class Chauffeur : public Personne
{
public:
    Chauffeur(std::string nom, std:: string prenom, std::string adresse);
    int getId();
    std::vector<Trajet> getTrajets();
    void ajout(Trajet trajet);
    void supprimer(int index);
    void modifier(int index, Trajet trajet);
    void writeChauffeur( const Chauffeur& chauffeur);
    QString toString() const;

private:
    int idChauffeur;
    std::vector<Trajet> listeTrajets;
    static int nextId;

};

#endif // CHAUFFEUR_H
