#include<iostream>
using namespace std;

class Element{
    public:
        int i;
        int j;
        int x;
};

class Sparse{
    private:
        int m;
        int n;
        int num;
        Element *ele;
    public:
        Sparse(int m, int n, int num){
            this->m = m;
            this->n = n;
            this->num = num;
            ele = new Element[this->num];
        }
        
        ~Sparse(){
            delete [] ele;
        }

        // Operator Overloading
        Sparse operator+(Sparse &s);

        // These method are implemented using friend()

        //Extraction operation
        friend istream & operator>>(istream &is, Sparse &s);
        // Inseration operation with friend function
        friend ostream & operator<<(ostream &os, Sparse &s);

};


    // Operator overloading
    Sparse operator+(Sparse &s);

    istream & operator>>(istream &is, Sparse &s){
        cout<<"Enter non-zero elements"<<endl;
        for(int i=0;i<s.m;i++){
            // row column element
            cin>>s.ele[i].i>>s.ele[i].j>>s.ele[i].x;
        }
        return is;
    }

    ostream & operator<<(ostream &os, Sparse &s){
        int k=0;
        for(int i=0;i<s.m;i++){
            for(int j=0;j<s.n;j++){
                if(s.ele[k].i == i && s.ele[k].j == j){
                    cout<<s.ele[k++].x<<" ";

                }else{
                    cout<<"0 ";
                }
            }
            cout<<endl;
        }
        return os;
    }

Sparse Sparse::operator+(Sparse &s){
    int i,j,k;
    if(m!=s.m || n!=s.n){
        return Sparse(0,0,0);
    }
    Sparse *sum= new Sparse(m,n, num+s.num);

    i=j=k=0;
    while(i<num && j<s.num){
        if(ele[i].i<s.ele[j].i){
            sum->ele[k++] = ele[i++];

        }else if(ele[i].i>s.ele[j].i){
            sum->ele[k++] = ele[j++];
        }else{
            if(ele[i].j <s.ele[j].j){
                sum->ele[k++] = ele[i++];

            }else if(ele[i].j> s.ele[j].j){
                sum->ele[k++] = s.ele[j++];
            }else{
                sum->ele[k] = ele[i];
                sum->ele[k++].x = ele[i++].x + s.ele[j++].x;
            }
        }
       
    }
     for(;i<num;i++){
            sum->ele[k++] = ele[i];
        
        }
        for(;j<s.num;j++){
            sum->ele[k++] = s.ele[j];
        }

        sum->num = k;
        return *sum;


}


int main(){
    Sparse s1(5, 5, 5);
    Sparse s2(5,5,5);
    cin>>s1;
    cin>>s2;
    Sparse sum = s1+s2;

    cout<<"First Matrix :"<<endl<<s1;
    cout<<"Second Matrix :"<<endl<<s2;
    cout<<"Sum Matrix: "<<endl<<sum;

    return 0;
}


/*
Input :
    Enter non-zero elements
0 0 1
1 1 1
2 2 1
3 3 1
4 4 1
Enter non-zero elements
0 0 5
0 1 5
0 2 5
0 3 5
0 4 5
First Matrix :
1 0 0 0 0 
0 1 0 0 0 
0 0 1 0 0 
0 0 0 1 0 
0 0 0 0 1 
Second Matrix :
5 5 5 5 5 
0 0 0 0 0 
0 0 0 0 0 
0 0 0 0 0 
0 0 0 0 0 
Sum Matrix: 
6 0 0 0 0 
0 1 0 0 0 
0 0 1 0 0 
0 0 0 1 0 
0 0 0 0 1 

*/