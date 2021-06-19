#include<stdio.h>
#include<stdlib.h>

struct Array{
    int *A;
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

void  append(struct Array *arr, int x){
    if(arr->length<arr->size){
        arr->A[arr->length++]=x;
    }
}

void insert(struct Array *arr, int index, int x){
    int i;
    if(index>=0 && index<= arr->length){
        for(i=arr->length;i>index;i--)
        arr->A[i] = arr->A[i-1];
    }
    arr->A[index] = x;
    arr->length++;
}

int delete(struct Array *arr, int index){
    int x=0;
    if(index>=0 && index<arr->length){
        x= arr->A[index];
        for(int i=index;i<arr->length-1;i++){
            arr->A[i] == arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
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


int get(struct Array arr, int index){
    if(index>=0 && index <arr.length){
        return arr.A[index];

    }
    return -1;
}

void set(struct Array *arr, int index, int x){
    if(index>=0 && index<arr->length){
        arr->A[index] = x;
    }
}

int max(struct Array arr){
    int max=arr.A[0];
    for(int i=0;i<arr.length;i++){
        if(max <arr.A[i]){
            max = arr.A[i];
        }

    }
    return max;
}

int min(struct Array arr){
    int min=arr.A[0];
    for(int i=0;i<arr.length;i++){
        if(min >arr.A[i]){
            min= arr.A[i];
        }
    }
    return min;
}

int sum(struct Array arr){
    int total =0;
    if(arr.length > 0){
        for(int i=0;i<arr.length;i++){
            total = total +arr.A[i];
        }
        return total;
    }else{
        return 0;
    }
}

float average(struct Array arr){
    int s =sum(arr);
    return s/arr.length;
}

// call by address
void swap(int *x, int *y){
    int temp;
    temp= *x;
    *x =*y;
    *y=temp;

}

// Reverse using temporary array
// Time : O(n), Space : O(n)
void reverse(struct Array *arr){
    int *B;
    B =(int *)malloc(arr->length*sizeof(int));
    int n = arr->length-1;
    for(int i=0;i<n;i+2){
        B[i] = arr->A[n-i];
    }
    for(int j=0;j<n;j++){
        arr->A[j] = B[j];
    }
}

// Reverse using temp variable 
void treverse(struct Array *arr){
    int temp;
    for(int i=0;i<arr->length;i++){
        temp = arr->A[i];
        // Assign length-i+1
        arr->A[i] = arr->A[arr->length-i+1];
        arr->A[arr->length-i+1] = temp;
    }

}

// Insert element in sorted array
// It is not working 
void sinsert(struct Array *arr, int x){
    int i = arr->length-1;
    if(arr->length == arr->size){
        return;
    }
    while(i>=0 && arr->A[i]>x){
        arr->A[i+1] == arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->size++;


}

// Is it sorted
int isSorted(struct Array arr){
    int i;
    for(i=0;i<arr.length-1;i++){
        // when i == length-1 then i+1 becomes outsize length so it failed
        if(arr.A[i]>arr.A[i+1]){
            return 0;
        }
    }
    return 1;
}

// Rearrange negative and positive on each end

void rearrange(struct Array *arr){
    int i,j;
    i=0;
    j=arr->length-1;
    while(i<j){
        while(arr->A[i]<0){
            i++;
        }
        while(arr->A[j]>=0){
            j--;
        }
        if(i<j){
            swap(&arr->A[i], &arr->A[j]);
        }
    }
}




struct Array* merge(struct Array *arr1, struct Array *arr2){
    int i,j,k;
    i=j=k=0;
    struct Array *arr3 =(struct Array *)malloc(sizeof(struct Array));
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j]){
            arr3->A[k++] = arr1->A[i++];
            i++;
            k++;
        }else{
            arr3->A[k] = arr2->A[j];
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
    arr3->length = arr1->length+arr2->length;
    arr3->size = 18;
    return arr3;

}







int main(){
    struct Array arr1;
    int ch;
    int i, x;
    printf("Enter a size of an array:\n");
    scanf("%d",&arr1.size);
    arr1.A= (int *)malloc(arr1.size*sizeof(int));
    arr1.length =0;

    do{
        printf("Menu:\n");
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Search\n");
        printf("4.Sum\n");
        printf("5.Display\n");
        printf("6.Exit\n");

        printf("Enter your choice:\n");
        scanf("%d", &ch);
        
        switch(ch){
            case 1:
                printf("Enter an element and index :");
                scanf("%d%d", &i, &x);
                insert(&arr1, i, x);
                printf("\n");
                break;
            case 2:
                printf("Enter index :");
                scanf("%d", &i);
                x = delete(&arr1, i);
                printf("Deleted element is %d\n", x);
                 printf("\n");

                break;
            case 3:
                printf("Enter an element to search :");
                scanf("%d", &x);
                linearsearch(arr1, x);
                printf("\n");

                break;
            case 4:
                printf("Sum of array is :%d\n",  sum(arr1));
                printf("\n");
                break;
            case 5:
                printf("Array is  :");
                display(arr1);
                printf("\n");
                break;

        }


    }while(ch<6);
   
    return 0;
}