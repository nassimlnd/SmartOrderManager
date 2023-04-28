#ifndef ADMIN_INTERFACE_H
#define ADMIN_INTERFACE_H
#include "admin.h"
#include <QDialog>
#include <QLineEdit>

namespace Ui {
class Admin_interface;
}

class Admin_interface : public QDialog, public Admin,public Chauffeur
{
    Q_OBJECT

public:
    explicit Admin_interface(QWidget *parent = nullptr);
    ~Admin_interface();
    void FindByIdInter();
    void AjouterChauffeur();

private:
    Ui::Admin_interface *ui;

};

#endif // ADMIN_INTERFACE_H
