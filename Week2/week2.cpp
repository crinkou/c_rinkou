#include <iostream>
#include <vector>

#define N 5

int create_matrix(std::vector<std::vector<int>>& matrix){
    
    int i,j;
    
    for(i=0; i<matrix.size(); i++){
        for(j=0; j<matrix.size(); j++){
            matrix.at(i).at(j).push_back(i+j) ;
            printf("1;[%d][%d]:%d------",i,j,matrix[i][j]);
        }
        printf("\n");
    }

    return 0;

}

int create_matrix_allzero(std::vector<std::vector<int>>& matrix){
    
    int i,j;
    
    for(i=0; i<matrix.size(); i++){
        for(j=0; j<matrix.size(); j++){
            matrix[i][j]=0;
            printf("1;[%d][%d]:%d------",i,j,matrix[i][j]);
        }
        printf("\n");
    }

    return 0;

}

int main(void){
    
    int i, j, k ;
    std::vector<std::vector<int>> matrix1(N, std::vector<int>(N)) ;
    std::vector<std::vector<int>> matrix2(N, std::vector<int>(N)) ;
    std::vector<std::vector<int>> result_matrix(N, std::vector<int>(N)) ;\

    create_matrix(matrix1) ;
    create_matrix(matrix2) ;
    create_matrix(result_matrix) ;
    
    for(k=0;k<N;k++){
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                result_matrix[i][k]+=matrix1[i][j]*matrix2[j][k];
                //printf("bbbbbbbbbbb:%d\n",create_matrix1[i][j]);
                //printf("bbbbbbbbbbbc:%d\n",create_matrix2[j][k]);
                //printf("aaaa:%d\n",result_matrix[i][k]);
            }
            printf("%d,%d:%d\n",i,k,result_matrix[i][k]);
        }
    
    }
    
    return 0;

}