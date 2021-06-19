#include<iostream>
using namespace std;

// #include<stdio.h>
// #include<stdlib.h>

// struct Array{
//     int *A;
//     int size;
//     int length;
// };

class Array{
    private:
        int *A;
        int size;
        int length;
        void swap(int *x, int *y);

    
    public:
        // Non parameterized constructor
        Array(){
            size = 10;
            length = 0;
        }

        // Non parameterized constructor
        Array(int sz){
            size = sz;
            length =0;
            A = new int[size];
        }

        // Destructor
        ~Array(){
            delete []A;
        }
        void Display();
        void Append(int x);
        void Insert(int index, int x);
        int Delete( int index);
        int linearsearch(int key);
        int get(int index);
        void set(int index, int x);
        int max();
        int min();
        int sum();
        float average();
        // void reverse();
        Array* merge(Array arr2);






};

// Function Defination
void Array::Display(){
    int i;
    // printf("\nElements are:\n");
    for(i=0;i<length;i++){
        printf("%d ", A[i]);
    }
}

void  Array::Append(int x){
    if(length<size){
        A[length++]=x;
    }
}

void Array::Insert(int index, int x){
    int i;
    if(index>=0 && index<=length){
        for(i=length;i>index;i--)
        A[i] = A[i-1];
    }
    A[index] = x;
    length++;
}

int Array::Delete(int index){
    int x=0;
    if(index>=0 && index<length){
        x= A[index];
        for(int i=index;i<length-1;i++){
            A[i] == A[i+1];
        }
        length--;
        return x;
    }
    return 0;
}

// Time : O(n)
int Array::linearsearch(int key){
    int i;
    for(i=0;i<length;i++){
        if(key ==A[i]){
            return i;
        }

    }
    return -1;
}


int Array::get(int index){
    if(index>=0 && index <length){
        return A[index];

    }
    return -1;
}

void Array::set(int index, int x){
    if(index>=0 && index<length){
        A[index] = x;
    }
}

int Array::max(){
    int max=A[0];
    for(int i=0;i<length;i++){
        if(max <A[i]){
            max = A[i];
        }

    }
    return max;
}

int Array::min(){
    int min=A[0];
    for(int i=0;i<length;i++){
        if(min >A[i]){
            min= A[i];
        }
    }
    return min;
}

int Array::sum(){
    int total =0;
    if(length > 0){
        for(int i=0;i<length;i++){
            total = total +A[i];
        }
        return total;
    }else{
        return 0;
    }
}

float Array::average(){
    int s =Array::sum();
    return s/length;
}

// call by address
// It is private function
void Array::swap(int *x, int *y){
    int temp;
    temp= *x;
    *x =*y;
    *y=temp;

}



Array* Array::merge(Array arr2){
    int i,j,k;
    i=j=k=0;
    // struct Array *arr3 =(struct Array *)malloc(sizeof(struct Array));
    Array *arr3 =new Array(length+arr2.length);
    while(i<length && j<arr2.length){
        if(A[i]<arr2.A[j]){
            arr3->A[k] =A[i];
            i++;
            k++;
        }else{
            arr3->A[k] = arr2.A[j];
            j++;
            k++;
        }
    }

    // Mere Remaining elements 
    for(;i<length;i++){
        arr3->A[k] = A[i];
        k++;
    }

    for(;j<arr2.length;j++){
        arr3->A[k] = arr2.A[j];
        k++;
    }
    arr3->length = length+arr2.length;
    arr3->size = 18;
    return arr3;

}







int main(){
    Array *arr1;
    int ch, sz;
    int i, x;
    cout<<"Enter a size of an array:\n";
    cin>>sz;
    // arr1.A= (int *)malloc(arr1.size*sizeof(int));
    arr1 = new Array(sz);

    do{
        cout<<"Menu:\n";
        cout<<"1.Insert\n";
        cout<<"2.Delete\n";
        cout<<"3.Search\n";
        cout<<"4.Sum\n";
        cout<<"5.Display\n";
        cout<<"6.Exit\n";

        cout<<"Enter your choice:\n";
        cin>>ch;
        
        switch(ch){
            case 1:
                cout<<"Enter an element and index :";
                cin>>i>>x;
                arr1->Insert( i, x);
                cout<<"\n";
                break;
            case 2:
                printf("Enter index :");
                cin>>i;
                x = arr1->Delete(i);
                cout<<"Deleted element is %d\n"<<x;
                cout<<"\n";
                break;
            case 3:
                cout<<"Enter an element to search :";
                cin>>x;
                arr1->linearsearch(x);
                cout<<"\n";
                break;
            case 4:
                cout<<"Sum of array is :%d\n"<<arr1->sum();
                cout<<"\n";
                break;
            case 5:
                cout<<"Array is  :";
                arr1->Display();
                cout<<"\n";
                break;

        }

    }while(ch<6);
   
    return 0;
}