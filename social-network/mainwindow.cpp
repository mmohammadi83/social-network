#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "showmessages.h"
#include "editprofile.h"
#include <set>
#include <QListView>
#include <QStringListModel>
#include <QStyledItemDelegate>

class CircleImageDelegate : public QStyledItemDelegate
{
public:
    CircleImageDelegate(QObject *parent = nullptr) : QStyledItemDelegate(parent) {}

    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const override
    {
        QPixmap pixmap = index.data(Qt::DecorationRole).value<QPixmap>();

        pixmap = pixmap.scaled(50, 50, Qt::KeepAspectRatio, Qt::SmoothTransformation);

        painter->save();
        painter->setRenderHint(QPainter::Antialiasing);
        QPainterPath path;
        path.addEllipse(0, 0, 50, 50);
        painter->setClipPath(path);
        painter->drawPixmap(0, 0, pixmap);
        painter->restore();
    }
};

MainWindow::MainWindow(std::string uname , QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->uname = uname;
    graph = new Graph;
    DataBase::pushGraph(graph);

    refreshPage();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    editprofile* edit = new editprofile(uname);
    edit->exec();
    delete edit;
    edit = nullptr;
}

double MainWindow::calculateSimilarity(const string &user1, const string &user2)
{
    list<Node*>* followers1 = graph->getFollowers(user1);

    list<Node*>* followers2=graph->getFollowers(user2);
    set<string> commonFollowers;

    for(auto follower:*followers1)
    {
        for(auto follower2:*followers2)
        {
            if(follower->getUName()==follower2->getUName())
            {
                commonFollowers.insert(follower->getUName());
            }
        }
    }

    set<string> totalFollowers;
    for(auto follower:*followers1)
    {
        totalFollowers.insert(follower->getUName());
    }
    for(auto follower:*followers2)
    {
        totalFollowers.insert(follower->getUName());
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
    vector<string> allUsers=DataBase::getAllUsers();
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
        for(int i=0;i<min(6,static_cast<int>(newUsers.size()));i++){
            result->push_back(newUsers[i]);
        }
    }
    else
    {
            for(int i=0;i<min(6,static_cast<int>(suggestions.size()));i++)
        {
            result->push_back((suggestions[i].first));
        }
    }
    return result;
}

void MainWindow::refreshPage()
{
    users user;
    DataBase::setUserFromDB(&user , uname);
    ui->followers->setNum(DataBase::countfollowers(uname));
    ui->following->setNum(DataBase::countfollowing(uname));
    ui->name->setText(QString::fromStdString(user.getName()));
    ui->gmail->setText(QString::fromStdString(user.getgmail()));
    ui->uname->setText(QString::fromStdString(uname));
    ui->age->setNum( user.getage());
    QString path = DataBase::setProfile(uname);
    QPixmap pixmap(path);
    QPixmap roundedPixmap(ui->prof->size());
    roundedPixmap.fill(Qt::transparent);

    QPainter painter(&roundedPixmap);
    painter.setRenderHint(QPainter::Antialiasing);
    QPainterPath path2;
    path2.addEllipse(roundedPixmap.rect());
    painter.setClipPath(path2);
    painter.drawPixmap(0, 0, pixmap.scaled(ui->prof->size(), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation));
    painter.end();

    QIcon buttonIcon(roundedPixmap);

    ui->prof->setIcon(buttonIcon);
    ui->prof->setIconSize(ui->prof->size());
}



void MainWindow::on_prof_clicked()
{
    editprofile* edit = new editprofile(uname);
    edit->exec();
    delete edit;
    edit = nullptr;
    refreshPage();
}

void MainWindow::setImagesInListView()
{
    QListView *listView = ui->listView;

    listView->setViewMode(QListView::IconMode);
    listView->setFlow(QListView::LeftToRight);
    listView->setSpacing(10);
    listView->setFixedHeight(70);

    vector<string>* vimages = suggestUsers(uname);
    QStringList images;
    for(auto& i : *vimages){
        images << DataBase::setProfile(i) ;
    }

    QStringListModel *model = new QStringListModel(images);
    listView->setModel(model);
    listView->setItemDelegate(new CircleImageDelegate);
}




