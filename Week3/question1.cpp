#include <iostream>
#include "sample.h"

int main(){
    Number_week3 number;
    int num;

    std::cout << "input integer" << endl;
    std::cin >> num;

    number.set(num);
    
    std::cout << "you type number is:" << number.get() << endl;

    return 0;
}
