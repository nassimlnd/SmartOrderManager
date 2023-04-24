#include "Admin.h"

Admin::Admin() : Personne(), id_admin(0) {}

Admin::Admin(std::string nom, std::string prenom, std::string adresse, int id_admin) : Personne(nom, prenom, adresse), id_admin(id_admin) {}

int Admin::get_id_admin() const {
    return id_admin;
}

int Admin::get_nb_colis_livres_chauffeur(int id_chauffeur) const {
    int nb_colis_livres = 0;
    for (const Trajet& trajet : trajets_assures) {
        if (trajet.getIdChauffeur() == id_chauffeur && trajet.getStatus() == 2) {
            for (const Colis& colis : trajet.getColis()) {
                if (colis.getStatus() == 2) {
                    nb_colis_livres++;
                }
            }
        }
    }
    return nb_colis_livres;
}

double Admin::get_somme_argent_collecte_chauffeur(int id_chauffeur) const {
    double somme_argent_collecte = 0;
    for (const Trajet& trajet : trajets_assures) {
        if (trajet.getIdChauffeur() == id_chauffeur && trajet.getStatus() == 2) {
            for (const Colis& colis : trajet.getColis()) {
                if (colis.getStatus() == 2) {
                    somme_argent_collecte += trajet.getPrix() * colis.getPoids();
                }
            }
        }
    }
    return somme_argent_collecte;
}
