#include "followings.h"
#include "ui_followings.h"

followings::followings(Graph* graph , string uname , QWidget *parent) :
    QDialog(parent),
    ui(new Ui::followings)
{
    ui->setupUi(this);
    this->graph = graph;
    this->uname = uname;
    widgetListView();
}

followings::~followings()
{
    delete ui;
}

void followings::on_ok_clicked()
{
    this->close();
}

void followings::widgetListView()
{
    QListWidget* listWidget = ui->listWidget;
    if (!listWidget) {
        qDebug() << "ListWidget is null!";
        return;
    }
    vector<string> vusers = DataBase::getFollowing(uname);
    qDebug() << "size" << vusers.size();
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

    connect(listWidget, &QListWidget::itemClicked, this, &followings::profilePicClicked);
}

void followings::profilePicClicked(QListWidgetItem* item)
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
    } else {
        qDebug() << "User data is invalid!";
    }
}
