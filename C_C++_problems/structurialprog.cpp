#include<iostream>
#include<stdio.h>

using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void initialize(Rectangle *r, int l, int b){
    r->length = l;
    r->breadth = b;
}
int area(struct Rectangle r){
    return r.length * r.breadth;
}

// In C++ struct is no needed to write it here like in C language.
int perimeter(Rectangle r){
    int p;
    p = 2*(r.length*r.breadth);
    return p;
}

int main(){
    Rectangle r = {0,0};
    int l,b;
    printf("Enter Length and Breadth\n");
    // cin>>r.length>>r.breadth;
    cin>>l>>b;
    initialize(&r,l,b);
    int a = area(r);
    int p = perimeter(r);

    printf("Area=%d\nPerimeter=%d\n", a, p);

}