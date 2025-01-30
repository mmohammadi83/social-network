#ifndef FOLLOWINGS_H
#define FOLLOWINGS_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class followings;
}

class followings : public QDialog
{
    Q_OBJECT

public:
    explicit followings(Graph* graph , string uname , QWidget *parent = nullptr);
    ~followings();

private slots:
    void on_ok_clicked();

private:
    Ui::followings *ui;
    void profilePicClicked(QListWidgetItem *item);
    void widgetListView();
    string uname;
    Graph* graph;
};

#endif // FOLLOWINGS_H
