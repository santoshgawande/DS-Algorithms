#include<stdio.h>
#include<stdbool.h>
bool isunique(char *s){
    int i,j;
    int n = sizeof(s)/sizeof(s[0]);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i!=j){
                if(s[i] == s[j]){
                    return false;
                }
            }
        }
    }
    return true;

}

int main(){
    char s[] = "abscka";
    bool res = isunique(s);
    if(res == true){
        printf("Str is unique.");
    }else{
        printf("Str is not unique");
    }
}

//  Time Complexity : O(n**2)