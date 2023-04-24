
#include "dispatcher.h"
#include "trajet.h"
#include <cstdlib>
#include <iostream>

int nextIdDispatcher = 0;


Dispatcher::Dispatcher(string nom, string prenom, string adresse) : Personne(nom, prenom,adresse)
{
    id = ++nextIdDispatcher;
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
        std::string villeArrivee = "Ville" + std::to_string(valeur);
        std::string dateAjoutColis = "date";
        listeColis.push_back(Colis(villeArrivee, dateAjoutColis, 0));

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
}
