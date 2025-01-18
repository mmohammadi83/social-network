#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void someFunction(); // Existing function (if you still need it)
    void on_loginB_clicked(); // New slot for the loginB button

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
