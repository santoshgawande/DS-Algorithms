#include<iostream>
using namespace std;

template<class T>
class Arithmetic{
    private:
        T a;
        T b;
    public:
        Arithmetic(T a, T b);
        T add();
        T sub();

};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b){
    this->a = a;
    this->b =b;
}

template<class T>
T Arithmetic<T>::add(){
    T c;
    c = a+b;
    return c;
}

template<class T>
T Arithmetic<T>::sub(){
    T c;
    c= a-b;
    return c;
}

int main(){
    // Using Integer
    Arithmetic<int>ar(10,20);
    cout<<"Sum:"<<ar.add()<<endl;
    cout<<"Sub:"<<ar.sub()<<endl;
    // Float
    Arithmetic<float>ab(5.4, 88.4);
    cout<<"Float Sum :"<<ab.add()<<endl;
    cout<<"FLoat Sub:"<<ab.sub()<<endl;
    return 0;
}


