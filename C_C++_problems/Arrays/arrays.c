#include<stdio.h>

int main(){
    int A[5];
    int B[5] = {1,2,3,4,5};
    int C[10] = {2,3,4};
    int D[5] = {0};
    int E[] = {2,4,3,6,7,22};
    for(int i=0;i<5;i++){
        printf("A: %d\n", A[i]);

    }
    
    for(int i=0;i<5;i++){
        printf("B: %d\n",B[i]);

    }  

    for(int i=0;i<10;i++){
        printf("C: %d\n",C[i]);

    }  
    for(int i=0;i<6;i++){
        printf("D: %d\n", D[i]);

    }

    for(int i=0;i<6;i++){
        printf("E: %d\n", E[i]);

    }

    int F[5];
    // Address of array 
    for(int i=0;i<5;i++){
        printf("%u\n", &F[i]);
    }

}