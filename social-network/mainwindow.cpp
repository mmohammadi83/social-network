#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "showmessages.h"



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->graph = new Graph;
    DataBase::pushGraph(graph);


    loginfunc();


    refreshPage();
    setupProfilePics();
}

MainWindow::~MainWindow()
{

    delete ui;
}

void MainWindow::loginfunc()
{
    login log(&uname);
    log.exec();
}


double MainWindow::calculateSimilarity(const string &user1, const string &user2)
{
    list<Node*>* followers1 = graph->getFollowers(user1);
    if (followers1 == nullptr || followers1->empty()) {
            qDebug() << "Followers1 is empty or null";
            return 0;
        }
    list<Node*>* followers2 = graph->getFollowers(user2);
    if (followers2 == nullptr || followers2->empty()) {
            qDebug() << "Followers2 is empty or null";
            return 0;
        }
    set<string> commonFollowers;
    for(auto follower:*followers1)
    {
        for(auto follower2:*followers2)
        {
            qDebug() << "4" << QString::fromStdString( follower->getUName()) << QString::fromStdString( follower2->getUName());
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
    for(auto follower2:*followers2)
    {
        totalFollowers.insert(follower2->getUName());
    }
    if(totalFollowers.empty())
    {
        return 0;
    }
    return static_cast<double>(commonFollowers.size())/totalFollowers.size();

}


vector<string> MainWindow::suggestUsers(string &currentUser)
{
    vector<pair<string,double>> suggestions;
    vector<string> allUsers=DataBase::getAllUsers();

    for(const string& user:allUsers)
    {
        if(user!=currentUser)
        {
            double similarity=calculateSimilarity(currentUser,user);
            if(similarity != 0.0)
            suggestions.push_back({user,similarity});
        }
    }
    sort(suggestions.begin(),suggestions.end(),[](const pair<string,double>& a,const pair<string,double>& b)
    {
        return a.second>b.second;
    });

    vector<string> result;
        if (suggestions.size() == 0) {
            vector<string> newUsers;
            for (const string& user : allUsers) {
                if (user != currentUser) {
                    newUsers.push_back(user);
                }
            }
            for (int i = 0; i < min(6, static_cast<int>(newUsers.size())); i++) {
                result.push_back(newUsers[i]);
            }
        } else {
            for (int i = 0; i < min(6, static_cast<int>(suggestions.size())); i++) {
                result.push_back((suggestions[i].first));
            }
        }
        qDebug() << "size" << result.size();
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



void MainWindow::setupProfilePics()
{
    QListWidget* listWidget = ui->listWidget;
    if (!listWidget) {
        qDebug() << "ListWidget is null!";
        return;
    }

    disconnect(listWidget, &QListWidget::itemClicked, this, &MainWindow::profilePicClicked);
    listWidget->clear();

    vector<string> vusers = suggestUsers(uname);
    std::vector<QString> imagePaths;
    for (auto& i : vusers) {
        //QString qstr = QString::fromStdString(i);
        //listWidget->addItem(qstr);
        QString path = DataBase::setProfile(i);
        if (!QFile::exists(path)) {
            qDebug() << "Image path does not exist:" << path;
            continue;
        }
        imagePaths.push_back(path);
    }
    int maxItems = 6;
    int itemsToShow = std::min(maxItems, static_cast<int>(imagePaths.size()));

    for (int i = 0; i < itemsToShow; ++i)
    {
        const QString& path = imagePaths[i];
        QPixmap pixmap(path);
        if (pixmap.isNull()) {
            qDebug() << "Failed to load image from path:" << path;
            continue;
        }
        pixmap.scaled(QSize(80, 80), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);
        QPixmap roundedPixmap(QSize(80, 80));
        roundedPixmap.fill(Qt::transparent);

        QPainter painter(&roundedPixmap);
        painter.setRenderHint(QPainter::Antialiasing);
        QPainterPath path2;
        path2.addEllipse(roundedPixmap.rect());
        painter.setClipPath(path2);
        painter.drawPixmap(0, 0, pixmap.scaled(QSize(80, 80), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation));
        painter.end();

        QWidget* customWidget = new QWidget;
        QHBoxLayout* layout = new QHBoxLayout(customWidget);
        layout->setContentsMargins(0, 0, 0, 0);

        QLabel* labelImage = new QLabel;
        labelImage->setPixmap(roundedPixmap);
        labelImage->setFixedSize(80, 80);

        QLabel* labelUsername = new QLabel;
        labelUsername->setText(QString::fromStdString(vusers[i]));
        labelUsername->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

        QFont font = labelUsername->font();
        font.setPointSize(10);
        labelUsername->setFont(font);

        layout->addWidget(labelImage);
        layout->addWidget(labelUsername);

        QListWidgetItem* item = new QListWidgetItem;
        listWidget->addItem(item);
        listWidget->setItemWidget(item, customWidget);

        item->setData(Qt::UserRole, QVariant::fromValue(QString::fromStdString(vusers[i])));
    }

    connect(listWidget, &QListWidget::itemClicked, this, &MainWindow::profilePicClicked);
}



void MainWindow::profilePicClicked(QListWidgetItem* item)
{
    if (!item)
    {
        qDebug() << "Item is null!";
        return;
    }

    QVariant userData = item->data(Qt::UserRole);
    if (userData.isValid()) {
        QString unameTo = userData.toString();
        profile* prof = new profile(graph, uname, unameTo.toStdString());
        prof->exec();
        delete prof;
        prof = nullptr;
        ui->followers->setNum(DataBase::countfollowers(uname));
        ui->following->setNum(DataBase::countfollowing(uname));
    } else {
        qDebug() << "User data is invalid!";
    }
}

void MainWindow::on_prof_clicked()
{
    editprofile* edit = new editprofile(graph ,uname);
    edit->exec();
    delete edit;
    edit = nullptr;
    this->hide();
    loginfunc();


    refreshPage();
    ui->listWidget->clear();
    setupProfilePics();
    this->show();
}

void MainWindow::on_followersbutton_clicked()
{
    followers* f = new followers(graph , uname);
    f->exec();
    delete f;
    f = nullptr;
    ui->followers->setNum(DataBase::countfollowers(uname));
    ui->following->setNum(DataBase::countfollowing(uname));
}

void MainWindow::on_followingbutton_clicked()
{
    followings* f = new followings(graph , uname);
    f->exec();
    delete f;
    f = nullptr;
    ui->followers->setNum(DataBase::countfollowers(uname));
    ui->following->setNum(DataBase::countfollowing(uname));
}

void MainWindow::on_logOut_clicked()
{
    this->hide();
    loginfunc();


    refreshPage();
    ui->listWidget->clear();
    setupProfilePics();
    this->show();
}

void MainWindow::on_exit_clicked()
{
    this->close();
}
