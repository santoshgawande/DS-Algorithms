#include<stdio.h>

struct pair{
    int max;
    int min;
};

struct pair getMinMax(int a[], int low, int high){
    struct pair m, mmr, mml;
    int mid;
    if(low == high){
        m.min = a[low];
        m.max = a[low];
        return m;
    }
    

    if(high == low + 1){
        if(a[low]< a[high]){
            m.min = a[low];
            m.max = a[high];
        }else{
            m.min = a[high];
            m.max = a[low];

        }
        return m;

    }

    mid = (low + high)/2;
    mml = getMinMax(a, 0,mid);
    mmr = getMinMax(a, mid+1, high);
    if(mml.max> mmr.max){
        m.max = mmr.max;
    }else{
        m.max = mml.max;
    }
    if(mml.min> mmr.min){
        m.min = mmr.min;

    }else{
        m.min = mml.min;
    }
    return m;
}

int main(){
    int a[] = {4,35,6,345,62,35,67};
    int n = sizeof(a)/sizeof(a[0]);
    struct pair minmax = getMinMax(a, 0, n-1);
    printf("Max :%d ",minmax.max);
    printf("Min :%d\n", minmax.min);
    return 0;
}