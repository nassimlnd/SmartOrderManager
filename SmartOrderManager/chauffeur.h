#ifndef CHAUFFEUR_H
#define CHAUFFEUR_H

#include <string>
#include <vector>
#include "Trajet.h"
#include "Personne.h"

<<<<<<< HEAD
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
=======
class Chauffeur : public Personne
{
public:
    Chauffeur(std::string nom, std:: string prenom, std::string adresse);
    int getId();
    std::vector<Trajet> getTrajets();
    void ajout(Trajet trajet);
    void supprimer(int index);
    void modifier(int index, Trajet trajet);

private:
    int id;
    std::vector<Trajet> listeTrajets;
    static int nextId;
>>>>>>> 974d00d57dcffc21981a9530ee75ff535a6d9335
};

#endif // CHAUFFEUR_H
