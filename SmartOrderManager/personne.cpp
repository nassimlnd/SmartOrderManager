#include "personne.h"

// Constructeur par défaut
Personne::Personne()
{
    nom = "";
    prenom = "";
    adresse = "";
    id = 0;
}

// Constructeur avec paramètres
Personne::Personne(string nom, string prenom, string adresse)
{
    this->nom = nom;
    this->prenom = prenom;
    this->adresse = adresse;
    this->id = id;
}

// Destructeur
Personne::~Personne()
{
    // vide
}

// Guetters
string Personne::getNom()
{
    return nom;
}

string Personne::getPrenom()
{
    return prenom;
}

string Personne::getAdresse()
{
    return adresse;
}

int Personne::getId()
{
    return id;
}

// Setters
void Personne::setNom(const std::string& nom)
{
    this->nom = nom;
}

void Personne::setPrenom(const std::string& prenom)
{
    this->prenom = prenom;
}

void Personne::setAdresse(const std::string& adresse)
{
    this->adresse = adresse;
}

void Personne::setId(const int& id)
{
    this->id = id;
}
