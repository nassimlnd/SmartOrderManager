#ifndef COLIS_H
#define COLIS_H

#include <string>
class Colis
{
public:
    Colis(int id, std::string villeArrivee, std::string dateAjoutColis, int status);
    int getIdColis() const;
    const std::string& getVilleArrivee() const;
    const std::string& getDateAjoutColis() const;
    int getStatus() const;
    void setStatus(int status);

private:
    int idColis;
    std::string villeArrivee;
    std::string dateAjoutColis;
    int status;
};

#endif // COLIS_H
