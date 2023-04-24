#ifndef CHAUFFEUR_H
#define CHAUFFEUR_H

#include <string>
#include <vector>
#include "Trajet.h"
#include "Personne.h"

class Chauffeur : public Personne {
    private:
        int id_chauffeur;
        std::vector<Trajet> trajets_assures;
    public:
        Chauffeur();
        Chauffeur(std::string nom, std::string prenom, std::string adresse, int id_chauffeur);
        void ajouter_trajet(Trajet trajet);
        void modifier_trajet(int id_trajet, std::string ville_depart, std::string ville_arrivee, std::string horaire_depart, std::string horaire_arrivee, double poids, double prix, int status);
        void supprimer_trajet(int id_trajet);
        std::vector<Trajet> get_trajets_assures();
};

#endif // CHAUFFEUR_H
