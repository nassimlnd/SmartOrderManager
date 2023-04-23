#include "admin.h"

Admin::Admin()
{
    id = 0;
}

void Admin::nbColisLivres(Chauffeur chauffeur)
{
    int nbColis=0;

    for (Trajet trajet : chauffeur.getTrajets()) {
            nbColis += trajet.getNbColisLivres();
        }
     std::cout << "Le chauffeur " << chauffeur.getNom() << " a livre " << nbColis << " colis." << std::endl;
   }
void Admin::montantCollecte(Chauffeur chauffeur) {
    double montant = 0;
    for (Trajet trajet : chauffeur.getTrajets()) {
        montant += trajet.getMontantCollecte();
    }
    std::cout << "Le chauffeur " << chauffeur.getNom() << " a collecte un montant de " << montant << " euros." << std::endl;
}
