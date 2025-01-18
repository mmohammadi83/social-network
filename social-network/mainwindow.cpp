#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "showmessages.h" // Include the showmessages header

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect a button's clicked signal to someFunction (if you have a button)
    // Example: connect(ui->yourButtonName, &QPushButton::clicked, this, &MainWindow::someFunction);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Implement the function
void MainWindow::someFunction()
{
    showmessages *messagesWindow = new showmessages(this); // Create the showmessages window
    messagesWindow->show(); // Show the window
}
