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

// Remove Duplicates from sorted Linkedlist
void removeDup(struct Node *head){
    struct Node *p =head;
    struct Node *q = head->next;
    while (q != NULL){
        if(p->data != q->data){
            p = q;
            q = q->next;
        }else{
            p->next = q->next;
            free(q);
            q = p->next;
        }
    }
    

}


int main(){
    int A[] ={3,4,4,4,5,5,7,7,8,14};
    //int B[] = {1,1,1};
    create(A, 10);
    printf("Original LinkedList :\n");
    display(first);
    printf("\n");
    removeDup(first);
    printf("Remove Duplicates: \n");
    display(first);

}