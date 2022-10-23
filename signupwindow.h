#ifndef SIGNUPWINDOW_H
#define SIGNUPWINDOW_H

#include <QMainWindow>
#include<QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class SignUpWindow; }
QT_END_NAMESPACE

class SignUpWindow : public QMainWindow
{
    Q_OBJECT

public:
    SignUpWindow(QWidget *parent = nullptr);
    ~SignUpWindow();

private:
    Ui::SignUpWindow *ui;
};
#endif // SIGNUPWINDOW_H
