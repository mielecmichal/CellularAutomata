#include "neighborhood1diterator.h"

Neighborhood1DIterator::Neighborhood1DIterator(Grid *grid, Cell *cell)
{
    this->cell = cell;
    this->grid = grid;
    this->neighborCount = 0;
}

bool Neighborhood1DIterator::isDone()
{
    if(neighborCount >= NEIGHBORS_NUMBER)
    {
        return true;
    }
    return false;
}

Cell *Neighborhood1DIterator::getCurrentCell()
{
    int cellIndex = cell->getCoordinates()[0];
    int neighborIndex = cellIndex + neighborCount - 1;
    return grid->cells + neighborIndex;
}

void Neighborhood1DIterator::next()
{
    neighborCount++;
}

Neighborhood1DIterator::~Neighborhood1DIterator()
{

}

