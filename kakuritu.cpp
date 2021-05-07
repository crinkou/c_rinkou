#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <fstream>
static int TYOUTEN = 2;

void create_tyoutenn(std::vector<int> &coupon)
{
    for (int i = 0; i < TYOUTEN; i++) {
        coupon.push_back(0);
    }
}

bool hanntei(std::vector<int> coupon)
{
    for (int i = 0; i < coupon.size(); i++) {
        if (coupon[i] == 0) {
            return false;
        }
    }
    return true;
}

int saikoro(std::vector<int>& coupon, int moto)
{
    int kazu;
    if (coupon[moto] == 0) {
        coupon[moto] = 1;
    }
    while (true) {
        kazu = rand() % TYOUTEN;
        if (kazu != moto) {
            break;
        }
    }
    return kazu;
}

void print_coupon(std::vector<int> coupon)
{
    for (int i = 0; i < coupon.size(); i++) {
        std::cout << coupon[i] << " ";
    }
    std::cout << std::endl;
}





void one_exec(int &count_sum)
{
    std::vector<int> coupon;
    create_tyoutenn(coupon);
    
    int index = rand() % TYOUTEN;
    int count = 0;
    while (true) {
        if (hanntei(coupon)) {
            break;
        }
        index = saikoro(coupon, index);
        count++;
    }
    count_sum += count;
   // std::cout << "count is " << count << std::endl;
}

double coupon_try()
{
    int average_num = 0;
    int try_num = 2000;
    double result;
    
    for (int i = 0; i < try_num; i++) {
        one_exec(average_num);
    }
    result = (double)average_num/try_num;
    std::cout << "平均は " << result << std::endl;
    return result;
}
int main()
{
    srand((unsigned char)time(NULL));
    std::ofstream ofs("/home/ericlab/OneDrive/ini.csv");
    ofs << 0 << "," << 0 << std::endl;
    ofs << 1 << "," << 1 << std::endl;
    double average;
    
    while (TYOUTEN < 10000)
    {
        average = coupon_try();
        std::cout << "現在" << TYOUTEN << "頂点" << std::endl;
        ofs << TYOUTEN << "," << average << std::endl;
        if (TYOUTEN < 100) {
            TYOUTEN++;
        }
        else {
            TYOUTEN+=100;
        }
        
    }
    return 0;
}