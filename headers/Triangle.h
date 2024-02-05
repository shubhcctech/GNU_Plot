#pragma once


#include "ShapeRepresentation.h"



class Triangle : public Plotting 
{

     
   public:

    Triangle(double,double,double);
    void areaOfTriangle();
    void perimeterOfTriangle();
    void shapePlot ();
    ~Triangle();

   private:
   
    double sideA;
    double sideB;
    double sideC;

    
};