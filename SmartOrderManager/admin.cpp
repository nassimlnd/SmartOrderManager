<<<<<<< HEAD
#include "Admin.h"
=======
#include "admin.h"
#include <iostream>
>>>>>>> 974d00d57dcffc21981a9530ee75ff535a6d9335

Admin::Admin() : Personne(), id_admin(0) {}

Admin::Admin(std::string nom, std::string prenom, std::string adresse, int id_admin) : Personne(nom, prenom, adresse), id_admin(id_admin) {}

int Admin::get_id_admin() const {
    return id_admin;
}

<<<<<<< HEAD
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
=======
void Admin::nbColisLivres(Chauffeur chauffeur)
{
    /*int nbColis=0;

    for (Trajet trajet : chauffeur.getTrajets()) {
        nbColis += trajet.getNbColisLivres();
    }
    std::cout << "Le chauffeur " << chauffeur.getNom() << " a livre " << nbColis << " colis." << std::endl;*/

    // Ajouter le nombre de colis présents dans un trajet et le récupérer pour chaque trajet associé au chauffeur pour récupérer le nombre de colis total livrés par le chauffeur.
}
void Admin::montantCollecte(Chauffeur chauffeur) {
    /*double montant = 0;
    for (Trajet trajet : chauffeur.getTrajets()) {
        montant += trajet.getMontantCollecte();
    }
    std::cout << "Le chauffeur " << chauffeur.getNom() << " a collecte un montant de " << montant << " euros." << std::endl;*/

    // Revoir cette fonction, peut-être pas utile/pas possible à réaliser car manque le prix etc..
    // Voir si l'on peut pas ajouter d'autres statistiques à la place de celle-ci.
>>>>>>> 974d00d57dcffc21981a9530ee75ff535a6d9335
}
