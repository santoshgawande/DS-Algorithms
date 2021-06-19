#include<stdio.h>

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

int ifactorial(int n){
    int i, f=1;
    if(n==0){
        return 1;
    }else{

        for(i=1;i<n+1;i++){
            f=f*i;
        }
        return f;

    }
}

int main(){
    int res = factorial(5);
    int ires = ifactorial(5);
    printf("recursive factorial : %d\n", res);
    printf("iterative factorial :%d\n", ires);
    return 0;
}