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
    Graph* graph;

    MainWindow(std::string uname ,QWidget *parent = nullptr);
    ~MainWindow();



    void on_pushButton_clicked();

private slots:
    void on_prof_clicked();

private:
    Ui::MainWindow *ui;
    std::string uname;
    int countPosts();
    int countfollowers(Graph* graph , std::string uname);
    int countfollowing(Graph* graph , std::string uname);
    double calculateSimilarity(const string& user1, const string& user2);
    vector<string>* suggestUsers( string& currentUser);
    void refreshPage();
};

#endif // MAINWINDOW_H
