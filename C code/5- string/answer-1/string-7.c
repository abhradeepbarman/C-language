#include<stdio.h> 
#include<string.h>

int main(){
    char s1[100], s2[100];
    printf("enter first string: ");
    gets(s1);
    printf("enter second string: ");
    gets(s2);

    if(!strcmp(s1,s2)){
        printf("two strings are same");
    }
    else{
        printf("two strings are not same");
    }
    return 0;
}