#pragma once
#include "ShapeRepresentation.h"

class Line: public Plotting{
    public:
        Line(double);
        void lengthofLine();
        void shapePlot();
        ~Line();
    
    private:
        double mLength;
    

};