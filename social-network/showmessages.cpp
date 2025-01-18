#include "showmessages.h"
#include "ui_showmessages.h"
#include <QScrollBar> // For scrolling functionality

showmessages::showmessages(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::showmessages)
{
    ui->setupUi(this);

    // Connect the send button's clicked signal to the slot
    connect(ui->sendButton, &QPushButton::clicked, this, &showmessages::on_sendButton_clicked);

    // Ensure the chat display is scrollable
    ui->chatDisplay->setReadOnly(true); // Make the chat display read-only
    ui->chatDisplay->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn); // Enable vertical scrollbar
}

showmessages::~showmessages()
{
    delete ui;
}

void showmessages::on_sendButton_clicked()
{
    QString message = ui->messageInput->text().trimmed(); // Get the message from the input box
    if (!message.isEmpty()) {
        // Display the sent message in the chat box
        ui->chatDisplay->append("You: " + message);

        // Clear the input box
        ui->messageInput->clear();

        // Scroll to the bottom of the chat display
        QScrollBar *scrollbar = ui->chatDisplay->verticalScrollBar();
        scrollbar->setValue(scrollbar->maximum());
    }
}

// Function to display a message from the other person
void showmessages::displayOtherUserMessage(const QString &message)
{
    if (!message.isEmpty()) {
        ui->chatDisplay->append("Other User: " + message);

        // Scroll to the bottom of the chat display
        QScrollBar *scrollbar = ui->chatDisplay->verticalScrollBar();
        scrollbar->setValue(scrollbar->maximum());
    }
}
