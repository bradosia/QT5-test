#ifdef _WIN32
#include <Windows.h>
#endif

#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    /* Hide Console in windows
     */
    #ifdef _WIN32
    FreeConsole();
    #endif

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
