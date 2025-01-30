#include "profile.h"
#include "ui_profile.h"

profile::profile(Graph* graph , std::string from , std::string to , QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profile)
{
    ui->setupUi(this);
    this->graph = graph;
    this->from = from;
    this->to = to;
    if(DataBase::isFollowing(from , to))
        ui->follow->hide();
    else    ui->unfollow->hide();
    ui->followers->setNum(DataBase::countfollowers(to));
    ui->following->setNum(DataBase::countfollowing(to));
    users user;
    DataBase::setUserFromDB(&user , to);
    ui->name->setText(QString::fromStdString(user.getName()));
    ui->gmail->setText(QString::fromStdString(user.getgmail()));
    ui->uname->setText(QString::fromStdString(to));
    ui->age->setNum( user.getage());
    QString path = DataBase::setProfile(to);
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
    if(DataBase::isFollowing(from , to)){
        showPosts();
    }
    else{
        ui->posts->hide();
    }
}

profile::~profile()
{
    delete ui;
}

void profile::on_follow_clicked()
{
    DataBase::follow(from , to);
    graph->addEdge(to , from);
    ui->followers->setNum(DataBase::countfollowers(to));
    ui->following->setNum(DataBase::countfollowing(to));
    ui->follow->hide();
    ui->unfollow->show();

}

void profile::on_unfollow_clicked()
{
    DataBase::unfollow(from , to);
    graph->removeEdge(to , from);
    ui->followers->setNum(DataBase::countfollowers(to));
    ui->following->setNum(DataBase::countfollowing(to));
    ui->follow->show();
    ui->unfollow->hide();
}

void profile::showPosts()
{
    vector<QString> posts = DataBase::getPost(to);
    for(auto& i: posts){
        ui->posts->addItem(i);
    }
}


