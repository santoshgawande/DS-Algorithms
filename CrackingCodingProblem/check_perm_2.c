#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include "sort.h"

bool check_perm(char* s1, char* s2){
    int s1len = strle(s1);
    int s2len = strlen(s2);
    if(s1len == s2len){
        //sort
        mergesort(s1);
        mergesort(s2);
    }else{
        return false;
    }
}