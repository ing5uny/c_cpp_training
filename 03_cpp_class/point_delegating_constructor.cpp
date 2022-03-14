#include <iostream>
using namespace std;

class Point{
    int x, y;
public:
    Point();
    Point(int a, int b);
    void show(){cout << "(" << x << ", " << y << ")" << endl;}
};

//delegating constructor
Point::Point() : Point(0, 0){} // call Point(int a, int b)

//target constructor
Point::Point(int a, int b)
    : x(a), y(b){}

/* 위와 같이 초기화도 가능
Point::Point(int a, int b){
    x = a; y = b;
}
*/


int main(){
    Point origin;
    Point target(10, 20);
    origin.show();
    target.show();
}