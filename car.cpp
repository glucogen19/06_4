#include "car.h"

Car::Car()
{
    xCarLabel = 100;
    vCarLabel = 200;
    pCarLabel = 3;
}

int Car::getX() const
{
    return xCarLabel;
}

int Car::getV() const
{
    return vCarLabel;
}

int Car::getP() const
{
    return pCarLabel;
}
