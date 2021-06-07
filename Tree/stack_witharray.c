#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct snode{
    int top;
    unsigned capacity;
    int *array;
}snode;

struct snode* createStack(unsigned capacity){
    struct snode* stack=(struct snode* )malloc(sizeof(struct snode));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int *)malloc(capacity*sizeof(int));
    return stack;
}

int isFull(struct snode* s){
    return s->top == (s->capacity-1);
}

int isEmpty(struct snode *s){
    return s->top == -1;
}

void push(struct snode* s, int item){
    if(isFull(s)){
        return;
    }
    s->array[++s->top] = item;
    printf("%d  pushed to stack\n", item);
}

int pop(struct snode *s){
    if(isEmpty(s)){
        return INT_MIN;
    }
    // snode* temp = root;
    return (s->array[s->top--]);
}

int peek(struct snode *s){
    if(isEmpty(s)){
        return INT_MIN;
    }else{
        return s->array[s->top];
    }
}


int main(){
    struct snode *root = NULL;
    push(root, 10);
    push(root, 20);
    push(root, 30);
    printf("%d popped from stack\n", pop(root));
    printf("Top element is %d\n", peek(root));
    
}