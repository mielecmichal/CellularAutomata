#ifndef GRID1D_H
#define GRID1D_H

#include "grid.h"
#include "cell.h"

static const int DEFAULT_CONSOLE_WIDTH = 80;

class Grid1D : public Grid
{
public:
    Grid1D(Coordinates sizes);
    virtual Coordinates getSizes();
    ~Grid1D();
};

#endif // GRID1D_H
