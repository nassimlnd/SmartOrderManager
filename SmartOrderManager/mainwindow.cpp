#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFile>
#include <fstream>
#include <iostream>
#include  <QTextStream>
#include <QPushButton>
#include <string>
#include <Qstring>
#include <QLineEdit>
#include "chauffeur_interface.h"
#include "admin_interface.h"
#include "dispatcher_interface.h"
#include "personne.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),admin_interface(new Admin_interface),chauffeur_interface(new Chauffeur_interface), dispatcher_interface(new Dispatcher_interface)//, adresseChauffeur(new Chauffeur),adresseAdmin(new Admin), adresseDispatcher( new Dispatcher)
{
    ui->setupUi(this);
    connect(ui->actionQuitter,&QAction::triggered,this,&MainWindow::close); //bouton pour quitter la fenetre

    connect(ui->pushButton,&QPushButton::clicked, this,&MainWindow::connexion_action);


}

void MainWindow::connexion_action()
{
    //ecrit le mail de la personne qui se connecte dans un fichier texte
      QString adresse = ui ->lineEdit_pseudo-> text();
    QFile file ("Connexion.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream ecriture(&file);
        ecriture<<"Mon login : " +adresse;

        file.close();
    }

   //si la personne qui se connecte est un admin
    //if (adresse == adresseAdmin)
   // {
        //admin_interface->open();
   // }
        //si la personne qui se connecte est un dispatcher
     //  else if(){
        dispatcher_interface->open();
    //}
        //si la personne qui se connecte est un chauffeur
   /* else ()
    chauffeur_interface->open();
    */


}
MainWindow::~MainWindow()
{
    delete ui;
}

