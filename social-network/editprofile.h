#ifndef EDITPROFILE_H
#define EDITPROFILE_H

#include <QDialog>
#include <QFileDialog>
#include <QFile>
#include <QPixmap>
#include <QIcon>
namespace Ui {
class editprofile;
}

class editprofile : public QDialog
{
    Q_OBJECT

public:
    explicit editprofile(std::string uname , QWidget *parent = 0);
    ~editprofile();

private slots:
    void on_pushButton_clicked();

private:
    Ui::editprofile *ui;
};

#endif // EDITPROFILE_H
