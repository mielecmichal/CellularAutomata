#ifndef NEIGHBORHOOD1DITERATOR_H
#define NEIGHBORHOOD1DITERATOR_H

#include "neighborhooditerator.h"

static const int NEIGHBORS_NUMBER = 3;

class Neighborhood1DIterator : public NeighborhoodIterator
{
public:
    Neighborhood1DIterator(Grid* grid, Cell* cell);
    virtual bool isDone();
    virtual Cell* getCurrentCell();
    virtual void next();
    virtual ~Neighborhood1DIterator();

private:
    Cell* cell;
    Grid* grid;
    int neighborCount;
};

#endif // NEIGHBORHOOD1DITERATOR_H
