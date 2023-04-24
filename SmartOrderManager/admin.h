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
<<<<<<< HEAD
        Admin(std::string nom, std::string prenom, std::string adresse, int id);
        void nbColisLivres(Chauffeur Chauffeur) ;
        void montantCollecte(Chauffeur Chauffeur) ;
=======
        Admin(std::string nom, std::string prenom, std::string adresse, int id_admin);
        void nbColisLivres(Chauffeur Chauffeur) const;
        void montantCollecte(Chauffeur Chauffeur) const;
        void nbColisLivres(Chauffeur chauffeur);
        void montantCollecte(Chauffeur chauffeur);

>>>>>>> d5e00ac1d50a3e672160f8d39c9150d9a17504ce
};

#endif // ADMIN_H
