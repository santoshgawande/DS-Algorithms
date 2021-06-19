#include<iostream>
#include<stdio.h>

int area(int length, int breadth){
    return length*breadth;
}

int perimeter(int length, int breadth){
    int p;
    p = 2*(length*breadth);
    return p;

}

int main(){

    int length, breadth;
    printf("Enter Length and Breadth:\n");
    std::cin>>length>>breadth;

    int a = area(length, breadth);
    int p = perimeter(length, breadth);
    printf("Area =%d\n Perimeter=%d\n", a,p);
    return 0;

}