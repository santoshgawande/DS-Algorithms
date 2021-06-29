#include<stdio.h>
#include<stdlib.h>
// Lower Triangular Matrix using Column Major Representation
struct Matrix{
    int *A;
    int n;
};

void mset(struct Matrix *m, int i, int j, int x){
    if(i>=j){
        // Column Major Formula
        // int index = (m->n*(j-1)+(j-2)*(j-1)/2+i-j);
        m->A[m->n*(j-1)+(j-2)*(j-1)/2+i-j]= x;
    }
}

int mget(struct Matrix *m, int i, int j){
    if(i >= j){
        // int index = (m->n*(j-1)+(j-2)*(j-1)/2+i-j);

        return m->A[m->n*(j-1)+(j-2)*(j-1)/2+i-j];
    }else{
        return 0;
    }
}

void display(struct Matrix m){
    int i,j;
    for(i=1;i<m.n+1;i++){
        for(j=1;j<m.n+1;j++){
            if(i>=j){
                //  int index = (m.n*(j-1)+(j-2)*(j-1)/2+i-j);
                printf("%d ", m.A[m.n*(j-1)+(j-2)*(j-1)/2+i-j]);
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }

}   

int main(){
    struct Matrix m;
    int i,j,x;
    printf("Enter dimension:");
    scanf("%d", &m.n);
    m.A =(int *)malloc(m.n*(m.n-1)/2*sizeof(int));
    printf("Enter all Elements\n");
    for(i=1;i<=m.n;i++){
        for(j=1;j<=m.n;j++){
           scanf("%d", &x);
           mset(&m, i,j, x);
        }
    }
    printf("\n");
    printf("\nDisplay Matrix\n");

    display(m);
    return 0;
}
