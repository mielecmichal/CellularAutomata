#ifndef BOUNDARYCONDITIONS1D_H
#define BOUNDARYCONDITIONS1D_H

#include "boundaryconditions.h"

class BoundaryConditions1D : public BoundaryConditions
{
public:
    BoundaryConditions1D(Grid* grid);
    void refreshGridBoundary(){}
    void refreshCellBoundary(Cell* /*cell*/){}

protected:
    Grid* grid;
};

#endif // BOUNDARYCONDITIONS1D_H
