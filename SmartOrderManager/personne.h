#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>
using namespace std;
class Personne
{
public:
    Personne();
     Personne( string nom, string prenom, string adresse);
     ~Personne();
         std::string getNom();
         //Guetters
         std::string getPrenom();
         std::string getAdresse();
              int getId();
         // Setters
         void setNom(const std::string& nom);
         void setPrenom(const std::string& prenom);
         void setAdresse(const std::string& adresse);
         void setId(const int& ip);
protected :
    string nom;
    string prenom;
    string adresse;
    int id;

};


#endif // PERSONNE_H
