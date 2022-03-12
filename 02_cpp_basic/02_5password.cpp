/*
*
* C++라는 문자열을 입력할때까지 ... 
* cstring를 사용함
*
*/

#include <iostream>
#include <cstring>
  
int main(){
    char password1[11];
    std::cout << "If you want to quit, enter correct password" << std::endl;
    while(true){
        std::cout << "Password1 >>";
        std::cin >> password1;
        if(strcmp(password1, "C++") == 0){
            std::cout << "Correct password!" << std::endl;
            break;
        }
        else
            std::cout << "Password is incorrect!!!" << std::endl;
    }

    char password2[12];
    std::cout << "If you want to quit, enter correct password" << std::endl;
    while(true){
        std::cout << "Password2 >>";
        std::cin.getline(password2,12, '\n');
        if(strcmp(password2, "C plus plus") == 0){
            std::cout << "Correct password!" << std::endl;
            break;
        }
        else
            std::cout << "Password is incorrect!!!" << std::endl;
    }


    return 0;

}