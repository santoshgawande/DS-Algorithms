#include<stdio.h>

int BinarySearch(int a[], int start, int end, int x){
    if(end<start){
        return -1;
    }else{
        int mid = (start+end)/2;
        if(a[mid] == x){
            return mid;
        }else if(a[mid]< x){
            BinarySearch(a, mid+1, end, x);
        }else{
            BinarySearch(a, start, mid, x);
        }
    }
}

int main(){
    // int a[] = {1,2,3,4,6,7,8,9,10,12};
    int a[] = {3,4,542,2,5,3,6,9,6,8};
    int n = sizeof(a)/sizeof(a[0]);
    int index = BinarySearch(a, 0, n, 8);
    printf("%d\n",index);
    return 0;
}