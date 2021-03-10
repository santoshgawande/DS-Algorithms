#inclide<iostream>
#include<vector>
// Vector is nothing but dyanamic array we can resize vector length
int main(){
    vector <int> v;
    for(int i=0;i<6;i++){
        //It push element in vector from back (at last) 
        v.push_back(i)
    }
    // print vector start to end
    for(auto i=v.begin();i!=v.end();++i){
        cout<<*i<<" ";

    }
}