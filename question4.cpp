#include <iostream>
using namespace std;

int main() {
     int compare;
     cout<<"enter an integer value between 5 and 10"<<endl;
        cin>>compare;
    
    while(compare<5 && compare>=0){
        cout<<"Sorry, you entered an invalid number, please try again "<<endl;
        cin>>compare;
        if(compare<5)
        cout<<"you entered "<<compare<<"please enter a number between 5 and 10"<<endl;
    }
    if(compare>5 && compare<10)
    cout<<"your input value("<<compare<<") has been accepted";
    
}