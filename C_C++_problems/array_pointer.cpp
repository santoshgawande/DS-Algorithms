#include<iostream>
using namespace std;

int main(){
    int a[5] = {4,56,3,6,2};
    int *p;
    p=a;
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
        // using pointer 
        cout<<"using pointer to array:"<<p[i]<<endl;
    
    }
    return 0;
}
