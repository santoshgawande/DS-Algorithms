#include<stdio.h>
// Print Smallest Element from given Array.
int smallArr(int a[], int l, int r){
    int temp = a[0];
    int i;
    for(i=0;i<r;i++){
        if(temp>a[i]){
            temp = a[i];
        }
    }
    return temp;
}

void printArr(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
}


int main(){
    int a[] = {56,54,33,333,23, 6,8,9};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Array is :\n");
    printArr(a, n);
    int elem = smallArr(a,0,n);
    printf("\nsmallest Element :%d\n",elem);
    return 0;
}