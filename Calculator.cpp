#include <iostream>

using namespace std;

#include "Calculator.h"
#include "Adder.h"

void Calculator::run(){
    cout << "Input 2 numbers >>";
    int a, b;
    cin >> a >> b;
    Adder adder(a, b);
    cout << adder.process();

}