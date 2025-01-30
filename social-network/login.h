#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(std::string* uname , QWidget *parent = nullptr);
    ~login();


private slots:
    void on_loginB_clicked();

    void on_signupB_clicked();

private:
    Ui::login *ui;
    std::string* uname;
};

#endif // LOGIN_H
