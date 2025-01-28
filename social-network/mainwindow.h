#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "graph.h"
#include "database.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Graph followGraph;

    MainWindow(std::string uname ,QWidget *parent = nullptr);
    ~MainWindow();



    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    int countPosts();
    int countfollowers(Graph* graph , std::string uname);
    int countfollowing(Graph* graph , std::string uname);
};

#endif // MAINWINDOW_H
