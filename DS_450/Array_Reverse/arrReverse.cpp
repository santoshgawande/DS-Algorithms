#include iostream.h

//  Print 
void showArr(int a[],int n){
     // Print Array
    for(int j=0;j<n;j++){
        printf("%d ", a[j]);
    }
}

void reverseArr(int a[], int n){
    int i, temp=0;
    for(i=0;i<n;i++){
        temp = a[i];
        a[i] = a[n-1];
        a[n-1] = temp;
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