#ifndef ADMIN_H
#define ADMIN_H

#include "chauffeur.h"
#include "personne.h"

class Admin : public Personne
{
public:
    Admin();
    void nbColisLivres(Chauffeur chauffeur);
    void montantCollecte(Chauffeur chauffer);
private:
    int id;

};

#endif // ADMIN_H
