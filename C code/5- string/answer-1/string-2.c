#include<stdio.h> 

int main(){
    char str[100];
    printf("enter a string: ");
    gets(str);

    for(int i=0; str[i]; i++){
        if(str[i]>=65 && str[i]<=90)
            str[i] = str[i]+32;
    }

    printf("%s", str);
    return 0;
}