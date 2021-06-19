#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
    // Array inside in heap
    int *p;
    p = (int *)malloc(sizeof(int));
    p[0] = 10,p[1] = 15, p[2] = 20, p[3] = 30, p[4] = 50;

    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;

    }
    free(p);

    return 0;
}