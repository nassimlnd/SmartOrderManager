#include "Chauffeur.h"

int Chauffeur :: nextId=0;

Chauffeur::Chauffeur(std::string nom, std::string prenom, std::string adresse) : Personne(nom, prenom,adresse, id)
{
    id = ++nextId;
}

int Chauffeur::getId()
{
    return id;
}

std::vector<Trajet> Chauffeur::getTrajets()
{
    return listeTrajets;
}

void Chauffeur::ajout(Trajet trajet)
{
    listeTrajets.push_back(trajet);
}
void Chauffeur::supprimer(int index)
{
    listeTrajets.erase(listeTrajets.begin()+index);
}

void Chauffeur::modifier(int index, Trajet trajet){
    listeTrajets[index]=trajet;
}
