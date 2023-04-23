#include "chauffeur.h"

int Chauffeur :: nextId=0;
Chauffeur::Chauffeur()
{
    id = ++nextId;
}

Chauffeur::Chauffeur(std::string nom, std::string prenom, std::string adresse) : Personne(nom, prenom,adresse, id)
{
    id = ++nextId;
}

int Chauffeur::getId()
{
    return id;
}

std::vector<Trajet> Chauffeur::gettrajets()
{
    return trajets;
}

void Chauffeur::ajout(Trajet trajet)
{
    trajets.push_back(trajet);
}
void Chauffeur::supprimer(int index)
{
    trajet.erase(trajets.begin()+index);
}

void Chauffeur::modifier(int index, Trajet trajet){
    trajets[index]=trajet;
}
