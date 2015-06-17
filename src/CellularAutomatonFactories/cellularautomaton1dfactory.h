#ifndef CELLULARAUTOMATON1DFACTORY_H
#define CELLULARAUTOMATON1DFACTORY_H

#include "cellularautomatonfactory.h"
#include "Rules/rule1d.h"
#include "Grids/grid1d.h"
#include "Iterators/grid1diterator.h"
#include "Iterators/neighborhood1diterator.h"
#include "BoundaryConditions/periodicboundaryconditions1d.h"

class CellularAutomaton1DFactory : public CellularAutomatonFactory
{
public:
    CellularAutomaton1DFactory();
    ~CellularAutomaton1DFactory();

    virtual Rule* createRule(RuleType type);
    virtual Grid* createGrid(Coordinates gridSizes);
    virtual GridIterator* createGridIterator(Grid* grid);
    virtual BoundaryConditions* createBoundaryConditions(BoundaryConditionsType type, Grid* grid);
    virtual NeighborhoodIterator* createNeighborhoodIterator(NeighborhoodType type, Grid* grid, Cell* cell);
};

#endif // CELLULARAUTOMATON1DFACTORY_H
