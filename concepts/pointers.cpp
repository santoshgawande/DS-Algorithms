#include<iostream>
using namespace std;

int main(){
    int a=10;
    int b[6]={2,4,6};
    int *arr;
    int *p;

    int *ap;
    // allocate memory using new like malloc in c
    ap = new int[6];

    // no need of & beacuse it is array
    arr =b;
    //refrencing 
    p=&a;
    cout<<a;
    //defrencing
    cout<<*p;
    // delete dynamic memory which allocated using new
    delete [] ap;

  return 0;
}