#ifndef TRAJET_H
#define TRAJET_H

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

    void setVilleDepart(const std::string& villeDepart);
    void setVilleArrivee(const std::string& villeArrivee);
    void setHoraireDepart(const std::string& horaireDepart);
    void setHoraireArrivee(const std::string& horaireArrivee);
    void setPoids(double poids);
    void setPrix(double prix);
    void setStatus(int status);

private:
    static int idTrajet;
    int m_idTrajet;
    int idChauffeur;
    std::string villeDepart;
    std::string villeArrivee;
    std::string horaireDepart;
    std::string horaireArrivee;
    double poids;
    double prix;
    int status;
};

#endif // TRAJET_H
