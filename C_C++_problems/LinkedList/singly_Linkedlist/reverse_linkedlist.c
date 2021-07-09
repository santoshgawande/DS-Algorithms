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


// Reverse LinkedList using Auxillary Array 
void ReverseArr(struct Node *head){
    int *A, i=0;
    A =(int *)malloc(sizeof(int)*count(head));
    struct Node *q = head;
    while (q != NULL){
        A[i] = q->data;

        q = q->next;
        i++;
   
    }
    q = head;
    i--;
    while(q!=NULL){
        q->data = A[i];
        i--;
        q= q->next;
    }

}

// Reverse Linkedlist using Sliding pointers

void Reverse2(struct Node *head){
    struct Node *p = head;
    struct Node *r = NULL;
    struct Node *q=NULL;
    while(p!=NULL){
        r = q;
        q=p;
        p=p->next;
        q->next = r;  

    }
    first = q;
}

void ReverseRec(struct Node *q, struct Node *p){
    if(p!=NULL){
        ReverseRec(p, p->next);
        p->next = q;
    }else{
        first = q;
    }
}


int main(){
    int A[] ={3,4,5,7,8,14};
    create(A, 6);
    printf("Original LinkedList :\n");
    display(first);
    printf("\n");
    printf("Reverse LinkedList using Array \n");
    ReverseArr(first);
    display(first);
    printf("\nReverse LinkedList using Sliding Pointers \n");
    Reverse2(first);
    display(first);
    printf("\nReverse LinkedList using Recursive Defination \n");
    struct  Node *q = NULL;
    ReverseRec(NULL, first);
    display(first);



}