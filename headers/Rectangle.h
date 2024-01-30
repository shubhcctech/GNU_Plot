#pragma once
#include "ShapeRepresentation.h"




 class Rectangle : public Plotting
{
    private:
    
    double length;
    double breadth;
   

    public:
    
    Rectangle();
    Rectangle(double,double);

    ~Rectangle();
    
    void shapePlot();

   


    void areaOfRectangle();

    void perimeterOfRectangle();

};
