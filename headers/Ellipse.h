#pragma once
#include "ShapeRepresentation.h"


class Ellipse : public Plotting
{

   public :
    Ellipse(double,double);
    ~Ellipse();
    void shapePlot();
    void areaOfEllipse();
    void perimeterOfEllipse();
    
    private :
        double minAxis;
        double maxAxis;

 

    
};