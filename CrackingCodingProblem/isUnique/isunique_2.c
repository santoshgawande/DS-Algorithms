#include<stdio.h>
#include<stdbool.h>

// Time Complexity : O(n) or we can say it is O(1) because it never be run greater than 128 size.
bool isunique(char* s){
    int n=sizeof(s)/sizeof(s[0]);
    if(n> 128){
        // because more than 128 character there will be duplicate characters.
        return false;
    }
    bool charset[128];
    for(int i=0;i<n;i++){
        // It will give ascii value of char like A-Z and a-z
        int val =s[i];
        // printf("%c, %d\n", val, val);
        if(charset[val] ){
            return false;
        }
        charset[val] = true;
    }
    return true;
}

int main(){
    char s[] = "Ram Ram";
    bool res = isunique(s);
    if(res == true){
        printf("String is unique.");
    
    }else{
        printf("String is not unique.");
    }

    return 0;

}
