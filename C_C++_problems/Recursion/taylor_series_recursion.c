#include<stdio.h>

double taylor(int x, int n){
    
    static double p=1, f=1;
    double r;
    if(n == 0){
        return 1;
    }else{
        r = taylor(x, n-1);
        p = p*x;
        f = f*n;

        return r+p/f;

    }
}

// Optimize Taylor Func

double Itertaylor(int x, int n){
    double s=1;
    int i;
    double num=1;
    double den = 1;

    for(i=1;i<=n;i++){
        num*= x;
        den*=i;
        s += num/den;
    }
    return s;
   
}

double optTaylorRec(int x, int n){
    static double s;
    if(n == 0){
        return s;
    }
    s = 1+x*s/n;
    return optTaylorRec(x, n-1);
}

int main(){
    printf("%f\n", taylor(3, 10));
    printf("%f\n ", Itertaylor(3, 10));
    printf("%f\n", optTaylorRec(3, 10));

    return 0;
}