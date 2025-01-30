#ifndef FOLLOWERS_H
#define FOLLOWERS_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class followers;
}

class followers : public QDialog
{
    Q_OBJECT

public:
    explicit followers(Graph* graph , string uname , QWidget *parent = nullptr);
    ~followers();


private slots:
    void on_ok_clicked();

private:
    Ui::followers *ui;
    void widgetListView();
    void profilePicClicked(QListWidgetItem *item);
    string uname;
    Graph* graph;
};

#endif // FOLLOWERS_H
