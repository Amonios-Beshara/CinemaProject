#ifndef LOGIN_WINDOW_H
#define LOGIN_WINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class login_Window;
}
QT_END_NAMESPACE

class login_Window: public QMainWindow
{
    Q_OBJECT

public:
    login_Window(QWidget *parent = nullptr);
    ~login_Window();

private:
    Ui::login_Window *ui;
};
#endif // LOGIN_WINDOW_H
