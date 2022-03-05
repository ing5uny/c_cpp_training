#include <iostream>

int main(){
    std::cout << "Please write Width >>";

    int width;
    std::cin >> width;
    
    std::cout << "Please write Hight >>";

    int hight;
    std::cin >> hight;

    int area = width * hight;
    std::cout << "Area of the square is " << area << std::endl;

}