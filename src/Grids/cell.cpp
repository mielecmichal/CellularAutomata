#include "cell.h"

Cell::Cell()
{
}

Cell::~Cell()
{

}

State Cell::getState() const
{
    return state;
}

void Cell::setState(const State &value)
{
    state = value;
}
Coordinates Cell::getCoordinates() const
{
    return coordinates;
}

void Cell::setCoordinates(const Coordinates &value)
{
    coordinates = value;
}

