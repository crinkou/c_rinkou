#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3


int main(void){
    
    int i,j,k=0;
    int create_matrix1[N][N];
    int create_matrix2[N][N];
    int result_matrix[N][N] = {0};

    srand((unsigned int)time(NULL));//乱数の初期化、現在の時刻を取得し、それを引数に使うことでよりランダムな初期化になる

    printf("行列a\n");
    for(i=0;i<N;i++){
        printf("  ");
        for(j=0;j<N;j++){
            create_matrix1[i][j]=rand() % 10;
            printf("a[%d][%d]:%d----",i,j,create_matrix1[i][j]);
        }
        printf("\n");
    }
    printf("行列b\n");
    for(i=0;i<N;i++){
        printf("  ");
        for(j=0;j<N;j++){
            create_matrix2[i][j]=rand() % 10;
            printf("b[%d][%d]:%d----",i,j,create_matrix2[i][j]);
        }
        printf("\n");
    }

   
    printf("行列の掛け算は");
    for(k=0;k<N;k++){
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                result_matrix[i][k]+=create_matrix1[i][j]*create_matrix2[j][k];
                //printf("bbbbbbbbbbb:%d\n",create_matrix1[i][j]);
                //printf("bbbbbbbbbbbc:%d\n",create_matrix2[j][k]);
                //printf("aaaa:%d\n",result_matrix[i][k]);
            }
            printf("%d,%d:%d\n",i,k,result_matrix[i][k]);
        }
    
    }


}