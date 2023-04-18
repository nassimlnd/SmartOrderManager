#ifndef COLIS_H
#define COLIS_H

#include <string>
class Colis
{
public:
    Colis();

private:
    int idColis;
    std::string villeArrivee;
    std::string dateAjoutColis;
    int status;

};

#endif // COLIS_H
