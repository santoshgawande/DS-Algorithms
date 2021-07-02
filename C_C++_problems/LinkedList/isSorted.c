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

// Delete element from linkedlist
int issorted(struct Node *head){
    struct Node*p=head;
    int x = -1;
    while(p!=NULL){
        if(p->data < x){
            return 0;
        }else{
            x = p->data;
            p = p->next;
        }
    }
    return 1;
    
   
}

int main(){
    int A[] ={3,4,5,7,8,14};
    create(A, 6);
    printf("Original LinkedList :\n");
    display(first);
    printf("\n");
    printf("IsSorted %d \n", issorted(first));

}