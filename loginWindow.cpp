#include "loginWindow.h"
#include "ui_loginWindow.h"
#include "users.h"
#include "register.h"



loginWindow::loginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::loginWindow)
{
    ui->setupUi(this);

   ui->error_label->setVisible(false);
}


loginWindow::~loginWindow()
{
    delete ui;
}
