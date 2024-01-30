#include <iostream>
#include "../headers/Line.h"
#include<cmath>
#include<fstream>
using namespace std;
Line::Line(double length )
{
    this->mLength = length;
}

void Line::lengthofLine()
{
    cout << " length Of Given Coordinates " << mLength<<endl;
}

Line :: ~Line ()
{
    
}

void Line::shapePlot(){
    ofstream myfile("D:\\Shubham_Workspace\\CPP\\Assignments\\Cpp_workspace\\text_files\\Line.txt");
    myfile<<"0 0"<<endl;
    myfile<<mLength<<" 0"<<endl;

}