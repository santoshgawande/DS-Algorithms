#include<iostream>

using namespace std;

int main(){

    char st[] = "WELCOME";

    for(int i=0;st[i]!='\0';i++){
        // Because Capital letter to small letter difference is 32 so 
        // we add 32 to get same lower case character
        st[i] = st[i]+32;
    }

    cout<<"Output:"<<st<<endl;
    return 0;
    
}