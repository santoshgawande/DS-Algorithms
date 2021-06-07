#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
typedef struct node{
    int top;
    unsigned capacity;
    int *array;
}node;

// Create Stack using array
node* createStack(unsigned capacity){
    node* s = (node*)malloc(sizeof(node));
    s->capacity = capacity;
    s->top = -1;
    s->array = (int *)malloc(capacity*sizeof(int));
    return s;

}

int isFull(node* s){
    return s->top == s->capacity-1;
}

int isEmpty(node *s){
    return s->top == -1;
}

void push(node *s, int item){
    if(isFull(s)){
        return;
    }else{
        s->array[++s->top] = item;
        printf("%d pushed to stack\n",item );

    }
}

int  pop(node *s){
    if(isEmpty(s)){
        return INT_MIN;
    }else{
        return s->array[s->top];
    }
}

int main(){
    node* s = createStack(100);
    push(s, 10);
    push(s,20);
    push(s,30);
    printf("%d popped from stack\n", pop(s));
}