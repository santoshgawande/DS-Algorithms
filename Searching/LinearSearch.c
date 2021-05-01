#include<stdio.h>

int LinearSearch(int a[],int n, int x){
    int i;
    for(i=0;i<n;i++)
        if(a[i] == x)
        return i;

    return -1;
}

int main(){
    int a[] ={10,50,30,70,80,20};
    int n= sizeof(a)/sizeof(a[0]);
    int x = 20;
    int result = LinearSearch(a, n,x);
    if(result == -1){
        printf("Element is not found");
    }else{
        printf("Element is found at %d index", result);
    }
}