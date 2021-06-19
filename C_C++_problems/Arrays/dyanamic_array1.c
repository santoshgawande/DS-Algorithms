#include<stdio.h>
#include<stdlib.h>
struct Array{
    int *A;
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

int delete(struct Array *arr, int index){
    int x=0;
    if(index>=0 && index<arr->length){
        x= arr->A[index];
        for(int i=index;i<arr->length-1;i++){
            arr->A[i] == arr->A[i+1];
        }
        arr->length--;
    }
    return 0;
}

int main(){
    // Create an dyanamic array in  heap
    struct Array arr ;
    int i,n;
    printf("Enter size of an array:\n");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size*sizeof(int));
    arr.length = 0;


    printf("Enter number of numbers\n");
    scanf("%d", &n);
    printf("Enter all Elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr.A[i]);

    }
    arr.length = n;
    display(arr);


}