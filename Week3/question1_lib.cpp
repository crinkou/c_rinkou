#include "question1_lib.h"

void Number_week3::set(int num){
    num_ = num;
}

int Number_week3::get(){
    return num_;
}

int main(){
    Number_week3 number;
    int num;

    std::cout << "input integer" << std::endl;
    std::cin >> num;

    number.set(num);
    
    std::cout << "you type number is:" << number.get() << std::endl;

    return 0;
}
