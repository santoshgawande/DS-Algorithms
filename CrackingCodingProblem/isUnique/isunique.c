#include<stdio.h>
#include<stdbool.h>
// Sorting and compare duplicates but it not working
// Time = O(n**2) and space = O(1) for calculate slen 
bool isunique1(char* s){
    int n = sizeof(s)/sizeof(s[0]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[i] == s[j]){
                return false;
            }
        }
    }
    return true;
}

void merge(char* s, int low, int mid, int high){
    int i, j,k;
    int n1 = mid-(low+1);
    int n2 = high-mid;
    int left[n1], right[n2];
    for(int i=0;i<n1;i++){
        left[i] = s[low+i];
    }
    for(int j=0;j<n2;j++){
        right[j] =s[mid+1+j];
    }
    i=0,j=0,k=low;
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            s[k] = left[i];
            i++;
            k++;
        }else{
            s[k] = right[j];
            j++;
            k++;
        }
    }
    // sort remaining
    while(j<n2){
        s[k] = right[j];
        j++;
        k++;
    }
}

// MergeSort
void mergeSort(char* s, int low , int high){
    if(low<high){
        int mid = (low+high)/2;
        mergeSort(s, low, mid);
        mergeSort(s, mid+1, high);
        // Merge all elements
        merge(s, low, mid, high);
    }

}



bool isunique2(char* s){
    int high = sizeof(s)/sizeof(s[0]);
    // mergesort(strArray, low, high);
    char t[high];
    mergeSort(s, 0, high);
    // printf("%s :", "san");
    // for(int k=0;k<high;k++){
    //     printf("%c\t", s[k]);
    // }
    // Check consecutive element is same or not
    for(int i=0;i<high-1;i++){
        if(s[i] == s[i+1]){
            return false;
        }
    }
    return false;
}

// checked that given string has unique characters or not.
int main(){

    // char s1[]="abcndjffdfff";
    char s1[] ="abcc";
    // bool res = isunique1(s1);
    bool res = isunique2(s1);
    // bool res =false;
    if(res == true){
        printf("str has unique Char\n");
    }else{
        printf("str has not unique Char \n");
    }
    return 0;
}