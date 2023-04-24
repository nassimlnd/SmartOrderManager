#ifndef COLIS_H
#define COLIS_H

#include <string>
class Colis
{
public:
<<<<<<< HEAD
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
=======
    Colis(int id, std::string villeArrivee, std::string dateAjoutColis, int status);
    int getIdColis() const;
    const std::string& getVilleArrivee() const;
    const std::string& getDateAjoutColis() const;
    int getStatus() const;
    void setStatus(int status);

>>>>>>> 974d00d57dcffc21981a9530ee75ff535a6d9335
private:
    static int idColisCompteur;
     int idColis;
    std::string villeArrivee;
    std::string dateAjoutColis;
    int status;
<<<<<<< HEAD
    double poids;
=======
>>>>>>> 974d00d57dcffc21981a9530ee75ff535a6d9335
};

#endif // COLIS_H
