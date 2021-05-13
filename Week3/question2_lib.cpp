#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <vector>
#include <question2_lib.h>
#define RAW_1 3
#define COLUMN_1 4
#define RAW_2 4 //　COLLUMN_1 == RAW_2が成り立たなければならない
#define COLUMN_2 5

typedef std::vector<std::vector<int>> Vec_2;

MATRIX::MATRIX(){
    std::cout << "matrix_class_start" << std::endl;
}

MATRIX::~MATRIX(){
    std::cout << "matrix_class_finish" << std::endl;
}

void MATRIX::create_matrix(Vec_2& matrix, int raw, int colomn){
    srand((unsigned int)time(NULL));

    for (int i = 0; i < raw; i++) {
        std::vector<int> a1;
        for (int j = 0; j < colomn; j++) {
            int num_a1 = rand() % 10;
            a1.push_back(num_a1);
            std::cout << "a[" << i << "][" << j << "]:" << num_a1 << "      ";
        }
        std::cout << std::endl;
        matrix.push_back(a1);
    }
    return ;
}

void MATRIX::create_matrix_allzero(Vec_2& matrix, int raw, int colomn){
    for (int i = 0; i < raw; i++) {
        std::vector<int> result;
        for (int j = 0; j < colomn; j++) {
            result.push_back(0);
        }
        matrix.push_back(result);
    }
    return ;
}

void MATRIX::print_matrix(Vec_2 matrix)
{
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            std::cout << "b[" << i << "][" << j << "]:" << matrix[i][j] << "      ";
        }
        std::cout << std::endl;
    }
}

void MATRIX::matrix_multiplication(Vec_2 matrix_1, Vec_2 matrix_2, Vec_2& result_matrix){
    std::cout << "行列1 ×　行列2" << std::endl;
    for (int i = 0; i < matrix_1.size(); i++) {
        for (int j = 0; j < matrix_2[i].size(); j++) {
            for (int k = 0; k < matrix_2.size(); k++) {
                result_matrix[i][j] += matrix_1[i][k] * matrix_2[k][j];
            }
            std::cout << "b[" << i << "][" << j << "]:" << result_matrix[i][j] << "      ";
        }
        std::cout << std::endl;
    }
    return ;
}

int main(void)
{
    Vec_2 matrix_1;
    Vec_2 matrix_2;
    Vec_2 result_matrix;

    MATRIX mat;

    std::cout << "行列１" << std::endl;
    mat.create_matrix(matrix_1, RAW_1, COLUMN_1);

    std::cout << "行列2" << std::endl;
    mat.create_matrix(matrix_2, RAW_2, COLUMN_2);

    mat.create_matrix_allzero(result_matrix, RAW_1, COLUMN_2);

    mat.matrix_multiplication(matrix_1, matrix_2, result_matrix);

    return 0;
}