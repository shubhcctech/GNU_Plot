#pragma once
#include "ShapeRepresentation.h"


class Ellipse : public Plotting
{

    
    private :

        double minAxis;
        double maxAxis;


    public :

    Ellipse(double,double);

    ~Ellipse();

    void shapePlot();

    void areaOfEllipse();

    void perimeterOfEllipse();

    
};