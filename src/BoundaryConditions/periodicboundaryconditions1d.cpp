#include "periodicboundaryconditions1d.h"

PeriodicBoundaryConditions1D::PeriodicBoundaryConditions1D(Grid *grid) : BoundaryConditions1D(grid)
{
    this->grid = grid;
}

void PeriodicBoundaryConditions1D::refreshGridBoundary()
{
    Cell* cellsTable = this->grid->cells;
    int tableLength = this->grid->getSizes()[0];

    cellsTable[0] = cellsTable[tableLength-2];
    cellsTable[tableLength-1] = cellsTable[1];
}

