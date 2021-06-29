#include<stdio.h>

struct Matrix{
    int A[10];
    int n;
};

void mset(struct Matrix *m, int i, int j, int x){
    if(i==j){
        m->A[i-1]= x;
    }
}

int mget(struct Matrix *m, int i, int j){
    if(i == j){
        return m->A[i-1];
    }else{
        return 0;
    }
}

void display(struct Matrix m){
    int i,j;
    for(i=1;i<m.n+1;i++){
        for(j=1;j<m.n+1;j++){
            if(i==j){
                printf("%d ", m.A[i-1]);
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }

}   

int main(){
    struct Matrix m;
    m.n=4;
    mset(&m,1,1,5);
    mset(&m,2,2,9);
    mset(&m, 3,3, 12);
    mset(&m, 4,4,44);
    display(m);
    printf("\n Get %d \n",mget(&m,1,1));
    return 0;
}
