#include<stdio.h>

void insert(int a[], int n,int x){
   int i;
   for(i=n;i>0;i--){
     if(x<=a[i]){
       a[i] = a[i-1];
     }else{
       a[i] = x;
     }
   }
}


void display(int a[], int n){
  int i;
  for(i=0;i<n;i++){
     printf("%d ",a[i]);
  }
  printf("\n");
}

int main(){
  int a[6] = {1,2,3,4,5};
  int n= sizeof(a)/sizeof(a[0]);
  display(a,n);
  insert(a,n,10);
  display(a,n);
  return 0;
  
}
