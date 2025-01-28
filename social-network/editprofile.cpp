#include "editprofile.h"
#include "ui_editprofile.h"

editprofile::editprofile(std::string uname , QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editprofile)
{
    ui->setupUi(this);
    this->uname = uname;
    users user;
    DataBase::setUserFromDB(&user , uname);
    ui->labeloldname->setText(QString::fromStdString(user.getName()));
    ui->labeloldgmail->setText(QString::fromStdString(user.getgmail()));
    ui->labeloldusername->setText(QString::fromStdString(uname));
    ui->labeloldage->setNum(user.getage());
    QString path = DataBase::setProfile(uname);
    QPixmap pixmap(path);
    QPixmap roundedPixmap(ui->profButton->size());
    roundedPixmap.fill(Qt::transparent);

    QPainter painter(&roundedPixmap);
    painter.setRenderHint(QPainter::Antialiasing);
    QPainterPath path2;
    path2.addEllipse(roundedPixmap.rect());
    painter.setClipPath(path2);
    painter.drawPixmap(0, 0, pixmap.scaled(ui->profButton->size(), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation));
    painter.end();

    QIcon buttonIcon(roundedPixmap);

    ui->profButton->setIcon(buttonIcon);
    ui->profButton->setIconSize(ui->profButton->size());
}

editprofile::~editprofile()
{
    delete ui;
}


void editprofile::on_pushButton_clicked()
{


}

void editprofile::on_ok_clicked()
{
    users user;
    DataBase::setUserFromDB(&user , uname);
    std::string name = ui->linenewname->text().toStdString();
    std::string pass = ui->linenewpassword->text().toStdString();
    int age = ui->linenewage->text().toInt();
    std::string gmail = ui->linenewgmail->text().toStdString();
    if(name == "") name = user.getName();
    if(pass == "") pass = user.getPass();
    if(gmail == "") gmail = user.getgmail();
    DataBase::updateUser(uname , name , pass , age , gmail);
    this->close();
}

void editprofile::on_cancel_clicked()
{
    this->close();
}

void editprofile::on_deleteAcount_clicked()
{

}

void editprofile::on_profButton_clicked()
{
    QString imagePath = QFileDialog::getOpenFileName(this, "Select Profile Picture", "", "Images (*.png *.jpg *.jpeg *.bmp)");
    if (imagePath.isEmpty()) {
        qDebug() << "No file selected.";
        return;
    }

    QDir dir("./profiles/");
    if (!dir.exists()) {
        dir.mkpath(".");
    }
    QString suffix = QFileInfo(imagePath).suffix().toLower();
    QString destinationPath = "./profiles/"+QString::fromStdString(uname)+"."+suffix;
    if (QFile::exists(destinationPath)) {
            QFile::remove(destinationPath);
    }

    QFile file(imagePath);
        if (file.copy(destinationPath)) {
            qDebug() << "File copied successfully to:" << destinationPath;
        } else {
            qDebug() << "Failed to copy file. Error:" << file.errorString();
        }

    DataBase::addProfile(uname , destinationPath.toStdString());
    QPixmap pixmap(destinationPath);
    QPixmap roundedPixmap(ui->profButton->size());
    roundedPixmap.fill(Qt::transparent);

    QPainter painter(&roundedPixmap);
    painter.setRenderHint(QPainter::Antialiasing);
    QPainterPath path2;
    path2.addEllipse(roundedPixmap.rect());
    painter.setClipPath(path2);
    painter.drawPixmap(0, 0, pixmap.scaled(ui->profButton->size(), Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation));
    painter.end();

    QIcon buttonIcon(roundedPixmap);

    ui->profButton->setIcon(buttonIcon);
    ui->profButton->setIconSize(ui->profButton->size());

    qDebug() << "profile changed";
}
