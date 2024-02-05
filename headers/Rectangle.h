#pragma once
#include "ShapeRepresentation.h"
 class Rectangle : public Plotting
{
   public:
    Rectangle();
    Rectangle(double,double);
    ~Rectangle();   
    void shapePlot();
    void areaOfRectangle();
    void perimeterOfRectangle();

    private:
    double length;
    double breadth;

};
