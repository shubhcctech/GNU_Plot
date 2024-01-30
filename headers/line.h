#pragma once
#include "ShapeRepresentation.h"

class Line: public Plotting{
    private:

        double mLength;
    
    public:
        Line(double);
        

        void lengthofLine();
        void shapePlot();

        ~Line();

};