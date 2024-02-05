#pragma once

#include "ShapeRepresentation.h"

class Circle :public Plotting
{
    public:
    
    Circle();
    Circle(double);
    ~Circle();
    void areaOfCircle();
    void perimeterOfCircle();
    void shapePlot();

    private :
    float mRadius;

    
    
   
};