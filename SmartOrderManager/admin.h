#ifndef ADMIN_H
#define ADMIN_H

#include <string>
#include <vector>
#include "Personne.h"
#include "Chauffeur.h"
#include "Colis.h"

class Admin : public Personne {
    private:
        int id;
    public:
        Admin();
        Admin(std::string nom, std::string prenom, std::string adresse, int id_admin);
        void nbColisLivres(Chauffeur Chauffeur) const;
        void montantCollecte(Chauffeur Chauffeur) const;
};

#endif // ADMIN_H
