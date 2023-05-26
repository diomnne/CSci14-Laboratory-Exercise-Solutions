#ifndef CYLINDERTANK_H_INCLUDED
#define CYLINDERTANK_H_INCLUDED

class cylinderTank
{
private:
    double height;
    double radius;
    double aveDrainRate;
    double aveFillRate;

public:
    cylinderTank();
    void setHeight (double); //set tank height
    void setRadius (double); //set tank radius
    void setDrainRate (double);//set tank drain rate
    void setFillRate (double); //set tank fill rate
    double getHeight (); //return the value of the height
    double getRadius (); //return the value of the radius
    double getDrainRate (); //return the value of the drain rate
    double getFillRate (); //return the value of the fill rate
    double volume (); //computes and returns the volume
    void timeToFillEmpty();
    void timeToFillPartial(double);

    ~cylinderTank();

};

#endif // CYLINDERTANK_H_INCLUDED
