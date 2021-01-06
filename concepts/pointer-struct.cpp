#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

// struct is  manadatory in C 
//struct Rectangle r5;


int main(){
    //struct is not manadatory in C++
    Rectangle r1={6,8};
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;

    // pointer to structure
    Rectangle *p=&r1;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;

    Rectangle *p1;
    p1 = new Rectangle;
    struct Rectangle *p1;
    p1->length = 45;
    p1->breadth = 78;
    cout<<p1->length<<endl;
    cout<<p1->breadth<<endl;


    return 0;
}