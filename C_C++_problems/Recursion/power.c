#include<stdio.h>
// Time : O{m^n}
int power(int m, int n){
    if(n == 0){
        return 1;
    }else{
        return m*power(m, n-1);
    }

}

//Optimize func
int opow(int m, int n){
    if(n==0){
        return 1;
    }
    if(n%2 == 0){
        return opow(m*m, n/2);
    }else{
        return m*opow(m*m, (n-1)/2);
    }
}

int main(){
    int p = power(3,4);
    // reduced multiplication
    int op = opow(3,4);
    printf("Rec power : %d\n", p);
    printf("Less multiplication Pow: %d\n", op);
    return 0;
}