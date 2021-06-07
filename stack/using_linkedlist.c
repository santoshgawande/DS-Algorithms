#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

typedef struct node{
    int data;
    node *next;
}node;


node* createStack(int data){
    node* s =(node *)malloc(sizeof(node));
    s->data = data;
    s->next = NULL;
    return s;
}


int peek(node* root){
    if(isEmpty(root)){
        return INT_MIN;

        return root->data;
    }
}