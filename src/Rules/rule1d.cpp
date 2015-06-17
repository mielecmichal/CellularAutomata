#include "rule1d.h"

Rule1D::Rule1D()
{
    this->number = 90;
    initiateCombinations();
}

unsigned int Rule1D::getNumber() const
{
    return number;
}

void Rule1D::setNumber(unsigned int value)
{
    number = value % MAX_NUMBER;
}

void Rule1D::initiateCombinations()
{
    int number = this->number;
    for(int i=0; i<COMBINATIONS_NUMBER; ++i)
    {
        this->combinations[i] = static_cast<State>(number % 2);
        number = number / 2;
    }
}

void Rule1D::evaluateCell(Grid* grid, Cell *cell)
{
    Cell* left = nullptr;
    Cell* center = nullptr;
    Cell* right = nullptr;

    Neighborhood1DIterator* neighborhoodIterator = new Neighborhood1DIterator(grid, cell);

    left = neighborhoodIterator->getCurrentCell();
    neighborhoodIterator->next();

    center = neighborhoodIterator->getCurrentCell();
    neighborhoodIterator->next();

    right = neighborhoodIterator->getCurrentCell();
    neighborhoodIterator->next();

    int leftState = static_cast<int>(left->getState());
    int centerState = static_cast<int>(center->getState());
    int rightState = static_cast<int>(right->getState());

    int combinationIndex = leftState * 4 + centerState * 2 + rightState;
    cell->setState(combinations[combinationIndex]);

    delete neighborhoodIterator;
}

