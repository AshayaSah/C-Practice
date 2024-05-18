#include<iostream>
using namespace std;

class Circle{
    double radius;
public:
    Circle(){
        radius = 1;
    }
    Circle(double newRadius){
        radius = newRadius;
    }
    double getArea(){
        return radius * radius * 3.14
    }
    



}

int main(){
    Circle circle1;
    Circle circle2(25);
    Circle circle3(123);

    cout<<"The area of the circle "<< circle1.radius <<" is "<<circle1.getArea() <<endl; 
    cout<<"The area of the circle "<< circle2.radius <<" is "<<circle2.getArea() <<endl; 
    cout<<"The area of the circle "<< circle3.radius <<" is "<<circle3.getArea() <<endl; 

    circle2.radius = 100;
    cout<<"The area of the circle "<< circle3.radius <<" is "<<circle3.getArea() <<endl; 

    return 0;
}