#include<iostream>
using namespace std;
// Create generic class

template<class T>
class Array{
    private:
        T *A;
        int size;
        int length;
    
    public:
        // Non parameterized constructor
        Array(){
            size=10;
            A= new T[10];
            length = 0;
        }

        // Parameterized Constructor
        Array(T sz){
            size=sz;
            length=0;
            A= new T[size];
        }

        // Destructor
        ~Array(){
            delete []A;
        }
        void Insert(int index, T x);
        T Delete(int index);
        void Display();

};

template<class T>
void Array<T>::Insert(int index, T x){
    int i;
    if(index>=0 && index<=length){
        for(i=length;i>index;i--)
        A[i] = A[i-1];
    }
    A[index] = x;
    length++;
}
template<class T>
T Array<T>::Delete(int index){
    T x=0;
    if(index>=0 && index<length){
        x= A[index];
        for(int i=index;i<length-1;i++){
            A[i] == A[i+1];
        }
        length--;
    }
    return x;


}

// Function Defination
template<class T>
void Array<T>::Display(){
    int i;
    // printf("\nElements are:\n");
    for(i=0;i<length;i++){
        cout<<A[i];
    }
}


int main(int argc, const char * argv[]){
    Array<int> *arr1;
    int size1;
    cout<<"Enter size of Array:\n";
    cin>>size1;
    arr1 = new Array<int>(size1);

    arr1->Insert(0,12);
    arr1->Insert(1,66);
    arr1->Insert(2,3);;
    arr1->Insert(4, 55);
    arr1->Display();
    cout<<"\nDelete Element\n";
    arr1->Delete(0);
    cout<<"\nAfter Delete Element\n";

    arr1->Display();
    // Delete whole array
    arr1->~Array();
    cout<<"\nAfter delete whole Array\n";
    arr1->Display();

    // Different Ways declared
    Array<int> arr(10);
    arr.Insert(0,5);
    arr.Insert(1,9);
    arr.Insert(2, 1);
    cout<<"\nArray is \n";
    arr.Display();
    cout<<"\ndelete ele;\n"<<arr.Delete(0)<<endl;
    arr.Display();
    
    return 0;

}

