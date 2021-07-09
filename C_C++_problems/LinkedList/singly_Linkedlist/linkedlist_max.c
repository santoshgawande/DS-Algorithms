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

int RecurMax(struct Node *head){
    int max = -1;
    if(head ==NULL){
        return max;
    }else{
        max = RecurMax(head->next);

        if(max>head->data){
            return max;
        }else{
            return head->data;
        }
    }
}

// Iterative Addition

int IterMax(struct Node *head){
    int max=-1;
    while(head !=NULL){
        if(max < head->data){
            max=head->data;
            head = head->next;
        }

    }
    return max;
}
int main(){
    int A[] ={3,4,5,7,8,14};
    create(A, 6);
    display(first);
    printf("\nLinkedlist Max using Recursion : %d\n", RecurMax(first));
    printf("\n Iterative Max  : %d\n", IterMax(first));

}