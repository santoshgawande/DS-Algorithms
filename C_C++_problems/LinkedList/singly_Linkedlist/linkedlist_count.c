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
    while(p!=NULL){
        printf("%d ", p->data);
        p = p->next;
    }
}

int count(struct Node *p){
    if(p!=NULL){
        return 1+count(p->next);
    }else{
        return 0;
    }
}

// Iterative Count 

int IterCount(struct Node *p){
    int c=0;
    while(p!=NULL){
        c+=1;
        p = p->next;
    }
    return c;
}

int main(){
    int A[] ={3,4,5,7,8,14};
    create(A, 6);
    display(first);
    printf("\nLinkedlist count : %d\n", count(first));
    printf("\n Iterative Count : %d\n", IterCount(first));

}