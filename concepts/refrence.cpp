#include<iostream>
using namespace std;

int main(){   
    int a= 10;
    // reference of a or alias and it is not consume memory
    int &r = a;
    cout<<"a : "<<a<<endl;
    cout<<"r refrers to a:"<<r<<endl;
    cout<<"sizeof(r):"<<sizeof(r)<<endl;

    return 0;
}