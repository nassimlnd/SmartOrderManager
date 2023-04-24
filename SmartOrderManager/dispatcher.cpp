#include "Dispatcher.h"
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include "Dispatcher.h"

Dispatcher::Dispatcher(int id, std::string nom, std::string prenom, std::string adresse, int idDispatcher)
    : Personne(nom, prenom, adresse, id), idDispatcher(idDispatcher)
{}

void Dispatcher::remplir() {
    // Création de quelques colis aléatoirement
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
        int nbColis = std::rand() % 10 + 1;
        std::vector<std::string> villesArrivee = {"Paris", "Marseille", "Lyon", "Toulouse", "Nice", "Nantes", "Strasbourg", "Montpellier", "Bordeaux", "Lille"};

        for (int i = 0; i < nbColis; ++i) {
            Colis colis(i + 1, villesArrivee[std::rand() % villesArrivee.size()], "2023-04-25", 0);
            listeColis.push_back(colis);
        }
}

void Dispatcher::dispatch() {
    // Affectation des colis aux trajets
    for (auto& colis : listeColis) {
            if (colis.getStatus() == 1) {
                for (auto& trajet : listeTrajets) {
                    if (colis.getVilleArrivee() == trajet.getVilleArrivee() && colis.getPoids() <= trajet.getPoids() && trajet.getStatus() == 2) {
                        colis.setStatus(2);
                        trajet.setStatus(3);
                        break;
                    }
                }
            }
        }
}

std::vector<Colis> Dispatcher::getListeColis()
{
    return listeColis;
}

std::vector<Trajet> Dispatcher::getListeTrajets()
{
    return listeTrajets;
}
