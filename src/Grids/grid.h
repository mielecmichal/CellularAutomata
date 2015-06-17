#ifndef GRID_H
#define GRID_H

#include "Iterators/griditerator.h"

using std::vector;

class Grid
{
friend class GridIterator;
friend class Grid1DIterator;
friend class Neighborhood1DIterator;
friend class PeriodicBoundaryConditions1D;

public:
    Grid() {}
    virtual Coordinates getSizes() = 0;
    virtual ~Grid() {}

protected:
    Cell* cells;
    Coordinates sizes;
};

#endif // GRID_H
