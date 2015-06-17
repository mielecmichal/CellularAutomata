#include <QApplication>
#include "Widgets/cellularautomaton1dfactoryview.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    CellularAutomaton1DFactoryView view;
    view.show();

    return a.exec();
}
