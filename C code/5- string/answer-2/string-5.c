#include<stdio.h> 
#include<string.h>

int compare_igone_case(char s1[], char s2[]);

int main(){
    char s1[100], s2[100];
    int compare;

    printf("enter first string: ");
    gets(s1);

    printf("enter second string: ");
    gets(s2);

    compare = compare_igone_case(s1,s2);

    if(compare == 1)
        printf("string are same");
    else
        printf("string are not same");
    
    return 0;
}

int compare_igone_case(char s1[], char s2[]){
    if(!strcmp(s1, s2))
        return 1;
    else
        return 0;
}