#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
}*head;

void create(int A[], int n){
    int i;
    struct Node *t, *last;
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = A[0];
    head->next = head;
    last=head;
    for(i=1;i<n;i++){
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }

}


void display(struct Node *h){
    do{
        printf("%d ", h->data);
        h = h->next;
    }while(h!=head);
    printf("\n");
}

void RecDisplay(struct Node *h){
    static int flag=0;
    if(h!=head || flag==0){
        flag=1;
        printf("%d ", h->data);
        RecDisplay(h->next);
    }
    flag=0;
}

int main(){
    int A[] ={2,3,4,5,6};
    create(A, 5);
    printf("Display Circular LinkedLIst :\n");
    display(head);
    printf("\nDisplay Circular linkedlist using Recursion Display():\n");
    RecDisplay(head);
    return 0;
}