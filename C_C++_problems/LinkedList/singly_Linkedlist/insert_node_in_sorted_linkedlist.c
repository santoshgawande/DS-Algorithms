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

// 

// Insert Node at sorted position in Sorted Linkedlist
void insert(struct Node *head, int x){
    struct Node *t, *p=head, *q= NULL;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;
    if(first == NULL){
        first=t;
    }else{
        while(p!= NULL && p->data > x){
            q =p;
            p = p->next;
        }
        // if p is a first node 
        if(first == p){
            t->next = first;
            first = t;

        }else{
            t->next = q->next;
            q->next = t;
        }
      
    }
    
}


int main(){
    int A[] ={3,4,5,7,8,14};
    create(A, 6);
    printf("Original LinkedList :\n");
    display(first);
    printf("\n");
    insert(first, 9);
    printf("After Inserting at sorted pos \n ");
    display(first);

}