#include<stdio.h>
#include<stdlib.h>
int main(){
    int *l;
    int a=10;
    int *p;
    // allocate memory to heap
    l =(int *)malloc(5*sizeof(int));
    l[0] = 8; l[1]=6;
    p=&a;
    printf("using pointer %d :\n", p);
    printf("using pointer %d:\n", &p);
    printf("using pointer %d :\n", *p);

    for(int i=0;i<5;i++){
        printf("%d\n", l[i]);
    }
    // delete dynamic memory which allocated using malloc
    free(l);


  return 0;
}