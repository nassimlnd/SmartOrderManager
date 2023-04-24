#ifndef DISPATCHER_H
#define DISPATCHER_H

#include "colis.h"
#include "personne.h"
#include "trajet.h"
#include <vector>

class Dispatcher : public Personne
{
public:
    Dispatcher(string nom, string prenom, string adresse, int id);
    void remplir();
    void dispatch(std::vector<Trajet>& trajets);
    std::vector<Colis> getColis();

private:
    int id;
    std::vector<Colis> listeColis;
};

#endif // DISPATCHER_H
