#include "grid1diterator.h"

Grid1DIterator::Grid1DIterator(Grid *grid)
{
    this->grid = grid;
    this->gridLength = grid->getSizes()[0] - 1;
    this->currentIndex = 1;
}

bool Grid1DIterator::isDone()
{
    if(currentIndex >= gridLength)
    {
        return true;
    }
    return false;
}

Cell *Grid1DIterator::getCurrentCell()
{
    return grid->cells + currentIndex;
}

void Grid1DIterator::next()
{
    currentIndex++;
}

Grid1DIterator::~Grid1DIterator()
{
}

