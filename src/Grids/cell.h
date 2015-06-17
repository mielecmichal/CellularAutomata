#ifndef CELL_H
#define CELL_H

#include <vector>

typedef unsigned int State;
typedef std::vector<int> Coordinates;

class Cell
{
public:

    Cell();
    ~Cell();

    State getState() const;
    void setState(const State &value);

    Coordinates getCoordinates() const;
    void setCoordinates(const Coordinates &value);

private:
    State state;
    Coordinates coordinates;
};

#endif // CELL_H
