#ifndef RULE1D_H
#define RULE1D_H

#include "rule.h"
#include "Grids/grid.h"
#include "Grids/cell.h"
#include "Iterators/neighborhood1diterator.h"

static const int MAX_NUMBER = 256;
static const int COMBINATIONS_NUMBER = 8;

class Rule1D : public Rule
{
public:
    Rule1D();
    virtual void evaluateCell(Grid *grid, Cell* cell);
    unsigned int getNumber() const;
    void setNumber(unsigned int value);
    virtual ~Rule1D() {}

private:
    void initiateCombinations();
    State combinations[COMBINATIONS_NUMBER];
    unsigned int number;
};

#endif // RULE1D_H
