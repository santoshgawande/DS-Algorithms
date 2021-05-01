#include<stdio.h>
// Time : O(n)
struct pair{
    int min;
    int max;
};

struct pair getMinMax(int a[], int n){
    int i;
    struct pair minmax ;
    if(n == 1){
        minmax.max = a[0];
        minmax.min = a[0];
    }else{
        if(a[0] > a[1]){
            minmax.min = a[1];
            minmax.max = a[0];

        }else{
            minmax.min = a[0];
            minmax.max = a[1];
            
        }
        for(i=2;i<n;i++){
            if(minmax.min > a[i]){
                minmax.min = a[i];
            }else if(minmax.max < a[i]){
                minmax.max = a[i];
            }
        }
        
    }  
    return minmax;  
}

void dispArr(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
}

int main(){
    int a[] = {3,4,111,2,1,55};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Input :");
    dispArr(a,n);
    struct pair op = getMinMax(a, n);
    printf("\nMax :%d\n", op.max);
    printf("Min :%d\n",op.min);
}


