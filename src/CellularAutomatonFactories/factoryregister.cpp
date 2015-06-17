#include "factoryregister.h"

FactoryRegister::FactoryRegister()
{
    int index = static_cast<int>(CellularAutomatonType::Automaton1D);
    instances[index] = new CellularAutomaton1DFactory();
}

CellularAutomatonFactory *FactoryRegister::getFactoryInstance(CellularAutomatonType type)
{
    return instances[type];
}

FactoryRegister::~FactoryRegister()
{
    vector<CellularAutomatonFactory*>::iterator it;
    for(it = instances.begin(); it != instances.end(); it++)
    {
        delete *it;
    }
}



