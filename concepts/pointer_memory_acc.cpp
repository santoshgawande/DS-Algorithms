#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int bredth;
    char x;
};

int main(){   
    int *p1;
    float *p2;
    char *p3;
    double *p4;
    struct Rectangle *p5;
    // all datatype are taking highest byte for pointers i.e. 8
    cout<<"sizeof(p1) :"<<sizeof(p1)<<endl;
    cout<<"sizeof(p2) :"<<sizeof(p2)<<endl;
    cout<<"sizeof(p3) :"<<sizeof(p3)<<endl;
    cout<<"sizeof(p4) :"<<sizeof(p4)<<endl;
    cout<<"sizeof(p5) :"<<sizeof(p5)<<endl;
 

  return 0;
}