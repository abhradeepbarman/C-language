#include<stdio.h> 
#include<string.h>

void reverse(char str[]);

int main(){
    char str[100];
    printf("enter a string: ");
    gets(str);

    reverse(str);
    return 0;
}

void reverse(char str[]){
    int len;

    len = strlen(str);

    for(int i=len; i>=0; i--){
        printf("%c", str[i]);
    }
}