//#include "widget.h"
#include "mybutton.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    MyButton button;
    button.show();

    return a.exec();
}
