#include<stdio.h> 

int main(){
    char str[100],GivenChar;
    int i, count =0;
    printf("enter a string: ");
    gets(str);

    printf("enter a character: ");
    scanf("%c", &GivenChar);

    for(i=0;str[i];i++){
        if(str[i] == GivenChar){
            count++;
        }
    }

    printf("Occurance of \'%c\' = %d",GivenChar,count);
    return 0;
}