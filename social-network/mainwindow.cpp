#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "showmessages.h"
#include "editprofile.h"

MainWindow::MainWindow(std::string uname , QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->uname = uname;
    graph = new Graph;
    DataBase::pushGraph(graph);
    users user;
    DataBase::setUserFromDB(&user , uname);
    ui->name->setText(QString::fromStdString(user.getName()));
    ui->gmail->setText(QString::fromStdString(user.getgmail()));
    ui->uname->setText(QString::fromStdString(uname));
    ui->age->setNum( user.getage());


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    editprofile edit(uname);
    edit.exec();
}

double MainWindow::calculateSimilarity(const string &user1, const string &user2)
{
    list<Graph::Node*> followers1=graph->getFollowers(user1);

    list<Graph::Node*> followers2=graph->getFollowers(user2);
    set<string> commonFollowers;
    for(auto folower:followers1)
    {
        for(auto followers2:followers2)
        {
            if(follower->getUsername()==followers2->getUsername())
            {
                commonFollowers.insert(folower->getUsername());
        }
    }
    set<string> totalFollowers;
    for(auto follower:followers1)
    {
        totalFollowers.insert(follower->getUsername());
    }
    for(auto follower:followers2)
    {
        totalFollowers.insert(follower->getUsername());
    }
    if(totalFollowers.size()==0)
    {
        return 0;
    }
    return static_cast<double>(commonFollowers.size())/totalFollowers.size();
}


vector<string>* MainWindow::suggestUsers(string &currentUser)
{
    vector<pair<string,double>> suggestions;
    vector<string> allUsers=graph->getAllUsers();
    for(const string& user:allUsers)
    {
        if(user!=currentUser)
        {
            double similarity=calculateSimilarity(currentUser,user);
            suggestions.push_back({user,similarity});
        }
    }
    sort(suggestions.begin(),suggestions.end(),[](const pair<string,double>& a,const pair<string,double>& b)
    {
        return a.second>b.second;
    });


vector<string>* result=new vector<string>();
if (all_of(suggestions.begin(), suggestions.end(), [](const pair<string, double>& p)
{
    return p.second== 0.0;
})){
    vector<string> newUsers;
    for(const string& user:allUsers){
        if(user!=currentUser){
            newUsers.push_back(user);
        }
    }
    for(int i=0;i<min(6,(int)newUsers.size());i++){
        result->push_back(newUsers[i]);
    }
}
else
{
    for(int i=0;i<min(6,(int)suggestions.size());i++)
{
    result->push_back((suggestions[i].first));
}
}
return result;
}


