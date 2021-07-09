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
int delete(struct Node *head, int index){
    struct Node *q=NULL, *p=head;
    int x = -1, i;
    if(index == 1){
        q= first;
        x = first->data;
        first = first->next;
        free(q);
        return x;
    }else if(index> 1){
      
        for(int i=0;i<index-1;i++){
            q = p;
            p = p->next;
        }

        q->next = p->next;
        x =p->data;
        free(q);
    
        return x;
        
    }else{
        return -1;
    }
}

int main(){
    int A[] ={3,4,5,7,8,14};
    create(A, 6);
    printf("Original LinkedList :\n");
    display(first);
    printf("\n");
    printf("After Deleting element  %d at position %d \n", delete(first, 1), 1);
    display(first);

}