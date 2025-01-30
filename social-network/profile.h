#ifndef PROFILE_H
#define PROFILE_H

#include <QDialog>
#include "database.h"

namespace Ui {
class profile;
}

class profile : public QDialog
{
    Q_OBJECT

public:
    explicit profile(Graph* graph ,std::string from ,std::string to , QWidget *parent = nullptr);
    ~profile();

private slots:
    void on_follow_clicked();

    void on_unfollow_clicked();

private:
    Ui::profile *ui;
    string from;
    string to;
    Graph* graph;
};

#endif // PROFILE_H
