#include<iostream>

using namespace std;

int main(){
    char st[] = "WelCome";
    int n = sizeof(st)/sizeof(st[0]);
    cout<<n<<endl;
    
    for(int i=0;st[i]!='\0';i++){
        if(st[i]>=97 && st[i] <= 122){
            // if char is small then convert into capital letter
            st[i] = st[i]-32;
        }else{
            // char is a Capital then convert into small letter
            st[i] = st[i] +32;
        }
    }
    cout<<st<<endl;

}