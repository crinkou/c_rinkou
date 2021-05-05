#include <iostream>
#define N 5

int pointa_set(int* a){
    int i ;

    for(i=0; i<N; i++){
        *(a+i) = i ;
    }

    return 0 ;
}

int main(void){
    int a[N] = {0} ;
    int i ;

    pointa_set(a) ;
    
    for(i=0; i<N; i++){
        printf("a[%d]：%d\n", i, a[i]) ;
    }
    
    return 0 ;
}