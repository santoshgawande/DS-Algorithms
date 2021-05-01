#include<stdio.h>

//  Print 
void showArr(int a[],int n){
     // Print Array
    for(int j=0;j<n;j++){
        printf("%d ", a[j]);
    }
}

void reverseArr(int a[], int n){
    int temp;
    int start=0, end=n-1;
    while(start<end){
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
   
}


int main(){
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Before reverse:\n");
    showArr( a,n);
    reverseArr(a, n);
    printf("\nAfter reverse:\n");
    showArr( a,n);


return 0;
}