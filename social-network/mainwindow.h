#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "graph.h"
#include "database.h"
#include <QListWidgetItem>
#include "profile.h"
#include "editprofile.h"
#include <set>
#include <QListView>
#include <QStringListModel>
#include <QStyledItemDelegate>
#include "login.h"
#include <QHBoxLayout>
#include "followers.h"
#include "followings.h"
#include "editpost.h"

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

    void on_postButton_clicked();

private:
    Ui::MainWindow *ui;
    std::string uname;
    double calculateSimilarity(const string& user1, const string& user2);
    vector<string> suggestUsers( string& currentUser);
    void setupProfilePics();
    void refreshPage();

    void loginfunc();
};

#endif // MAINWINDOW_H
