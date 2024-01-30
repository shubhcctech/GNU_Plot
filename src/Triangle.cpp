#include <iostream>
#include <fstream>
#include "../headers/Triangle.h"
#include <cmath>

using namespace std;

Triangle::Triangle(double sideA , double sideB , double sideC)
{
   this->sideA = sideA;
   this->sideB = sideB;
   this->sideC = sideC;
}
Triangle::~Triangle(){

}



void Triangle :: shapePlot(){
    
        ofstream myfile("D:\\Shubham_Workspace\\CPP\\Assignments\\Cpp_workspace\\text_files\\Triangle.txt");

         if (sideA + sideB > sideC && sideA + sideC > sideB && sideB + sideC > sideA) {
       
            double x1 = 2.0, y1 = 2.0;

        
            double x2 = sideA+2, y2 = 2.0;
            double x3 = (sideA * sideA + sideB * sideB - sideC * sideC) / (2.0 * sideA)+2;
            double y3 = sqrt(sideB * sideB - x3 * x3)+2;

            myfile << x1 << " " << y1 << "\n";  
            myfile << x2 << " " << y2 << "\n";  
            myfile << x3 << " " << y3 << "\n";  
            myfile << x1 << " " << y1 << "\n"; 
        }

         myfile.close();
             
}

void Triangle::areaOfTriangle(){
    double semi = (sideA+sideB+sideC)/2;
    double cal = (semi)*(semi-sideA)*(semi-sideB)*(semi-sideC);
    double area = pow(cal,0.5);
    cout<<"Area of Triangle is: "<<area<<endl;

}

void Triangle::perimeterOfTriangle(){
    cout<<"Perimeter of Triangle is: "<<sideA+sideB+sideC<<endl;
}

