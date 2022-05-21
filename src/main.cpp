#include "WindowsAssist.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WindowsAssist w;
    w.show();
    return a.exec();
}
