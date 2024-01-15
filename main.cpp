#include "emsibank.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    EMSIBank w;
    w.show();
    return a.exec();
}
