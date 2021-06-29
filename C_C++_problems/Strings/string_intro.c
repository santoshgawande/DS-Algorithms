#include<stdio.h>

int main(){
    char s ='c';
    // not work
    // char st = "asdf";
    char a[]= "abc";
    char *b = "xyz";
    char **c= "bnm";
    char **d = "ajsdkk";

    char ef ="A";
    // We can use array also to defined string;
    char ab[] = {'a','a','b','b'};
    // It will print ASCII decimal no. a=97, z=122 etc
    // A=65, Z=90
    printf("%d\n", s);
    printf("%c\n", s);
    printf("%s\n", a);
    // We can not access like this 
    //printf("%c", a[3]);
    printf("%s\n", b);
    printf("%s\n", c);
    printf("%d\n", *d);
    printf("%s\n", ab);
    // it won't print nothing
    printf("%c", ef);
    char str1[20] = {'j', 'o','h', 'n'};
    // scanf accept only one word after space it will skipped
    // scanf("%s", &str1);
    // printf("%s\n", str1);
    // It will accept more than one word after space also till enter 
    // gets(str1);
    // printf("%s", str1);
    
    // Length of char array. we can't find string length using this
    int n = sizeof(a)/sizeof(a[0]);
    printf("%d\n", n);
    // It print 0 ASCII Decimal no. i.e. null char or end of string
    printf("%d\n", a[3]);

    return 0;
}