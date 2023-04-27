#ifndef TRAJET_H
#define TRAJET_H

#include <string>
#include <QString>
#include <vector>
#include <string>
class Trajet {
public:

    Trajet(int idChauffeur, std::string villeDepart, std::string villeArrivee, std::string horaireDepart, std::string horaireArrivee, double poids, double prix, int status);
    int getIdTrajet() const;
    int getIdChauffeur() const;
    const std::string& getVilleDepart() const;
    const std::string& getVilleArrivee() const;
    const std::string& getHoraireDepart() const;
    const std::string& getHoraireArrivee() const;
    double getPoids() const;
    double getPrix() const;
    int getStatus() const;
    int getNombreColis()const;



    void setVilleDepart(const std::string& villeDepart);
    void setVilleArrivee(const std::string& villeArrivee);
    void setHoraireDepart(const std::string& horaireDepart);
    void setHoraireArrivee(const std::string& horaireArrivee);
    void setPoids(double poids);
    void setPrix(double prix);
    void setStatus(int status);
    void setNombreColis(int nombreColis);
    QString toString() const;
    void writeTrajet( Trajet& trajet);
    void modifierTrajet(int idTrajet,  Trajet& trajet);
private:
    int idTrajet;
    int idChauffeur;
    std::string villeDepart;
    std::string villeArrivee;
    std::string horaireDepart;
    std::string horaireArrivee;
    double poids;
    double prix;
    int status;
    int nombreColis;

    //ajout du trajet dans le txt au moment ou il est créée.
    //std::string const fileLocation;


};

#endif // TRAJET_H
