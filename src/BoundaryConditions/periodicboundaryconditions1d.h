#ifndef PERIODICBOUNDARYCONDITIONS1D_H
#define PERIODICBOUNDARYCONDITIONS1D_H

#include "boundaryconditions1d.h"

class PeriodicBoundaryConditions1D : public BoundaryConditions1D
{
public:
    PeriodicBoundaryConditions1D(Grid* grid);
    virtual  void refreshGridBoundary();
};

#endif // PERIODICBOUNDARYCONDITIONS1D_H
