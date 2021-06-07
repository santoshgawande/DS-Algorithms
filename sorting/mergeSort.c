#include<stdio.h>

// Merge element after dividing 
void merge(int a[],int l, int mid, int r){
    int i,j,k;
    int n1 = mid-l+1;
    int n2 = r-mid;
    // Assign memory to different subarray
    int left[n1], right[n2];
    for(i=0;i<n1;i++){
        left[i] = a[l+i];
    }
    for(j=0;j<n2;j++){
        right[j] = a[mid+1+j];
    }

    i=0,j=0,k=l;

    while(i<n1 && j<n2){
        if(left[i]<right[j]){
            a[k] = left[i];
            i++;
            k++;
        }else{
            a[k] = right[j];
            j++;
            k++;
        }
    }

    while(j<n2){
        a[k] = right[j];
        j++;
        l++;
    }

}

void mergeSort(int a[], int l, int r){
    if(l<r){
        int mid = r-(l+r)/2;
        mergeSort(a, l, mid);
        mergeSort(a,mid+1, r);
        // Merge all element when array split in one element
        merge(a,l, mid, r);

    }
 
}

int main(){
    int a[] = {5,3,2,55,32,1,45,66};
    int n = sizeof(a)/sizeof(a[0]);
    mergeSort(a,0, n);

}