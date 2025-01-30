#ifndef EDITPOST_H
#define EDITPOST_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class editPost;
}

class editPost : public QDialog
{
    Q_OBJECT

public:
    explicit editPost(string uname , QWidget *parent = nullptr);
    ~editPost();

private slots:
    void on_ok_2_clicked();

    void on_ok_clicked();

private:
    Ui::editPost *ui;
    string uname;
};

#endif // EDITPOST_H
