#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <vector>
#define RAW_1 3
#define COLUMN_1 4
#define RAW_2 4//　COLLUMN_1 == RAW_2が成り立たなければならない
#define COLUMN_2 5

int main(void)
{
    std::vector<std::vector<int>> matrix_1;
    std::vector<std::vector<int>> matrix_2;
    std::vector<std::vector<int>> result_matrix;
    
    srand((unsigned int)time(NULL));

    std::cout << "行列１" << std::endl;
    for (int i = 0; i < RAW_1; i++) {//ここを関数化!!!
        std::vector<int> a1;
        for (int j = 0; j < COLUMN_1; j++) {
            int num_a1 = rand() % 10;
            a1.push_back(num_a1);
            std::cout << "a[" << i << "][" << j << "]:" << num_a1 << "      ";
        }
        std::cout << std::endl;
        matrix_1.push_back(a1);
    }

    std::cout << "行列２" << std::endl;
    for (int i = 0; i < RAW_2; i++) {//ここを関数化!!!
        std::vector<int> a2;
        for (int j = 0; j < COLUMN_2; j++) {
            int num_a2 = rand() % 10;
            a2.push_back(num_a2);
            std::cout << "b[" << i << "][" << j << "]:" << num_a2 << "      ";
        }
        std::cout << std::endl;
        matrix_2.push_back(a2);
    }

    for (int i = 0; i < RAW_1; i++) {
        std::vector<int> result;
        for (int j = 0; j < COLUMN_2; j++) {
            result.push_back(0);
        }
        result_matrix.push_back(result);
    }
    

    std::cout << "行列1 ×　行列2" << std::endl;
    for (int i = 0; i < RAW_1; i++) {//ここを関数化!!!
        for (int j = 0; j < COLUMN_2; j++) {
            for (int k = 0; k < RAW_2; k++) {
                result_matrix[i][j] += matrix_1[i][k] * matrix_2[k][j];
            }
            std::cout << "b[" << i << "][" << j << "]:" << result_matrix[i][j] << "      ";
        }
        std::cout << std::endl;
    }


}