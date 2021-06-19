#include<stdio.h>

// Time : O(2^n)
int fib(int n){
    if(n<=1){
        return n;
    }else{
        return fib(n-1)+fib(n-2);
    }
}

// Iterative Fibonacci. Time: O(n)
int itfib(int n){
    int i, p1=0, p2=1, s=0;
    if(n<=1){
         return n;
    }

    for(i=1;i<n;i++){
        s = p1+p2;
        p1 = p2;
        p2 = s;
    }
    return s;
}
// Initialize Array to store fibonacci result 
int f[10];
// Fibonacci using Memoization
int mfib(int n){
    if(n<=1){
        f[n] = n;
        return n;
    }else{
        if(f[n-1] == -1){
            f[n-1] = mfib(n-1);
        }
        if(f[n-2] == -1){
            f[n-2] = mfib(n-2);
        }
        f[n] = f[n-1]+f[n-2];
        return f[n-1]+f[n-2];
    }
    
}

int main(){
    printf("%d\n", fib(10));
    printf("%d\n",itfib(10));

    for(int i=0;i<10;i++){
        f[i] = -1;
    }
    printf("memoization :%d\n", mfib(10));
}
