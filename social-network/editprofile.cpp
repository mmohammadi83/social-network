#include "editprofile.h"
#include "ui_editprofile.h"
#include <QmessageBox>

editprofile::editprofile(std::string uname , QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editprofile)
{
    ui->setupUi(this);
    connect(ui->btnsaveChanges,&QPushButton::clicked,this,&EditProfile::on_btnSaveChanges_clicked);
}

editprofile::~editprofile()
{
    delete ui;
}


void editprofile::on_pushButton_clicked()
{
    QString imagePath = QFileDialog::getOpenFileName(this, "Select Profile Picture", "", "Images (*.png *.jpg *.jpeg *.bmp)");
    if (imagePath.isEmpty()) {
        qDebug() << "No file selected.";
        return;
    }

    QString destinationPath = "./profiles/"+QString::fromStdString(uname)+".jpg";
    QFile file(imagePath);
        if (file.copy(destinationPath)) {
            qDebug() << "File copied successfully to:" << destinationPath;
        } else {
            qDebug() << "Failed to copy file. Error:" << file.errorString();
        }
    QPixmap pixmap(destinationPath);
    QIcon buttonIcon(pixmap.scaled(ui->profile->size(), Qt::KeepAspectRatioByExpanding));

    ui->pushButton->setIcon(buttonIcon);
    ui->pushButton->setIconSize(ui->pushButton->size());
}
