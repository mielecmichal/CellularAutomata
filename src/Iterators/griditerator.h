#ifndef GRIDITERATOR
#define GRIDITERATOR

#include "Grids/cell.h"
#include "Grids/grid.h"

class GridIterator
{
public:
    virtual bool isDone() = 0;
    virtual Cell* getCurrentCell() = 0;
    virtual void next() = 0;
    virtual ~GridIterator(){}

};

#endif // GRIDITERATOR

