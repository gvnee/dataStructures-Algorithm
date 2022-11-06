#include<stdio.h>

class Room{
    private:
        double length;
        double breadth;
        double height;

    public:
        //constructor
        Room(double length, double breadth, double height){
            this->length = length;
            this->breadth = breadth;
            this->height = height;
        }
        
        double calculateArea(){
            return length * breadth;
        }
        double calculateVolume(){
            return length * breadth * height;
        }
};

int main(){
    Room room1(10, 20, 30);
    double area = room1.calculateArea();

    printf("area-> %f\n", area);

    return 0;
}