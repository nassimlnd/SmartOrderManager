#include "mainwindow.h"
#include "trajet.h"
#include <QApplication>
#include <iostream>
#include "chauffeur.h"
#include "Dispatcher.h"
#include "Admin.h"



int main(int argc, char *argv[])
{

     Trajet test(12, "testVilleDepart", "testVilleD'arrivee", "testHoraireDepart", "testHoraireDepart", 12.0, 35.5, 2);
     Trajet test2(14, "testVilleDepart", "testVilleD'arrivee", "testHoraireDepart", "testHoraireDepart", 17.0, 1005.5, 2);
     Trajet testmodifier3(12,"fegfergg","erggegr","ersfgssrgb","sdqgsdggsg",13.0,34.2,6);
     Chauffeur chauffeur1("BUREAU", "Didier", "DidierBUREAU@gmail.com");
     Dispatcher dispatcher1("NERON","Martin","MartinNERON@gmail.com");
     Admin admin1("LOUNADI", "Nassim","NassimLOUNADI@gmail.com");
       test.modifierTrajet(1,testmodifier3);

     std::cout <<test.getHoraireArrivee();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();



}
