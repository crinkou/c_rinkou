#include "matrix.hpp"

matrix_class::matrix_class() : count(0)
{
}

void matrix_class::create_matrix(Vec_2& matrix, int raw, int colomn)
{
    srand((unsigned int)time(NULL));
    for (int i = 0; i < raw; i++) {
        Vec_1 a1;
        for (int j = 0; j < colomn; j++) {
            int num_a1 = rand() % 10;
            a1.push_back(num_a1);
        }
        matrix.push_back(a1);
    }
}

void matrix_class::create_matrix_zero(Vec_2 &matrix, int raw, int colomn)
{
    for (int i = 0; i < raw; i++) {
        std::vector<int> a1;
        for (int j = 0; j < colomn; j++) {
            a1.push_back(0);
        }
        matrix.push_back(a1);   
    }
}

void matrix_class::print_matrix(Vec_2 matrix)
{
    count++;
    std::cout << "行列" << count << std::endl;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            std::cout << "b[" << i << "][" << j << "]:" << matrix[i][j] << "      ";
        }
        std::cout << std::endl;
    }
}

void matrix_class::multiplication_matrix(Vec_2 matrix_1, Vec_2 matrix_2, Vec_2 &matrix_result)
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
    matrix_class mclass;
    Vec_2 shokiti;
    for (int i = 0; i < 3; i++) {
        mclass.matrixs.push_back(shokiti);
    }
    
    mclass.create_matrix(mclass.matrixs[0], RAW_1, COLUMN_1);
    mclass.create_matrix(mclass.matrixs[1], RAW_2, COLUMN_2);
    mclass.create_matrix_zero(mclass.matrixs[2], RAW_1, COLUMN_2);
    mclass.multiplication_matrix(mclass.matrixs[0], mclass.matrixs[1], mclass.matrixs[2]);
    mclass.print_matrix(mclass.matrixs[0]);
    mclass.print_matrix(mclass.matrixs[1]);
    mclass.print_matrix(mclass.matrixs[2]);
    return 0;

}