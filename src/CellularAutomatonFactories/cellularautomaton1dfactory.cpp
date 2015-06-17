#include "cellularautomaton1dfactory.h"

CellularAutomaton1DFactory::CellularAutomaton1DFactory()
{
}

CellularAutomaton1DFactory::~CellularAutomaton1DFactory()
{
}

Rule *CellularAutomaton1DFactory::createRule(RuleType type)
{
    return new Rule1D;
}

Grid *CellularAutomaton1DFactory::createGrid(Coordinates gridSizes)
{
    return new Grid1D(gridSizes);
}

GridIterator *CellularAutomaton1DFactory::createGridIterator(Grid* grid)
{
    return new Grid1DIterator(grid);
}

BoundaryConditions *CellularAutomaton1DFactory::createBoundaryConditions(BoundaryConditionsType type, Grid *grid)
{
    return new PeriodicBoundaryConditions1D(grid);
}

NeighborhoodIterator *CellularAutomaton1DFactory::createNeighborhoodIterator(NeighborhoodType type, Grid *grid, Cell *cell)
{
    return new Neighborhood1DIterator(grid, cell);
}
