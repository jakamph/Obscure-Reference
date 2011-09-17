#include <QtGui/QApplication>
#include "or_main_window.hpp"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ORMainWindow w;
    w.show();

    return a.exec();
}
