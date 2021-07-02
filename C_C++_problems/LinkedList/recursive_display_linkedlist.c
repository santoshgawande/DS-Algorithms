#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[], int n){
    int i;
    struct Node *t, *last;
    first=(struct Node *)malloc(sizeof(struct Node));
    first->data =A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++){
        t =(struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }

}

void display(struct Node *p){
    if(p!=NULL){
        printf("%d ", p->data);
        display(p->next);
    }
}

// Reverse Order using Recursion
void ReverseDisplay(struct Node *p){
    if(p == NULL){
        return ;
    }else{
        ReverseDisplay(p->next);
        printf("%d ", p->data);
    }
}

int main(){
    int A[] ={3,4,5,7,8,14};
    create(A, 6);
    display(first);
    printf("\nReverse Order :\n");
    ReverseDisplay(first);

}