#ifndef CHAUFFEUR_INTERFACE_H
#define CHAUFFEUR_INTERFACE_H

#include <QDialog>

namespace Ui {
class chauffeur_interface;
}

class chauffeur_interface : public QDialog
{
    Q_OBJECT

public:
    explicit chauffeur_interface(QWidget *parent = nullptr);
    ~chauffeur_interface();

private:
    Ui::chauffeur_interface *ui;
};

#endif // CHAUFFEUR_INTERFACE_H
