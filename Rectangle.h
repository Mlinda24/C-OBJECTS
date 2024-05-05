class Rectangle {
    private:
    float lengthOfRectangle;
    float widthOfRectangle;
     
     public:
   
    void setlength(float length){
        lengthOfRectangle=length;

    };
     float getlenght(){
        return lengthOfRectangle;
    };
    void setwidth(float width){
        widthOfRectangle = width;
    };
    float getwidth(){
        return widthOfRectangle;
    };
    float calculateArea() const {
        return widthOfRectangle*lengthOfRectangle;


    }
     Rectangle(){
        lengthOfRectangle =0;
        widthOfRectangle=0;
    }
    ~Rectangle(){};


   
};