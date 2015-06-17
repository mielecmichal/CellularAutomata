#ifndef FACTORYREGISTER_H
#define FACTORYREGISTER_H

#include "CellularAutomatonFactories/cellularautomatonfactory.h"
#include "CellularAutomatonFactories/cellularautomaton1dfactory.h"

#include "Widgets/cellularautomaton1dfactoryview.h"

#include <vector>
#include <iterator>

using std::vector;
using std::iterator;

enum CellularAutomatonType
{
    Automaton1D,
    End
};

class FactoryRegister
{
public:
    static FactoryRegister* getInstance();

    CellularAutomatonFactory *getFactoryInstance(CellularAutomatonType type);
    QWidget *getFactoryViewInstance(CellularAutomatonType type);

    ~FactoryRegister();

private:
    FactoryRegister();
    vector<CellularAutomatonFactory*> instances;
};

#endif // FACTORYREGISTER_H
