#include<stdio.h>

struct Rectangle{
    int length;
    int breadth;
};



int main(){
    //struct is manadatory in C++
    struct Rectangle r1={6,8};

    // access variable from struct
    printf("r1.length :",r1.length);
    printf("r1.breadth :",r1.breadth);

    // pointer to structure
    struct Rectangle *p=&r1;
   printf("p->length :",p->length);
    printf("p->breadth :",p->breadth);

    struct Rectangle *p1;
    p1 = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p1->length = 45;
    p1->breadth = 78;

    return 0;
}