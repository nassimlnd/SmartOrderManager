#include "Chauffeur.h"

Chauffeur::Chauffeur() {}

Chauffeur::Chauffeur(std::string nom, std::string prenom, std::string adresse, int id_chauffeur)
    : Personne(nom, prenom, adresse,id), id_chauffeur(id_chauffeur) {}

void Chauffeur::ajouter_trajet(Trajet trajet) {
    trajets_assures.push_back(trajet);
}

void Chauffeur::modifier_trajet(int id_trajet, std::string ville_depart, std::string ville_arrivee, std::string horaire_depart, std::string horaire_arrivee, double poids, double prix, int status) {
    for (int i = 0; i < trajets_assures.size(); i++) {
        if (trajets_assures[i].getIdTrajet() == id_trajet) {
            trajets_assures[i].setVilleDepart(ville_depart);
            trajets_assures[i].setVilleArrivee(ville_arrivee);
            trajets_assures[i].setHoraireDepart(horaire_depart);
            trajets_assures[i].setHoraireArrivee(horaire_arrivee);
            trajets_assures[i].setPoids(poids);
            trajets_assures[i].setPrix(prix);
            trajets_assures[i].setStatus(status);
            return;
        }
    }
}

void Chauffeur::supprimer_trajet(int id_trajet) {
    for (int i = 0; i < trajets_assures.size(); i++) {
        if (trajets_assures[i].getIdTrajet() == id_trajet) {
            trajets_assures.erase(trajets_assures.begin() + i);
            return;
        }
    }
}

std::vector<Trajet> Chauffeur::get_trajets_assures() {
    return trajets_assures;
}
