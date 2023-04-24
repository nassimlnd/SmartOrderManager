#include "admin.h"
#include <iostream>

Admin::Admin()
{
    id = 0;
}

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
}
