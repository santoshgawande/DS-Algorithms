#include<iostream>
using namespace std;
// Lower Triangular Matrix using Row Major
class LTriangle{
    private:
        int *A;
        int n;
    public:
        LTriangle(){
            n=2;
            A=new int[n];
        }
        LTriangle(int n){
            this->n = n;
            A=new int[n];
        }

        void Set(int i,int j, int x);

        int Get(int i, int j);
        void Display();
        ~LTriangle(){
            delete []A;
        }
};

void LTriangle::Set(int i, int j, int x){
    if(i>=j){
        A[i*(i-1)/2+j-1] = x;
    }
}

int LTriangle::Get(int i, int j){
    if(i== j){
        return A[i*(i-1)/2+j-1];
    }else{
        return 0;
    }
}

void LTriangle::Display(){
    int i, j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i>=j){
                cout<<A[i*(i-1)/2+j-1]<<" ";
            }else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int d;
    cout<<"Enter Diemension:"<<endl;
    cin>>d;

    LTriangle lm(d);
    int x;
    cout<<"All Elements:";
    for(int i=0;i<=d;i++){
        for(int j=0;j<=d;j++){
            cin>>x;
            lm.Set(i,j,x);

        }
    }
    lm.Display();
}