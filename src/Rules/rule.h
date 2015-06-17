#ifndef RULE_H
#define RULE_H

#include "Grids/cell.h"
#include "Grids/grid.h"

class Rule
{
public:
    virtual void evaluateCell(Grid* grid, Cell* cell) = 0;
    virtual ~Rule() {}
};

#endif // RULE_H
