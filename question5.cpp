#include <iostream>
using namespace std;
double areaOfTriangle(double baseparam, double heightparam) {
    double base = baseparam;
    double height = heightparam;
    double Area = 0.5 * base *height;
    return Area;
}
 double areaOfSquare(double sideparam)   {
    double side = sideparam;
    double Area = side * side;
    return Area;
 }
 double areaOfRectangle(double lengthparam, double withparam) {
    double length = lengthparam;
    double width = withparam;
    double Area = length * width;
    return Area;
 }
 
int main() {

    double sideOfsqr;
    double lenghtOfrect;
    double windthOfrect;
    double baseOfTriangle;
    double heightOfTriangle;

    int num;
    cout<< "please select the area of a shape to calculate\n"<<"1. Square\n2. Rectangle\n3. Triangle\n4. Quit prgram\n";
    cin>> num;
    while (num<1 || num>4){
        cout<<"your input was: "<<num<<" which is an invalid input\n please enter a valid input!!!\n";
         cout<< "please select the area of a shape to calculate\n"<<"1. Square\n2. Rectangle\n3. Triangle\n4. Quit prgram\n\n enter selection.\n";
        cin>>num;
    }
    while(num>=1 && num<=3){
       
    if (num==1){
        cout<<"enter length of side of square \n";
        cin>>sideOfsqr;
        cout<< "area of square = "<<areaOfSquare(sideOfsqr)<<endl;
    }
    if (num==2){
        cout<<"enter the length of rectangle \n";
        cin>>lenghtOfrect;
        cout<<"enter width of rectangle\n ";
        cin>> windthOfrect;
        cout<< "area of rectangle is "<<areaOfRectangle(lenghtOfrect,windthOfrect)<<"\n";
    }
    if (num==3){
        cout<<"enter base of triangle\n ";
        cin>>baseOfTriangle;
        cout<<"enter height of triangle\n";
        cin>>heightOfTriangle;
        cout<<"area of triangle is "<<areaOfTriangle(baseOfTriangle,heightOfTriangle)<<"\n";
    }
     cout<< "please select the area of a shape to calculate\n"<<"1. Square\n2. Rectangle\n3. Triangle\n4. Quit prgram\n";
        cin>>num;
    }
    if (num == 4){
        cout<<"quited";
    }
    return 0;
    
    }

    



