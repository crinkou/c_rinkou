#include <stdio.h>
#define N 3


int main(void){
    
    int i,j,k=0;
    int create_matrix1[N][N];
    int create_matrix2[N][N];
    int result_matrix[N][N];

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            create_matrix1[i][j]=j+i;
            printf("1;[%d][%d]:%d------",i,j,create_matrix1[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            create_matrix2[i][j]=i+j;
            printf("2;[%d][%d]:%d------",i,j,create_matrix2[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            result_matrix[i][j]=0;
            //printf("ii;%d\n",create_matrix2[i][j]);
        }
    }
    
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