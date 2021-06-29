#include<iostream>
using namespace std;

void missingElement(int a[], int n){
    int diff = a[0]-0;
    for(int i=0;i<n;i++){
        if(a[i]-i!= diff){
            cout<<"missing element: \n"<<i+diff<<endl;
            break;
        }
    }
}

// Findout no. of missing elements
void misElement(int a[],int n){
    int diff = a[0]-0;
    cout<<"missing elem :\n";
    for(int i=0;i<n;i++){
        if(a[i]-i !=diff){
            while(diff<a[i]-i){
                cout<<diff+i<<endl;
                diff++;
            }
        }
    }
}

int main(){
    int a[10] = {2,3,4,6,7,8,9,10,11,12};
    missingElement(a, 10);
    int b[10] ={2,4,5,6,8,9,10,11};
    misElement(b, 10);
    return 0;
}