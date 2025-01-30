#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "graph.h"
#include "database.h"
#include <QListWidgetItem>
#include "profile.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Graph* graph;

    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();




private slots:
    void on_prof_clicked();
    void profilePicClicked(QListWidgetItem* item);



    void on_followersbutton_clicked();

    void on_followingbutton_clicked();

    void on_logOut_clicked();

    void on_exit_clicked();

private:
    Ui::MainWindow *ui;
    std::string uname;
    int countPosts();
    void setImagesInListView();
    double calculateSimilarity(const string& user1, const string& user2);
    vector<string> suggestUsers( string& currentUser);
    void refreshPage();
    void setupProfilePics();
    bool* IC;
    void loginfunc();
};

#endif // MAINWINDOW_H
