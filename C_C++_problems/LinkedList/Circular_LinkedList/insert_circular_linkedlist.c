#include<stdio.h>
#include<stdlib.h>

struct Node{
   int data;
   struct Node *next;
}*head=NULL;

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

int length( struct Node *p){
   int len = 0;
   do{
      p = p->next;
      len++;
   }while(p!=head);
   return len;
}

void display(struct Node *h){
    do{
        printf("%d ", h->data);
        h = h->next;
    }while(h!=head);
    printf("\n");
} 

void Insert(struct Node *p, int index, int x){
   struct Node *t;
   if(index < 0 || index > length(p)){
     return ;
   }
   if(index == 0){
      t = (struct Node *)malloc(sizeof(struct Node));
      t->data = x;
      //t->next = head;
      if(head == NULL){
	      head = t;
         head->next = head;
      }else{
     	   while(p->next !=head){
	         p = p->next;
	      }
	      p->next = t;
         t->next = head;
	      head = t;
     
	   }
   }else{
      p = head;
      for(int i=0;i<index-1;i++){
    	   p =p->next;
      }
      t = (struct Node *)malloc(sizeof(struct Node));
      t->data = x;
      t->next = p->next;
      p->next = t;
   }
}


int delete(struct Node *p, int index){
   struct Node *q;
   int x;
   if(index < 0 || index > length(p)){
      return -1;
   }

   if(index == 1){
      while(p->next != head){
         p = p->next;
      }
      x =head->data;
      if(head == p){
         free(head);
         head = NULL;
      }else{
         p->next = head->next;
         free(head);
         head = p->next;
      }
      
   }else{

      for(int i=0;i<index-2;i++){
         p =p->next;
      }
      q =p->next;
      p->next = q->next;
      x = q->data;
      free(q);
   }

   return x;
}

int main(){
   int A[] ={2,3,4,5,6};
   create(A, 5);
   printf("INsert Circular LinkedLIst :\n");
   Insert(head, 2, 10);
   printf("\nDisplay Circular linkedlist using Recursion Display():\n");
   display(head);
   printf("%d :",delete(head, 2));
   return 0;
}