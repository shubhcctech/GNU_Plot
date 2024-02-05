#include "../headers/Ellipse.h"
#include<iostream>
#include <cmath>
#include<fstream>
using namespace std;
Ellipse::Ellipse(double maxAxis,double minAxis){
    this->maxAxis = maxAxis;
    this->minAxis = minAxis;
}

Ellipse::~Ellipse(){

}

void Ellipse::shapePlot(){

    ofstream file ("D:\\Shubham_Workspace\\CPP\\Assignments\\GNU_2D\\text_files\\Ellipse.txt");
    int points = 100;
            
            for (int i = 0; i <= points; i++) {
                
                double theta = 2.0 * 3.14 * static_cast<double>(i) / static_cast<double>(points);

                double x = maxAxis * cos(theta);
                double y = minAxis * sin(theta);
                
                file << x << " " << y  << endl;
            }
            file.close(); 


    
    

}

void Ellipse::areaOfEllipse(){
    cout<<"Area of Ellipse: "<<M_PI*maxAxis*minAxis<<endl;
}

void Ellipse::perimeterOfEllipse(){
    cout<<"Perimeter of Ellipse: "<<M_PI*(minAxis+maxAxis)<<endl;
}

