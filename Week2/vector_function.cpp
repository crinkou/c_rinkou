#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <vector>
#define RAW_1 3
#define COLUMN_1 4
#define RAW_2 4//　COLLUMN_1 == RAW_2が成り立たなければならない
#define COLUMN_2 5

void create_matrix(std::vector<std::vector<int>> &matrix, int raw, int colomn)
{
    srand((unsigned int)time(NULL));
    for (int i = 0; i < raw; i++) {
        std::vector<int> a1;
        for (int j = 0; j < colomn; j++) {
            int num_a1 = rand() % 10;
            a1.push_back(num_a1);
        }
        matrix.push_back(a1);   
    }
}

void create_matrix_zero(std::vector<std::vector<int>> &matrix, int raw, int colomn)
{
    for (int i = 0; i < raw; i++) {
        std::vector<int> a1;
        for (int j = 0; j < colomn; j++) {
            a1.push_back(0);
        }
        matrix.push_back(a1);   
    }
}

void print_matrix(std::vector<std::vector<int>> matrix)
{
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            std::cout << "b[" << i << "][" << j << "]:" << matrix[i][j] << "      ";
        }
        std::cout << std::endl;
    }
}

void multiplication_matrix(std::vector<std::vector<int>> matrix_1, 
                            std::vector<std::vector<int>> matrix_2,
                            std::vector<std::vector<int>> &matrix_result)
{
    for (int i = 0; i < matrix_1.size(); i++) {
        for (int j = 0; j < matrix_2[i].size(); j++) {
            for (int k = 0; k < matrix_2.size(); k++) {
                matrix_result[i][j] += matrix_1[i][k] * matrix_2[k][j];
            }
        }
    }
}

int main()
{
    std::vector<std::vector<int>> matrix_1;
    std::vector<std::vector<int>> matrix_2;
    std::vector<std::vector<int>> result_matrix;
    create_matrix(matrix_1, RAW_1, COLUMN_1);
    create_matrix(matrix_2, RAW_2, COLUMN_2);
    create_matrix_zero(result_matrix, RAW_1, COLUMN_2);
    multiplication_matrix(matrix_1, matrix_2, result_matrix);

    std::cout << "行列１" << std::endl;
    print_matrix(matrix_1);

    std::cout << "行列２" << std::endl;
    print_matrix(matrix_2);

    std::cout << "結果は" << std::endl;
    print_matrix(result_matrix);
    return 0;
}