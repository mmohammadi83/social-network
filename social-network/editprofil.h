#ifndef DI_H
#define DI_H

#include <QDialog>

namespace Ui {
class Di;
}

class Di : public QDialog
{
    Q_OBJECT

public:
    explicit Di(QWidget *parent = 0);
    ~Di();

private:
    Ui::Di *ui;
};

#endif // DI_H
