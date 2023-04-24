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
        Admin(std::string nom, std::string prenom, std::string adresse, int id);
        void nbColisLivres(Chauffeur Chauffeur) ;
        void montantCollecte(Chauffeur Chauffeur) ;
};

#endif // ADMIN_H
