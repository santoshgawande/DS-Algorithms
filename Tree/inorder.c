#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node *right;
};

void inorder(struct node *root){
    if(root){
        //  Left,Root, Right
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

struct node* newNode(int data){
    struct node* t = (struct node*)malloc(sizeof(struct node));
    t->data = data;
    t->left = NULL;
    t->right = NULL;
    return t;
}

// void printTree(struct node *root){
//     struct node *current = root;
//     while(1){
//         if(root!=NULL){
//             printf("%d\t", current->data);
//             current =current->
//         }
//     }
//     if(root != NULL){

//         printf("%d", root->data);
//         printf("")
        
//     }
// }

int main(){
    struct node* t = newNode(1);                    //        1       //   
    t->left = newNode(2);                          //      2     3
    t->right = newNode(3);                         //    4  5   6  7
    t->left->left = newNode(4);                    //
    t->left->right = newNode(5);                  //
    t->right->left = newNode(6);
    t->right->right = newNode(7);                 // Output: 4,2,3,1,6,3,7
    printf("InOrder:\n");
    preorder(t);
    
}