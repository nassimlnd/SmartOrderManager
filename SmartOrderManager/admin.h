#ifndef ADMIN_H
#define ADMIN_H

#include <string>
#include <vector>
#include "Personne.h"
#include "Chauffeur.h"
#include "Colis.h"

class Admin : public Personne {
    private:
        int idAdmin;
        static int nextId;
    public:
        Admin(std::string nom, std::string prenom, std::string adresse);

        void nbColisLivres(Chauffeur Chauffeur) const;
        void montantCollecte(Chauffeur Chauffeur) const;
        void writeAdmin( const Admin& admin);
        QString toString() const;

};

#endif // ADMIN_H
