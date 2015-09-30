#include "cove_login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cove_login w;
    w.show();

    return a.exec();
}
