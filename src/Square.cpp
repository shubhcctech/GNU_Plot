#include <iostream>
#include <fstream>
#include "../headers/Square.h"

using namespace std ;

Square :: Square(double side)
{
   this->side = side;
}

void Square::shapePlot(){

        ofstream myfile("D:\\Shubham_Workspace\\CPP\\Assignments\\Cpp_workspace\\text_files\\Square.txt");

                 
        myfile << "0 0\n";       
        myfile << side << " 0\n";    
        myfile << side << " " << side << "\n"; 
        myfile << "0 " << side << "\n";     
        myfile << "0 0\n";     
        myfile.close(); 
}

               


void Square :: areaOfSquare ()
{
    cout<< " Area Of Square " << side * side <<endl;
}

void Square :: perimeterOfSquare()
{
    cout<<" Perimeter of Square  " << 4 * side <<endl;
}


Square :: ~ Square ()
{

}