#ifndef ADMIN_H
#define ADMIN_H

#include <string>
#include <vector>
#include "Personne.h"
#include "Chauffeur.h"
#include "Colis.h"

class Admin : public Personne {
    private:
        int id_admin;
    public:
        Admin();
        Admin(std::string nom, std::string prenom, std::string adresse, int id_admin);
        int get_id_admin() const;
        int get_nb_colis_livres_chauffeur(int id_chauffeur) const;
        double get_somme_argent_collecte_chauffeur(int id_chauffeur) const;
};

#endif // ADMIN_H
