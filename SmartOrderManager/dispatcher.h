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

    Dispatcher(string nom, string prenom, string adresse);
    void remplir();
    void dispatch(std::vector<Trajet>& trajets);
    std::vector<Colis> getColis();
    void writeDispatcher( const Dispatcher& dispatcher);
    QString toString() const;
private:
    int idDispatcher;
    std::vector<Colis> listeColis;

};

#endif // DISPATCHER_H
