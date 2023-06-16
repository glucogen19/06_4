#ifndef CAR_H
#define CAR_H

class Car
{
public:
    Car();

    int getX() const;
    int getV() const;
    int getP() const;

private:
    int xCarLabel;
    int vCarLabel;
    int pCarLabel;
};

#endif // CAR_H
