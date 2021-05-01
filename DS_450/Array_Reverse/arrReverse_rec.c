#include<stdio.h>
// Time : O(n)
//  Print 
void showArr(int a[],int n){
     // Print Array
    for(int j=0;j<n;j++){
        printf("%d ", a[j]);
    }
}

void reverseArr(int a[],int start, int end){
    int temp;
    if(start>=end){
        return ;

    }else{

        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
       reverseArr(a, start+1, end-1);

    }    
}


int main(){
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Before reverse:\n");
    showArr(a,n);
    reverseArr(a, 0, n-1);
    printf("\nAfter reverse:\n");
    showArr(a,n);
    return 0;
}