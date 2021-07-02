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

// Insert Node at given position 
void insert(struct Node *head, int pos, int x){
    struct Node *t, *p;
    if(pos == 0){
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        t->next = head;
    }else if( pos > 0){
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        p = head;
        for(int i=0;i<pos-1 && p;i++){
            p = p->next;
        }
        if(p){
            t->next = p->next;
            p->next = t;
        }
    }
}


int main(){
    int A[] ={3,4,5,7,8,14};
    create(A, 6);
    printf("Original LinkedList :\n");
    display(first);
    printf("\n");
    insert(first, 2, 66);
    printf("After Inserting at pos %d node data is %d\n ", 2, 66);
    display(first);

}