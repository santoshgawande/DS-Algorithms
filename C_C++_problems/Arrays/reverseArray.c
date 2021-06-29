#include<stdio.h>
#include<stdlib.h>
// Reverse Array using temp array 
// Time : O(n),  Space: O(n)
void Reverse(int A[], int n){
  int B[n];
  for(int i=0;i<n;i++){
       B[i] = A[n-(i+1)];
       //printf("n :%d\n",n);
       //printf(" n-i :%d\n", n-i);
       //printf("n-i+1 :%d\n", n-i+1);
       //printf("n-(i+1):%d\n", n-(i+1));

  }

  for(int j=0;j<n;j++){
     A[j] = B[j];
  }

}

// Reverse using temp variable
// Time : O(n), Space:O(1) 
void TempReverse(int A[], int n){
   int i, temp;
   for(i=0;i<n/2;i++){
     temp = A[n-(i+1)];
     //printf("temp %d\n", temp);
     A[n-(i+1)] = A[i];
     //printf("A[n-(i+1)]:%d\n",A[n-(i+1)]);
     A[i] = temp;
     //printf("A[i]:%d\n", A[i]);

   }
}

void display(int A[], int n){
   int i;
   for(i=0;i<n;i++){
      printf("%d ", A[i]);
   }
}


int main(){
   int a[] = {2,3,4,5,6,7,8,9};
   int n= sizeof(a)/sizeof(a[0]);
   Reverse(a, n);
   for(int i=0;i<n;i++){
     printf("%d ", a[i]);
    }
   printf("\n");

   int b[] = {1,2,3,4,5,6,7};
   int m = sizeof(b)/sizeof(b[0]);
   display(b,m);
   printf("\n");
   TempReverse(b, m);
   printf("\n");
   display(b,m);
}

