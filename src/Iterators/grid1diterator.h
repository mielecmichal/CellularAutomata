#ifndef GRID1DITERATOR_H
#define GRID1DITERATOR_H

#include "griditerator.h"
#include "Grids/grid.h"

class Grid1DIterator : public GridIterator
{
public:
    Grid1DIterator(Grid * grid);
    virtual bool isDone();
    virtual Cell* getCurrentCell();
    virtual void next();
    ~Grid1DIterator();

private:
    Grid * grid;
    int gridLength;
    int currentIndex;
};

#endif // GRID1DITERATOR_H
