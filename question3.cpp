#include <iostream>
#include <string>
using namespace std;

int main() {
string elements[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    
   
    int length = sizeof(elements);


    for (int i = 0; i < length; ++i) {
        
        if (elements[i][0] == 'B') {
            
            cout << elements[i] << endl;
}
    }}