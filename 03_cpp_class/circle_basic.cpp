#include <iostream>
using namespace std;

class Circle{
    public:

    Circle();
    Circle(int r);

    int radius;
    double getArea();
};

Circle::Circle(){
    radius = 1;
}

Circle::Circle(int r){
    radius = r;
}


double Circle::getArea(){
    return 3.14*radius*radius;
}

int main(){
    Circle donut;
    donut.radius = 1;
    double area = donut.getArea();

    cout << "Donut's area is " << area << endl;
    
    Circle pizza(30);
    area = pizza.getArea();

    cout << "Pizza's area is " << area << endl;

    return 0;
}