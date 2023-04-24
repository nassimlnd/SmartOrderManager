<<<<<<< HEAD
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
=======
#include "dispatcher.h"
#include "trajet.h"
#include <cstdlib>
#include <iostream>

//int nextId = 0;

Dispatcher::Dispatcher(string nom, string prenom, string adresse, int id) : Personne(nom, prenom,adresse, id)
{
    //id = ++nextId;
    // Revoir le système d'id
}

std::vector<Colis> Dispatcher::getColis()
{
    return listeColis;
}

void Dispatcher::remplir()
{
    int valeur = rand()%10 + 1;
    for (int i =0; i < valeur; i++){
        int idColis = valeur;
        std::string villeArrivee = "Ville" + std::to_string(valeur);
        std::string dateAjoutColis = "date";
        listeColis.push_back(Colis(idColis, villeArrivee, dateAjoutColis, 0));

    }
}

void Dispatcher::dispatch(std::vector<Trajet>& trajets)
{
    for (auto& colis : listeColis) {
        for (auto& trajet : trajets) {
            if (colis.getVilleArrivee() == trajet.getVilleArrivee() && colis.getStatus() == 0 && trajet.getStatus() == 0) {
                colis.setStatus(1);
                trajet.setStatus(1);
                std::cout << "Le colis " << colis.getIdColis() << " a été affecté au trajet " << trajet.getIdTrajet() << "." << std::endl;
                break;
            }
        }
    }
>>>>>>> 974d00d57dcffc21981a9530ee75ff535a6d9335
}
