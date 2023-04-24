#include "mainwindow.h"
#include "trajet.h"
#include <QApplication>


int main(int argc, char *argv[])
{
     Trajet test(12, "testVilleDepart", "testVilleD'arrivee", "testHoraireDepart", "testHoraireDepart", 12.0, 35.5, 2);
     Trajet test2(14, "testVilleDepart", "testVilleD'arrivee", "testHoraireDepart", "testHoraireDepart", 17.0, 1005.5, 2);

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();



}
