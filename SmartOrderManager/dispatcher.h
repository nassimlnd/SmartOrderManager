#ifndef DISPATCHER_H
#define DISPATCHER_H

#include "colis.h"
#include "personne.h"
#include "trajet.h"
#include <vector>
#include "Trajet.h"

class Dispatcher : public Personne
{
public:
<<<<<<< HEAD
    Dispatcher(int id,std::string nom, std::string prenom, std::string adresse, int idDispatcher);
    void remplir();
    void dispatch();
    std::vector<Colis> getListeColis();
    std::vector<Trajet> getListeTrajets();
=======
    Dispatcher(string nom, string prenom, string adresse, int id);
    void remplir();
    void dispatch(std::vector<Trajet>& trajets);
    std::vector<Colis> getColis();

>>>>>>> 974d00d57dcffc21981a9530ee75ff535a6d9335
private:
    int idDispatcher;
    std::vector<Colis> listeColis;
    std::vector<Trajet> listeTrajets;

};

#endif // DISPATCHER_H
