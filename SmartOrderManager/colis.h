#ifndef COLIS_H
#define COLIS_H

#include <string>
class Colis
{
public:
    Colis(int idColis, std::string villeArrivee, std::string dateAjoutColis, int status);
        virtual ~Colis();
    int getIdColis() const;
    std::string getVilleArrivee() const;
    void setVilleArrivee(int villeArrivee);
    std::string getDateAjoutColis() const;
    void setDateAjoutColis(std::string dateAjoutColis);
    int getStatus() const;
    void setStatus(int status);
    double getPoids();
private:
    static int idColisCompteur;
     int idColis;
    std::string villeArrivee;
    std::string dateAjoutColis;
    int status;
    double poids;
};

#endif // COLIS_H
