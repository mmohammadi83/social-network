#include "editprofil.h"
#include "ui_di.h"

Di::Di(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Di)
{
    ui->setupUi(this);
}

Di::~Di()
{
    delete ui;
}
