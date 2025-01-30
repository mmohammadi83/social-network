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

    void displayOtherUserMessage(const QString &message);

private slots:
    void on_sendButton_clicked();
private:
    Ui::showmessages *ui;
};

#endif
