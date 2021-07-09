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

// 
void create2(int B[], int n){
    int i;
    struct Node *t, *last;
    second=(struct Node *)malloc(sizeof(struct Node));
    second->data =B[0];
    second->next=NULL;
    last=second;

    for(int i=1;i<n;i++){
        t =(struct Node*)malloc(sizeof(struct Node));
        t->data = B[i];
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


void merge(struct Node * p, struct Node *q){
    struct Node *last;
    if(p->data < q->data){
        third = last = p;
        p=p->next;
        third->next = NULL;
    }else{
        third = last = q;
        q = q->next;
        third->next = NULL;
    }

    while(p!=NULL && q!=NULL){
          if(p->data < q->data){
            last ->next= p;
            last = p;
            p=p->next;
            last->next = NULL;
        }else{
            last ->next= q;
            last = q;
            q=q->next;
            last->next = NULL;
        }
    }
    if(p){
        last->next = p;
    }
    if(q){
        last->next = q;
    }
}

int main(){
    int A[] ={3,4,5,7,8,14};
    int B[] ={2,6,9,10,15,16};

    create(A, 6);
    create2(B, 6);
    printf(" LinkedList 1:\n");
    display(first);

    printf("\n");
    printf("LinkedList 2:\n");
    display(second);
    printf("\n");
    
    printf("\nMerge 2 LinkedLists:\n");
    merge(first, second);
    display(third);


}