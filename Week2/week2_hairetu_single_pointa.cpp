#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#define N 3

using namespace std;

int create_matrix(int *matrix){
    
    int i,j;
    
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            matrix[i * N + j] = j+i;
            printf("[%d][%d]:%d ",i,j,matrix[i * N + j]);
        }
        printf("\n");
    }

    printf("\n");

    return 0;

}

int create_matrix_allzero(int *matrix){
    
    int i,j=0;
    
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            matrix[i * N + j] = 0;
            printf("[%d][%d]:%d ",i,j,matrix[i * N + j]);
        }
        printf("\n");
    }
    
    return 0;

}

int matrix_multiplication(int *matrix1, int *matrix2, int *result_matrix){
    
    int i,j,k;
    
    for(k=0;k<N;k++){
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                result_matrix[i * N + k] += matrix1[i * N + j] * matrix2[j * N + k];
                //printf("bbbbbbbbbbb:%d\n",create_matrix1[i][j]);
                //printf("bbbbbbbbbbbc:%d\n",create_matrix2[j][k]);
                //printf("aaaa:%d\n",result_matrix[i][k]);
            }
            printf("[%d][%d]:%d\n",i,k,result_matrix[i * N + k]);
        }
    
    }

    printf("\n");

    return 0;
}

void file_output(int *ptr_matrix){

    int i,j;
    ofstream fp("result.txt", ios::in | ios::ate);

    fp << "make matrix\n";
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            fp << "[" << i << "]";
            fp << "[" << j << "]" << ";";
            fp << ptr_matrix[i * N + j] << "\n";
        }
        
    }

    fp.close();

    return;

}

int main(void){
    
    int i,j,k=0;
    int result_matrix[N][N];
    int matrix1[N][N];
    int matrix2[N][N];
    int *ptr_matrix1 = (int *)matrix1;
    int *ptr_matrix2 = (int *)matrix2;
    int *ptr_result_matrix = (int *)result_matrix;

    create_matrix(ptr_matrix1);
    create_matrix(ptr_matrix2);
    create_matrix_allzero(ptr_result_matrix);

    matrix_multiplication(ptr_matrix1, ptr_matrix2, ptr_result_matrix);

    ofstream("result.txt");
    file_output(ptr_matrix1);
    file_output(ptr_matrix2);
    file_output(ptr_result_matrix);

    return 0;

}