#include "cellularautomaton.h"

CellularAutomaton::CellularAutomaton()
{
}

Grid *CellularAutomaton::getGrid() const
{
    return grid;
}

void CellularAutomaton::nextIteration()
{
    boundaryConditions->refreshGridBoundary();

    Cell* cell;
    GridIterator* gridIterator = automatonFactory->getGridIterator();
    while(!gridIterator->isDone())
    {
        cell = gridIterator->getCurrentCell();
        boundaryConditions->refreshCellBoundary(cell);
        rule->evaluateCell(grid, cell);
        gridIterator->next();
    }
    delete gridIterator;
}

void CellularAutomaton::updateParts()
{
}

CellularAutomaton::~CellularAutomaton()
{
    delete grid;
    delete rule;
    delete boundaryConditions;
}

