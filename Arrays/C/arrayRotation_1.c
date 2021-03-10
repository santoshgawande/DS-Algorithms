#include<stdio.h>

void arrRotate(int a[], int d, int n){
    int i, temp[d];
    for(i=0;i<n;i++){
        if(i<d){
            temp[i] = a[i];
            printf("temp[i] :%d\n", temp[i]);


        }
        a[i] = a[i+1];
        
    }

    for(int j=0;j<d;j++){
        printf("t %d ", temp[j]);
    }
    printf("\n");
    for(int j=0;j<=n;j++){
        printf("%d ", a[j]);
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",len);
    arrRotate(arr, 2, len);
    
    return 0;
}