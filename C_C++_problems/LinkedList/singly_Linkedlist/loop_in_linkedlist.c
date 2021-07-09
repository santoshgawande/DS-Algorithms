#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
}*first=NULL, *second=NULL, *third=NULL;

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


// slow and fast pointer
int isloop(struct Node *head){
    struct Node *p, *q;
    p=q=head;
    do{
        p = p->next;
        q = q->next;
        if(q!=NULL){
            q= q->next;

        }else{
            return 0;
        }
    }while(p && q && p!=q);

    if(p== q){
        return 1;
    }else{
        return 0;
    }

}

int main(){
    int A[] ={3,4,5,7,8,14};
    create(A, 6);
    struct Node *t1, *t2;
    printf(" LinkedList :\n");
    display(first);
    printf("\n");
    t1 = first->next->next;
    t2 = first->next->next->next->next;
    t2->next = t1;

    printf("\nLinkedList has loop %d:\n", isloop(first));


}