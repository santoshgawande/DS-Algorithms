// Problem with 'char'
#include<iostream>

using namespace std;

int main(){
    // It goes infinite loop never ends because char start from -128 and end 127 so it will
    //never reached to 225
    /*
    https://www.geeksforgeeks.org/happen-exceed-valid-range-built-data-types-c/
    */
    for(char a=0;a<=225;a++){
        cout<<a;
    }
    return 0;
}