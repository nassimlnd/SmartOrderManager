#ifndef DISPATCHER_INTERFACE_H
#define DISPATCHER_INTERFACE_H

#include <QDialog>

namespace Ui {
class Dispatcher_interface;
}

class Dispatcher_interface : public QDialog
{
    Q_OBJECT

public:
    explicit Dispatcher_interface(QWidget *parent = nullptr);
    ~Dispatcher_interface();

private:
    Ui::Dispatcher_interface *ui;
};

#endif // DISPATCHER_INTERFACE_H
