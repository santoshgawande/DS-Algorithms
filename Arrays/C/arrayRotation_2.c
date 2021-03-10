#include<stdio.h>
// Element Shift one by one from left to right in array
void RotateOneByOne(int a[],  int d, int n){
    int i, temp=a[0];
    for(i=0;i<n;i++){
        a[i] = a[i+1];
    }
    a[n-1] = temp;
    for(int j=0;j<n;j++){
        printf("%d ", a[j]);
    }
    
    
}


int main(){
    int arr[] = {1,2,3,4,5,6},i;
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",len);
    for(i=0;i<len;i++){
        RotateOneByOne(arr,2, len);
    }    
    return 0;
}