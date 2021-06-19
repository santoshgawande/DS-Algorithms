#include<stdio.h>


struct Array{
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

int ibinarysearch(struct Array arr, int key){
    int low =0;
    int high = arr.length-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(key ==arr.A[mid]){
            return mid;
        }else if(key <arr.A[mid]){
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return -1;
}

int rbinarysearch(int arr[],int low, int high, int key){
    int mid;
    if(low<=high){
        mid = (low+high)/2;
        if(key == arr[mid]){
            return mid;
        }else if(key < arr[mid]){
            rbinarysearch(arr, low, mid, key);
        }else{
            rbinarysearch(arr, mid+1, high, key);
        }
    }else{
        return -1;
    }
}

int main(){
     struct Array arr = {{3,4,5,56,7,}, 10,5};
    display(arr);
    printf("\nRecursive Binarysearch() found  key %d at %d index\n",4, rbinarysearch(arr.A, 0,5, 4));
    display(arr);
    // printf("\ntransp_linearsearch() found  key %d at %d index\n",5,  transp_linearsearch(&arr, 5));
    printf("\nIterative Binarysearch() found  key %d at %d index\n",4,  ibinarysearch(arr, 4));

    display(arr);
}