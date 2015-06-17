#ifndef CELLULARAUTOMATON_H
#define CELLULARAUTOMATON_H

#include "Grids/grid.h"
#include "Rules/rule.h"
#include "CellularAutomatonFactories/cellularautomatonfactory.h"

class CellularAutomaton
{
public:
    CellularAutomaton();
    ~CellularAutomaton();
    Grid* getGrid() const;
    void nextIteration();

protected:
    void updateParts();

    CellularAutomatonFactory* automatonFactory;
    Grid* grid;
    Rule* rule;
    BoundaryConditions* boundaryConditions;
};

#endif // CELLULARAUTOMATON_H
