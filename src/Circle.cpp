
#include "../headers/Circle.h"
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

 

Circle::Circle(double mRadius){
    this->mRadius = mRadius;
} 

void Circle::shapePlot()
{
    ofstream myFile("D:\\Shubham_Workspace\\CPP\\Assignments\\Cpp_workspace\\text_files\\Circle.txt");
            int points = 100;
            
            for (int i = 0; i <= points; i++) {
                
                double theta = 2.0 * 3.14 * static_cast<double>(i) / static_cast<double>(points);

                double x = mRadius * cos(theta);
                double y = mRadius * sin(theta);
                int z = (rand() % (5 - 1 + 1)) + 1;
                myFile << x << " " << y << " "<< 5 << endl;
            }
            myFile.close(); 
      
}

void Circle::areaOfCircle(){
    cout<<"Area of Circle is: "<<M_PI*pow(mRadius,2)<<endl;
}

void Circle::perimeterOfCircle(){
    cout<<"Perimeter of Circle is: "<<2*M_PI*mRadius<<endl;
}

 
Circle :: ~ Circle()
{
    
}