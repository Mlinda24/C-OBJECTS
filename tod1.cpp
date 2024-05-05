#include <iostream>

class Rectangle {
private:
    float length;
    float width;
public:
    Rectangle(){
         length=0.0; width=0.0;
         };

    Rectangle(float len, float wid) : length(len), width(wid) {}
    ~Rectangle() {} ;

    void setLength(float len) { length = len; }
    void setWidth(float wid) { width = wid; }

    float getLength() const { return length; }
    float getWidth() const { return width; }

    float calculateArea() const { return length * width; }
};

int main() {
    float length1, width1, length2, width2;
    
    std::cout << "Enter the length of the first rectangle: ";
    std::cin >> length1;
    
    std::cout << "Enter the width of the first rectangle: ";
    std::cin >> width1;
    
    Rectangle myRectangle1(length1, width1);
    
    std::cout << "Area of the first rectangle: " << myRectangle1.calculateArea() << std::endl;

    std::cout << "Enter the length of the second rectangle: ";
    std::cin >> length2;
    
    std::cout << "Enter the width of the second rectangle: ";
    std::cin >> width2;
    
    Rectangle myRectangle2(length2, width2);
    
    std::cout << "Area of the second rectangle: " << myRectangle2.calculateArea() << std::endl;
    
    return 0;
}
