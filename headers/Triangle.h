#pragma once


#include "ShapeRepresentation.h"



class Triangle : public Plotting 
{
   private:

    double sideA;
    double sideB;
    double sideC;
    
    


    
   public:


    
    Triangle(double,double,double);

    void areaOfTriangle();

    void perimeterOfTriangle();

    void shapePlot ();

    ~Triangle();
    
};