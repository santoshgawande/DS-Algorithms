#include<stdio.h>
#include<stdlib.h>

struct Array{
    int A[10];
    int size;
    int length;
};

void display(struct Array arr){
    int i;
    // printf("\nElements are:\n");
    for(i=0;i<arr.length;i++){
        printf("%d ", arr.A[i]);
    }
}
 
struct Array* Union(struct Array *arr1, struct Array *arr2){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3 =(struct Array *)malloc(sizeof(struct Array));
    
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k] = arr1->A[i];
            i++;
            k++;
        }else if(j<arr2->length && arr2->A[j]<arr1->A[i]){
            arr3->A[k] = arr2->A[j];
            j++;
            k++;
        }else{
            arr3->A[k] = arr1->A[i];
            i++;
            j++;
            k++;

        }
    }

    // Mere Remaining elements 
    for(;i<arr1->length;i++){
        arr3->A[k] = arr1->A[i];
        k++;
    }

    for(;j<arr2->length;j++){
        arr3->A[k] = arr2->A[j];
        k++;
    }
    arr3->length =k;
    arr3->size = 10;
    return arr3;

}

struct Array* Intersection(struct Array *arr1, struct Array *arr2){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3 =(struct Array *)malloc(sizeof(struct Array));
    
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]==arr2->A[j]){
            arr3->A[k] =arr1->A[i];
            i++;
            k++;
        }
        j++;
    }
    arr3->length =k;
    arr3->size = 10;
    return arr3;

}



struct Array* Difference(struct Array *arr1, struct Array *arr2){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3 =(struct Array *)malloc(sizeof(struct Array));
    // Difference : A-B
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k] =arr1->A[i];
            i++;
            k++;
        }else if (arr2->A[j]<arr1->A[i]){
            j++;
        }else{
            i++;
            j++;

        }

    }
    // If any remaing elements
    for(;i<arr1->length;i++){
        arr3->A[k] = arr1->A[i];
        k++;
    }
    arr3->length =k;
    arr3->size = 10;
    return arr3;

}




int main(){
    // Array is sorted
    struct Array arr1 = {{2,3,5,7,8},10,5};
    struct Array arr2 = {{2,3,4,5,6},10,5};
    printf("\nArr1:\n");
    display(arr1);
    printf("\nArr2:\n");

    display(arr2);
    struct Array *arr3 = Union(&arr1, &arr2);
    printf("\nafter Union:\n");
    display(*arr3);

    struct Array *arr4 =Intersection(&arr1, &arr2);
    printf("\nafter Intersection:\n");
    display(*arr4);


    struct Array *arr5 =Difference(&arr1, &arr2);
    printf("\nafter Difference:\n");
    display(*arr5);

}