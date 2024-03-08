#include "login_Window.h"
#include "ui_login_window.h"
#include "users.h"
#include "register.h"



login_Window::login_Window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login_Window)
{
    ui->setupUi(this);

   ui->error_label->setVisible(false);
}


login_Window::~login_Window()
{
    delete ui;
}
