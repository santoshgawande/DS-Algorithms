#include<stdio.h>

int sum(int n){
    if(n==0){
        return 0;
    }
        return sum(n-1)+n;

}

int iterativeSum(int n){
    int i, sum=0;
    for(i=0;i<n;i++){
        sum = sum+i;
    }
    return sum;
}

int main(){
    int recsum = sum(5);
    int itesum = sum(5);
    printf("Recursive Sum :%d\n", recsum);
    printf("Iterative Sum :%d\n", itesum);
    return 0;
}