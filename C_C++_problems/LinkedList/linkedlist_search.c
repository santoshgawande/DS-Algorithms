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
// Linear Search

struct Node *Search(struct Node *head, int key){
    while (head!=NULL){
        if(key == head->data){
            return head;
        }else{
            head=head->next;
        }
    }
    return head;
    
}

// Recursion
struct Node *Rsearch(struct Node *head, int key){
    if(head == NULL){
        return NULL;
    }else{
        if(key == head->data){
            return head;
        }else{
            return Rsearch(head->next, key);

        }
    }
}

// Improve Linear Search using Moving to Head
struct Node *ImproveSearch(struct Node *head, int key){
    struct Node *q=NULL;
    while(head!=NULL){
        if(key == head->data){
            // If key found then move that node to first 
            q->next=head->next;
            head->next=first;
            first = head;
            return head;
        }
        // q = head and head = head->next element
        q=head;
        head=head->next;
        
    }
    return NULL;
}
int main(){
    int A[] ={3,4,5,7,8,14};
    create(A, 6);
    display(first);
    struct Node *temp = Search(first, 8);
    struct Node *temp1 = Rsearch(first, 8);
    struct Node *temp2 = ImproveSearch(first, 8);

    printf("\n Iterative Linear Search: %d\n", temp->data);
    printf("\n Recursive Linear Search : %d\n", temp1->data);
    printf("\n Improved Linear Search :%d\n", temp2->data);
    display(first);

}