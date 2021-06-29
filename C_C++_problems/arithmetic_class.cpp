#include<iostream>
using namespace std;
class Arithmetic{
    private:
        int a;
        int b;
    
    public:
        Arithmetic(int a, int b);
        int add();
        int sub();
};

// Defination 
Arithmetic::Arithmetic(int a,int b){
    this->a =a;
    this->b=b;
}

int Arithmetic::add(){
    int c;
    c=a+b;
    return c;

}

int Arithmetic::sub(){
    int c;
    c=a-b;
    return c;
}

int main(){
    int a=5, b=6;
    Arithmetic r(5,6);
    cout<<" Sum :"<<r.add()<<endl;
    cout<<" Sub :"<<r.sub()<<endl;
    return 0;
}
