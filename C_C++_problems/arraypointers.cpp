#include<iostream>
using namespace std;

int main(){
    int *p;
    // in c++ it worked like malloc
    p=new int[5];

    p[0] = 10,p[1] = 15, p[2] = 20, p[3] = 30, p[4] = 50;

    for(int i=0;i<5;i++){
        cout<<p[i]<<endl;
        // using pointer 
        cout<<"using pointer to array:"<<p[i]<<endl;
    
    }

    // delete []
    delete [] p;
    free (p);
    return 0;
}
