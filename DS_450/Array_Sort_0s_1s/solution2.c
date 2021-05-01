//  Given Array A[] consisting of 0s, 1s and 2s.
// Input :  0, 1, 2, 0, 1, 2
// output: 0,0,1,1,2,2
// Time Complexity : O(n)
// Space Complexity: O(1)
// Solution : We can improve to remove extra array usage change value in same array

#include<stdio.h>

// Simple Counting
int arraySort(int a[], int n){
    int count0 = 0, count1=0, count2=0;
    for(int i=0;i<n;i++){
        if(a[i] == 0){
            count0++;
        }else if(a[i] == 1){
            count1++;
        }else{
            count2++;
        }
    }
    // Assign 
    int j=0;
    while(count0!=0 || count1!=0 || count2!=0){
        if(count0 != 0){
           a[j] = 0;
            count0--;
            j++;
        }
        if(count0== 0 && count1 !=0){
            a[j] = 1;
            count1--;
            j++;
        }
        if(count0==0 && count1==0 && count2!=0){
            a[j] = 2;
            count2--;
            j++;
        }
    }

     for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }

}

int main(){
    int a[] = {0,1,2,0,1,2};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Given Array :\n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("Output Array :\n");

    arraySort(a, n);
   

}