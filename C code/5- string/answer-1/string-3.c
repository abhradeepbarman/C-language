#include<stdio.h> 

int main(){
    char str[100];
    int i, j;
    printf("enter a string: ");
    gets(str);

    for(i=0; str[i]; i++);

    for(j=i-1; j>=0; j--){
        printf("%c", str[j]); 
    }
    return 0;
}