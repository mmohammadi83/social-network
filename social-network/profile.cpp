#include "profile.h"
#include "ui_profile.h"

profile::profile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::profile)
{
    ui->setupUi(this);
}

profile::~profile()
{
    delete ui;
}
