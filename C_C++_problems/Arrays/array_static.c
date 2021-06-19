#include<stdio.h>
#include<stdlib.h>
int main(){
    // Static Array. it store in stack
    int A[5] ={3,4,5,6,7};

    int *p;
    int i;
    // It is a dynamic Array. It is stored in Heap'
    // We must have pointer to access array from heap
    // malloc function return void pointer si we have to typecast it
    p=(int *)malloc(5*sizeof(int));
    p[0]=3;
    p[1]=5;
    p[2]= 6;
    p[3]=9;
    p[4] = 11;
    for(i=0;i<5;i++)
        printf("%d ", A[i]);

    printf("\n");
    for(i=0;i<5;i++)
        printf("%d ", p[i]);

}