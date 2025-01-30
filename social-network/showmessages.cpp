#include "showmessages.h"
#include "ui_showmessages.h"
#include <QScrollBar>

showmessages::showmessages(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::showmessages)
{
    ui->setupUi(this);

    connect(ui->sendButton, &QPushButton::clicked, this, &showmessages::on_sendButton_clicked);

    ui->chatDisplay->setReadOnly(true);
    ui->chatDisplay->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
}

showmessages::~showmessages()
{
    delete ui;
}

void showmessages::on_sendButton_clicked()
{
    QString message = ui->messageInput->text().trimmed();
    if (!message.isEmpty()) {
        ui->chatDisplay->append("You: " + message);

        ui->messageInput->clear();

        QScrollBar *scrollbar = ui->chatDisplay->verticalScrollBar();
        scrollbar->setValue(scrollbar->maximum());
    }
}

void showmessages::displayOtherUserMessage(const QString &message)
{
    if (!message.isEmpty()) {
        ui->chatDisplay->append("Other User: " + message);

        QScrollBar *scrollbar = ui->chatDisplay->verticalScrollBar();
        scrollbar->setValue(scrollbar->maximum());
    }
}
