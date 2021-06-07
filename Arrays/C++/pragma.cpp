// https://www.geeksforgeeks.org/cc-preprocessors/
#include <bits/stdc++.h>
using namespace std;

void func1();
void fun2();

#pragma startup func1
#pragma exit func2

void func1(){
    cout<< "Inside func1()\n";

}

void func2(){
    cout<< "Inside func2()\n";
}
// This is not worked on GCC compiler
int main(){
    // IT is correct syntax
    void func1();
    void func2();
    cout<< "Inside main()\n";
    return 0;
}
