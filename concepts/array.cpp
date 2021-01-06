#include<iostream>
using namespace std;

int main(){
    int a[10] = {1,4};
    a[2]=12;
    a[3]=15;
    a[4]=23;
    cout<<"sizeof arr "<<sizeof(a)<<endl;
    cout<<a[1]<<endl;
    cout<<a[9]<<endl;
    printf("%d\n", a[2]);

    // ForEach 
    for(int x:a){

    }

return 0;
}