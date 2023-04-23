#include "dispatcher.h"

int Dispatcher::nextId=0;
Dispatcher::Dispatcher()
{
    id = ++nextId;
}

Dispatcher::Dispatcher(int id, ) : Personne(nom, prenom,adresse, id)
{
    id = ++nextId;
}

std::vector<Colis> Dispatcher::getcolis()
{
    return coli;
}
void Dispatcher::remplir(Colis colis)
{
    for (int i =0; i<Math.random();i++){
        Colis colis = new Colis;
        coli.push_back(colis);

    }

}

void Dispatcher::dispatch(Colis colis)
{
    coli.push_back(colis);
}
