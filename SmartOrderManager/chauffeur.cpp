#include "Chauffeur.h"

<<<<<<< HEAD
Chauffeur::Chauffeur() {}

Chauffeur::Chauffeur(std::string nom, std::string prenom, std::string adresse, int id_chauffeur)
    : Personne(nom, prenom, adresse,id), id_chauffeur(id_chauffeur) {}

void Chauffeur::ajouter_trajet(Trajet trajet) {
    trajets_assures.push_back(trajet);
}
=======
int Chauffeur :: nextId=0;
>>>>>>> 974d00d57dcffc21981a9530ee75ff535a6d9335

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

<<<<<<< HEAD
std::vector<Trajet> Chauffeur::get_trajets_assures() {
    return trajets_assures;
=======
std::vector<Trajet> Chauffeur::getTrajets()
{
    return listeTrajets;
}

void Chauffeur::ajout(Trajet trajet)
{
    listeTrajets.push_back(trajet);
}
void Chauffeur::supprimer(int index)
{
    listeTrajets.erase(listeTrajets.begin()+index);
}

void Chauffeur::modifier(int index, Trajet trajet){
    listeTrajets[index]=trajet;
>>>>>>> 974d00d57dcffc21981a9530ee75ff535a6d9335
}
