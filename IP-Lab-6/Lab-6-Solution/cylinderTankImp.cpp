#include <iostream>
#include <cmath>
#include "cylinderTank.h"

using namespace std;

void cylinderTank::setHeight (double h)
{
    height = h;
}
void cylinderTank::setRadius (double r)
{
    radius = r;
}
void cylinderTank::setDrainRate (double dR)
{
    aveDrainRate = dR;
}
void cylinderTank::setFillRate (double fR)
{
    aveFillRate = fR;
}
double cylinderTank::getHeight ()
{
    return height;
}
double cylinderTank::getRadius ()
{
    return radius;
}
double cylinderTank::getDrainRate ()
{
    return aveDrainRate;
}
double cylinderTank::getFillRate ()
{
    return aveFillRate;
}
double cylinderTank::volume ()
{
    return 3.14159 * pow(radius, 2) * height;
}
void cylinderTank::timeToFillEmpty()
{
    int hrs, mins, secs;
    int time = static_cast<int>(volume() / aveFillRate);
    hrs = time / 3600;
    int r = time % 3600;
    mins = r % 60;
    secs = r / 60;

    cout << "Time to fill if tank is empty: " << hrs << ":" << mins%60 << ":" << secs%60 << endl;
}
void cylinderTank::timeToFillPartial(double p)
{
    int hrs, mins, secs;
    int time = static_cast<int>(volume()-p);
    int time1 = time / aveFillRate;
    hrs = time1 / 3600;
    int r = time1 % 3600;
    mins = r % 60;
    secs = r / 60;

    cout << "Time to fill if tank is partailly filled: " << hrs << ":" << mins%60 << ":" << secs%60 << endl;
}

cylinderTank::cylinderTank()
{
    height = 0;
    radius = 0;
    aveDrainRate = 0;
    aveFillRate = 0;
}
cylinderTank::~cylinderTank()
{

}
