#include<stdio.h>

int func(int n){
    if(n>100){
        return n-10;
    }else{
        return func(func(n+11));
    }
}


int main(){
    int res = func(100);
    printf("%d \n", res);
    return 0;
}