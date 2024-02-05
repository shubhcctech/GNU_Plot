#include<iostream>
#include<cmath>
#include <fstream>
#include "../headers/Rectangle.h"
using namespace std;


Rectangle::Rectangle(double length , double breadth){
    this->length = length;
    this->breadth = breadth;
}

Rectangle::~Rectangle()
{
    
}
void Rectangle::areaOfRectangle()
{
    cout<<"Area of Rectangle is " << length * breadth <<endl;
}

void  Rectangle::shapePlot()
{
                ofstream myfile("D:\\Shubham_Workspace\\CPP\\Assignments\\GNU_2D\\text_files\\Rectangle.txt");

                 
                myfile << "0 0\n";       
                myfile << length << " 0\n";    
                myfile << length << " " << breadth << "\n"; 
                myfile << "0 " << breadth << "\n";     
                myfile << "0 0\n";     
                myfile.close(); 

                myfile.close();

}
void Rectangle::perimeterOfRectangle()
{
    cout<<"Perimeter of Rectangle  is " <<(2*(length + breadth))<<endl;
}

