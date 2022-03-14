/*
반지름 1000원 생성
반지름 2000원 생성
반지름 1원 생성
반지름 30원 생성
반지름 100원 생성
반지름 200원 생성
반지름 200원 소멸
반지름 100원 소멸
반지름 30원 소멸
반지름 1원 소멸
반지름 2000원 소멸
반지름 1000원 소멸
*/

#include <iostream>
using namespace std;

class Circle{
public:
    int radius;
    Circle();
    Circle(int r);
    ~Circle();
    double getArea();
};

Circle::Circle(){
    radius = 1;
    cout << "반지름 " << radius << "원 생성" << endl;
}

Circle::Circle(int r){
    radius = r;
    cout << "반지름 " << radius << "원 생성" << endl;
}

Circle::~Circle(){
    cout << "반지름 " << radius << "원 소멸" << endl;
}

double Circle::getArea(){
    return 3.14*radius*radius;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f(){
    Circle fDonut(100);
    Circle fPizza(200);
}

int main(){

    Circle mainDonut;
    Circle mainPizza(30);

    f();
}

