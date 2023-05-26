#include <iostream>
#include "cylinderTank.h"

using namespace std;

int main()
{
    cylinderTank ct;

    ct.setHeight(8);
    ct.setRadius(5);
    ct.setDrainRate(3);
    ct.setFillRate(2);

    cout << "Height: " << ct.getHeight() << endl;
    cout << "Radius: " << ct.getRadius() << endl;
    cout << "Drain rate: " << ct.getDrainRate() << endl;
    cout << "Fill rate: " << ct.getFillRate() << endl;
    cout << "Volume: " << ct.volume() << endl;
    ct.timeToFillEmpty();
    ct.timeToFillPartial(5);

    return 0;
}
