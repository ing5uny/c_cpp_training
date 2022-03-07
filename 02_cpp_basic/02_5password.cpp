/*
*
* C++라는 문자열을 입력할때까지 ... 
* cstring를 사용함
*
*/

#include <iostream>
#include <cstring>

int main(){
    char password[11];
    std::cout << "If you want to quit, enter correct password" << std::endl;
    while(true){
        std::cout << "Password >>";
        std::cin >> password;
        if(strcmp(password, "C++") == 0){
            std::cout << "Correct password!" << std::endl;
            break;
        }
        else
            std::cout << "Passwoed is incorrect!!!" << std::endl;
    }

    return 0;

}