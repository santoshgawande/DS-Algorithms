#include<iostream>

using namespace std;
int main(){
    char st[] = "auspious";
    char vowels[] = "aeiou";
    int count = 0;
    for(int i=0;st[i] !='\0';i++){
        for(int j=0;vowels[j]!='\0';j++){
            if(st[i] == vowels[j]){
                count++;
            }
        }
    }
    // If we did not define namespace std in above then we can used cout like this
    // std::cout<<"vowels count :"<<count<<std::endl;
    cout<<"vowels count :"<<count<<endl;

    return 0;
}