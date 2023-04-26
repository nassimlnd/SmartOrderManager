
#include "dispatcher.h"
#include "trajet.h"
#include <cstdlib>
#include <iostream>
#include <QFile>
#include  <QTextStream>
#include <QMessageBox>

int nextIdDispatcher = 0;


Dispatcher::Dispatcher(string nom, string prenom, string adresse) : Personne(nom, prenom,adresse)
{
    idDispatcher = ++nextIdDispatcher;
     writeDispatcher(*this);
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

void Dispatcher::writeDispatcher( const Dispatcher& dispatcher){
    QFile file("dispatcher.txt");
    if(file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)){
        QTextStream ecriture(&file);
        ecriture << dispatcher.toString() << Qt::endl;
        file.close();
    }else{
        std::cerr << "erreur d'ouverture du fichier chauffeur.txt "<< std::endl;
    }
}

QString Dispatcher::toString() const
{
    QString result =  QString::fromStdString(std::to_string(idDispatcher) + "|" + nom + "|" + prenom + "|" + adresse);
    return result;
}

