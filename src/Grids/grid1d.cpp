#include "grid1d.h"

Grid1D::Grid1D(Coordinates sizes) : Grid()
{
    this->sizes = sizes;
    cells = new Cell[sizes[0]];
}

Coordinates Grid1D::getSizes()
{
    return sizes;
}

Grid1D::~Grid1D()
{
    delete [] cells;
}
