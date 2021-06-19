#include<stdio.h>

struct Array {
    int A[10];
    int size;
    int length;
};
void display(struct Array arr){
    int i;
    printf("\nElements are:\n");
    for(i=0;i<arr.length;i++){
        printf("%d ", arr.A[i]);
    }
}

// call by address
void swap(int *x, int *y){
    int temp;
    temp= *x;
    *x =*y;
    *y=temp;

}

// Time : O(n)
int linearsearch(struct Array arr, int key){
    int i;
    for(i=0;i<arr.length;i++){
        if(key == arr.A[i]){
            return i;
        }

    }
    return -1;
}

// Improved version of linear search : using tranposition
int transp_linearsearch(struct Array *arr, int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(key == arr->A[i]){
            swap(&arr->A[i], &arr->A[i-1]);
            return i;
        }

    }
    return -1;
}

// Improved version of linear search : using Front
int front_linearsearch(struct Array *arr, int key){
    int i;
    for(i=0;i<arr->length;i++){
        if(key == arr->A[i]){
            swap(&arr->A[i], &arr->A[0]);

            return 0;
        }

    }
    return -1;
}

int main(){
    struct Array arr = {{3,4,5,56,7,}, 10,5};
    display(arr);
    printf("\nlinearsearch() found  key %d at %d index\n\n",5,  linearsearch(arr, 5));
    display(arr);
    // printf("\ntransp_linearsearch() found  key %d at %d index\n",5,  transp_linearsearch(&arr, 5));
    printf("\nfront_linearsearch() found  key %d at %d index\n",5,  front_linearsearch(&arr, 5));

    display(arr);

}