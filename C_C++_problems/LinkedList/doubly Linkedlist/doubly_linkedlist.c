#include<stdio.h>
#include<stdlib.h>

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[], int n){
    struct Node *t, *last;
    first =(struct Node *)malloc(sizeof(struct Node));
    first->prev = NULL;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(int i=1;i<n;i++){
        t = (struct Node *)malloc(sizeof(struct Node));
        t->prev = last;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }

}

void display(struct Node *p){
    while(p){
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int length(struct Node *p){
    int len=0;
    while(p){
        len++;
        p = p->next;
    }
    return len;
}

void Insert(struct Node *p, int index, int x){
    struct Node *t;
    int i;
    if(index<0 || index> length(p)){
        return ;
    }
    if(index == 0){
        t = (struct Node *)malloc(sizeof(struct Node));
        t->prev = NULL;
        t->data = x;
        t->next = first;
        first = t;
    }else{
        for(i=0;i<index-1;i++){
            p =p->next;
        }
        t = (struct Node *)malloc(sizeof(struct Node));
        t->prev = p;
        t->data = x;
        t->next = p->next;
        if(p->next){
            p->next->prev = t;
            p->next = t;
        }
    }
}

int delete(struct Node *p, int index){
    struct Node *q;
    int x, i;
    if(index<1 || index > length(p)){
        return -1;
    }
    if(index == 1){
        first= first->next;
        if(first){
            first->prev =NULL;
        }
        x = p->data;
        free(p);
    }else{
        for(i=0;i<index-1;i++){
            p =p->next;
        }
        p->prev->next = p->next;
        if(p->next){
            p->next->prev= p->prev;
        }
        x = p->data;
        free(p);
    }
    return x;
}

void reverse(struct Node *p){
    struct Node *temp;
    while(p!=NULL){
        temp= p->next;
        p->next = p->prev;
        p->prev = temp;
        p = p->prev;
        if(p!= NULL && p->next == NULL){
            first = p;
        }
    }
}

int main(){
    int A[] ={12,14,15,16,17,19};
    create(A, 6);
    printf("Doubly Linkedlist :\n");
    Insert(first, 2, 100);
    display(first);
    printf("\nLength is :%d\n", length(first));
    printf("deleted %d\n", delete(first, 3));
    reverse(first);
    display(first);

    return 0;
}