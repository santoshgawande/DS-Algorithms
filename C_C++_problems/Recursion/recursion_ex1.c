#include<stdio.h>

int func(int n){
    if(n>0){
        return func(n-1)+n;
    }
    return 0;
}

int main(){
    int r;
    r=func(5);
    printf("%d", r);

}