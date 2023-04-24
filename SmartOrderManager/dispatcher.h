#ifndef DISPATCHER_H
#define DISPATCHER_H

#include "colis.h"
#include "personne.h"
#include <vector>
#include "Trajet.h"

class Dispatcher : public Personne
{
public:
    Dispatcher(int id,std::string nom, std::string prenom, std::string adresse, int idDispatcher);
    void remplir();
    void dispatch();
    std::vector<Colis> getListeColis();
    std::vector<Trajet> getListeTrajets();
private:
    int idDispatcher;
    std::vector<Colis> listeColis;
    std::vector<Trajet> listeTrajets;

};

#endif // DISPATCHER_H
