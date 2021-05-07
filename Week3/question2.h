#include <iostream>
#include <vector>
 
typedef std::vector<std::vector<int>> Vec_2;

// クラス宣言
class MATRIX
{
public:
    MATRIX();
    ~MATRIX();
    void create_matrix(Vec_2& matrix, int raw, int colomn);
    void create_matrix_allzero(Vec_2& matrix, int raw, int colomn);
    void print_matrix(Vec_2 matrix);
    void matrix_multiplication(Vec_2 matrix_1, Vec_2 matrix_2, Vec_2& result_matrix);
};
