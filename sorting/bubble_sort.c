#include<stdio.h>

int* bubbleSort(int a[], int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d %d \n",i,j);
            if(a[i]<a[j]){
                printf("a[%d] = %d\t", i, a[i]);
                printf("a[%d] = %d\n", j, a[j]);
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return a;
}

int main(){
    int a[] ={5,8,4,2,11,3,1};
    int n = sizeof(a)/sizeof(a[0]);
    int *b;
    b=bubbleSort(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }
    return 0;
}