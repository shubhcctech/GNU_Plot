#include <iostream>
#include "headers/Triangle.h"
#include "headers/Rectangle.h"
#include "headers/Line.h"
#include "headers/Circle.h"
#include "headers/Ellipse.h"
#include "headers/Square.h"
#include "headers/Line.h"
#include "headers/Ellipse.h"

using namespace std;


int main()
{

    
    
        cout << "WELCOME" << endl;
        cout << "1.Rectangle " << endl
             << "2.Circle " << endl
             << "3.Triangle " << endl
             << "4.Square " << endl
             << "5.Line " << endl
             << "6.Ellipse"<<endl
             << "7.To Exit"<<endl;
             

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            cout<< "<<<Rectangle>>>" <<endl;
            cout<<"Enter length and breadth: "<<endl;
            double length;
            double breadth;
            cin>>length>>breadth;
            Rectangle rectangle(length,breadth);
            rectangle.shapePlot();
          
             
            break;
        }
        case 2:
        {
           
            cout << "<<<Circle>>>" << endl;
            cout << "Enter radius: " << endl;

            double radius;

            cin>>radius;
            
           

            Circle circle(radius);

            circle.shapePlot();
            break;
        }

       
        case 3:
        {
           cout<< "<<<Triangle>>>" <<endl;
           cout<<"Enter sides: "<<endl;


           double sideA;
           double sideB;
           double sideC;

           cin>>sideA>>sideB>>sideC;

           Triangle triangle(sideA,sideB,sideC);
           triangle.shapePlot();
           

             
           
           
            break;
        }
        case 4:{
            cout<<"<<<Square>>>"<<endl;
            cout<<"Enter side: "<<endl;

            double side;

            cin>>side;

            Square square(side);
            square.shapePlot();
            break;
        }

        case 5:{
            cout<<"<<<Line>>>"<<endl;
            cout<<"Enter Length : "<<endl;
            double length;
            cin>>length;

            Line line(length);
            line.shapePlot();
            
            break;
        }

        case 6:{
            double maxAxis;
            double minAxis;
           
            cout<<"<<<Ellipse>>>"<<endl;
            cout<<"Enter major and minor axis: "<<endl;
            cin>>maxAxis>>minAxis;
            Ellipse ellipse(maxAxis,minAxis);
            ellipse.shapePlot();


        }
    }
        
}