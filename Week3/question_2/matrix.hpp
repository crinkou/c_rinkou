#ifndef MATRIX_
#define MATRIX_
#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <vector>
#define RAW_1 3
#define COLUMN_1 4
#define RAW_2 4//　COLLUMN_1 == RAW_2が成り立たなければならない
#define COLUMN_2 5

typedef std::vector<std::vector<int>> Vec_2;
typedef std::vector<int> Vec_1;
typedef std::vector<std::vector<std::vector<int>>> Vec_3;
class matrix_class
{
public:
    matrix_class();
    void print_matrix(Vec_2);
    void create_matrix(Vec_2&, int, int);
    void create_matrix_zero(Vec_2&, int, int);
    void multiplication_matrix(Vec_2, Vec_2, Vec_2&);
    Vec_3 matrixs;
private:
    int count;
};
#endif