#include <iostream>
using namespace std;

int main() {
    int *p;

    p = new int;
    if(!p){
        cout<< "CANNOT ALLOCATE MEMORY";
        return 0;
    }

    *p = 5; // 할당받은 공간에 5기록
    int n = *p;
    cout << "*p = " << *p << endl;
    cout << "n = " << n << endl;

    delete p;
}