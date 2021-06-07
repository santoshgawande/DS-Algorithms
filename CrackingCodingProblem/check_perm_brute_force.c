#include<stdio.h>
#include<stdbool.h>
#include<string.h>
bool permutation(char* s1, char* s2){
    int s1len = strlen(s1);
    int s2len = strlen(s2);
    // int s1len = sizeof(s1)/sizeof(s1[0]);
    // int s2len = sizeof(s2)/sizeof(s2[0]);
    int check = 0;
    if(s1len == s2len){
        for(int i=0;i<s1len;i++){
            for(int j=0;j<s2len;j++){
                if(s1[i] == s2[j]){
                    check +=1;
                }
            }
        }
        //printf("%d: %d\n", check, s1len);
        if(check == s1len){
            return true;
        }else{
            return false;
        }

    }else{
        return false;
        
    }

   

}

int main(){
    // This type of input did not accept this program
    // char s1[]= "abcdf";
    // char s2[]= "dcabd";
    char s1[] = "abcd";
    char s2[] = "dcab";
    bool res = permutation(s1, s2);
    if(res == true){
        printf("given strings are permutation of each other\n");
    }else{
        printf("given string are not permutation\n");
    }
    return 0;
}