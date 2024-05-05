#include <iostream>
#include "Rectangle.h"
using namespace std;



int main() {
float lenght;
float width;
cout<<"enter lenght of the rectangle \n";
cin>>lenght;
cout<<"enter width of the rectangle \n";
cin>>width;

Rectangle rectangle1;
rectangle1.setlength(lenght);
rectangle1.setwidth(width);
cout<<"area of rectangle1 = "<<rectangle1.calculateArea()<<"\n";
        
    }
   
     

    

    


