#include "signupwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SignUpWindow w;
    w.show();
    return a.exec();
}
