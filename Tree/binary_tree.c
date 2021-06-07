#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;

};

struct node* newNode(int data){
   struct node* new = (struct node*)malloc(sizeof(struct node));
  new->data = data;
  new->left = NULL;
  new->right = NULL;
  return new;
}

int main(){
     struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);

    return 0;

}
