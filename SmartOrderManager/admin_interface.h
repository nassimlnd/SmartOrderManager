#ifndef ADMIN_INTERFACE_H
#define ADMIN_INTERFACE_H

#include <QDialog>

namespace Ui {
class Admin_interface;
}

class Admin_interface : public QDialog
{
    Q_OBJECT

public:
    explicit Admin_interface(QWidget *parent = nullptr);
    ~Admin_interface();

private:
    Ui::Admin_interface *ui;
};

#endif // ADMIN_INTERFACE_H
