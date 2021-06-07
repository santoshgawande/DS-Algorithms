#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

typedef struct snode{
    int data;
    snode* next;
}snode;

snode* newNode(int data){
    snode* s = (snode*)malloc(sizeof(snode));
    s->data = data;
    s->next = NULL;
    return s;
}
int isEmpty(snode* s){

    return (!s);
}

int peek(snode *s){
    if(isEmpty(s)){
        return INT_MIN;
    }
    return s->data;
}

void push(snode *root, int data){
    snode *s = newNode(data);
    s->next = root;
    root = s;
    printf("%d pushed to stack\n", data);
}

int pop(snode *root){
    if(isEmpty(root)){
        return INT_MIN;
    }
    snode *temp = root;
    root= root->next;
    int popped = temp->data;
    free(temp);
    return popped;
}

int main(){
    snode *root = NULL;
    push(root, 10);
    push(root, 20);
    push(root, 30);
    printf("%d popped from stack\n", pop(root));
    printf("Top element is %d\n", peek(root));
    
}