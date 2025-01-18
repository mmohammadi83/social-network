#ifndef SHOWMESSAGES_H
#define SHOWMESSAGES_H

#include <QMainWindow>

namespace Ui {
class showmessages;
}

class showmessages : public QMainWindow
{
    Q_OBJECT

public:
    explicit showmessages(QWidget *parent = nullptr);
    ~showmessages();

    // Function to display a message from the other user
    void displayOtherUserMessage(const QString &message);

private slots:
    void on_sendButton_clicked(); // Slot for handling send button click

private:
    Ui::showmessages *ui;
};

#endif // SHOWMESSAGES_H
