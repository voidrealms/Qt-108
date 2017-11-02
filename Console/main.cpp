#include <QCoreApplication>
#include "commandline.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    CommandLine cCLI;


    return a.exec();
}
