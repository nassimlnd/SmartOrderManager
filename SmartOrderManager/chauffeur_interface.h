#ifndef CHAUFFEUR_INTERFACE_H
#define CHAUFFEUR_INTERFACE_H

#include <QDialog>

namespace Ui {
class Chauffeur_interface;
}

class Chauffeur_interface : public QDialog
{
    Q_OBJECT

public:
    explicit Chauffeur_interface(QWidget *parent = nullptr);
    ~Chauffeur_interface();

private:
    Ui::Chauffeur_interface *ui;
};

#endif // CHAUFFEUR_INTERFACE_H
