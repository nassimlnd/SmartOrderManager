#ifndef DISPATCHER_H
#define DISPATCHER_H

#include "colis.h"
#include "personne.h"
#include <vector>

class Dispatcher : public Personne
{
public:
    Dispatcher();
    void remplir();
    void dispatch();
private:
    int id;
    std::vector<Colis> listeColis;
};

#endif // DISPATCHER_H
