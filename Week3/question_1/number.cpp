#include "number.hpp"
void Number_week3::set()
{
    std::cout << "数字を入力してください" << std::endl;
    std::cin >> num_;
}

void Number_week3::get()
{
    std::cout << "あなたが入力した数字は　" << "num = " << num_ << " です。" << std::endl;
}

/*int main(int argc, char** argv)
{
    Number_week3 num_week;
    num_week.set();
    num_week.get();
    return 0;
}*/
