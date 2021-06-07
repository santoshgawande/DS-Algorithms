#include<stdio.h>
#include<string.h>
void mergesort(char* s, int low, int high){
    int n = strlen(s);
    int mid =(low+high)/2;
    mergesort(s, low, mid);
    mergesort(s, mid+1, high);
    merge(s, low, mid, high);
}

void merge(char* s, int low , int mid, int high){
    
}