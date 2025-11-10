#include "byterconverter.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ByterConverter w;
    w.setWindowTitle("位制轉換");
    w.show();
    return a.exec();
}
