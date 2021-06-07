#include<stdio.h>
#include<string.h>
#define MAX 128
void replacespace(char str[], int stlen){
    int space_count =0;
    int i;
    //check where space is present 
    for(i=0;i<stlen;i++){
        if(str[i]== ""){
            space_count++;
        }
    }

    // while(str[i-1] == ""){
    //     space_count--;
    //     i--;
    // }
    int index = i+space_count*2;
    // if(new_len> MAX){
    //     return -1;
    // }
    // int index = new_len -1;
    if(stlen < strlen(str)){
        // end of line
        str[stlen] = '\0';
    }
    // str[index--] = "10";
    for(int j=stlen-1;j>=0;j--){
        if(str[j] == ""){
            str[index] = "0";
            str[index-1]= "2";
            str[index-2]='%';
            index = index-3;

        }else{
            str[index-1] = str[i];
            index--;
        }
    }
    // return new_len;
}

int main(){
    char s[] ="Mr John Smith    ";
    int slen = strlen(s);
    replacespace(s, slen);
}