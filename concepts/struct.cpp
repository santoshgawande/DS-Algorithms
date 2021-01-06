#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int bredth;
    char x;
//it it global variable
}r1,r2,r3;

// declare outside variable
struct Rectangle r5;

int main(){
    struct Rectangle r1={10,34};
    // warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘long unsigned int’ [-Wformat=]
    //printf("%d", sizeof(r1));
    //It takes extra byte for size called padding
    printf("sizof: %ld\n", sizeof(r1));
    cout<<r1.length<<endl;
    cout<<r1.bredth<<endl;   
    return 0;
}