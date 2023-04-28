#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QFile>
#include <QMainWindow>
#include <Qstring>
#include "admin_interface.h"
#include "chauffeur_interface.h"
#include "dispatcher_interface.h"
#include "personne.h"
#include "Chauffeur.h"
#include "Admin.h"
#include "Dispatcher.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void connexion_action();

private:
    Ui::MainWindow *ui;
    Admin_interface *admin_interface;
    Chauffeur_interface *chauffeur_interface;
    Dispatcher_interface *dispatcher_interface;
    Personne *adresse = new Personne();
   /* Admin *adresseAdmin = new Admin();
    Dispatcher *adresseDispatcher = new Dispatcher();
    Chauffeur *adresseChauffeur = new Chauffeur();
    */

};
#endif // MAINWINDOW_H
