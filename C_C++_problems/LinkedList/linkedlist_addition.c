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

int RecurAdd(struct Node *head){
    if(head !=NULL){
        return (head->data +RecurAdd(head->next));
    }else{
        return 0;
    }
}

// Iterative Addition

int IterAdd(struct Node *head){
    int sum=0;
    while(head !=NULL){
        sum +=head->data;
        head = head->next;
    }
    return sum;
}
int main(){
    int A[] ={3,4,5,7,8,14};
    create(A, 6);
    display(first);
    printf("\nLinkedlist Sum using Recursion : %d\n", RecurAdd(first));
    printf("\n Iterative Sum  : %d\n", IterAdd(first));

}