#ifndef BOUNDARYCONDITIONS_H
#define BOUNDARYCONDITIONS_H

#include "Grids/grid.h"
#include "Grids/cell.h"

class BoundaryConditions
{
public:
    virtual void refreshGridBoundary() = 0;
    virtual void refreshCellBoundary(Cell* cell) = 0;
    virtual ~BoundaryConditions() {}
};

#endif // BOUNDARYCONDITIONS_H
