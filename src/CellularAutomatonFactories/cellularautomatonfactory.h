#ifndef CELLULARAUTOMATONFACTORY_H
#define CELLULARAUTOMATONFACTORY_H

#include <vector>
#include <iterator>

#include "Rules/rule.h"
#include "Grids/grid.h"
#include "Iterators/griditerator.h"
#include "Iterators/neighborhooditerator.h"
#include "BoundaryConditions/boundaryconditions.h"

using std::vector;
using std::iterator;

enum RuleType
{
    RuleType1D = 0
};

enum BoundaryConditionsType
{
    Periodic = 0
};

enum NeighborhoodType
{
    Neighborhood1D
};

class CellularAutomatonFactory
{
public:
    virtual Rule* createRule(RuleType type) = 0;
    virtual Grid* createGrid(Coordinates gridSizes) = 0;
    virtual GridIterator* createGridIterator(Grid* grid) = 0;
    virtual BoundaryConditions* createBoundaryConditions(BoundaryConditionsType type, Grid* grid) = 0;
    virtual NeighborhoodIterator* createNeighborhoodIterator(NeighborhoodType type, Grid* grid, Cell* cell) = 0;
    virtual ~CellularAutomatonFactory();
};

#endif // CELLULARAUTOMATONFACTORY_H
