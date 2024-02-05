#pragma once
#include "ShapeRepresentation.h"
class Square : public Plotting{

    public :
    
    float side;
    Square(double);
    ~Square();
    void areaOfSquare(); 
    void shapePlot();
    void perimeterOfSquare();
};

