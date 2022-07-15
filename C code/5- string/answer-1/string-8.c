#include<stdio.h> 

int main(){
    char str[100];
    int i, count=0;
    printf("enter a string: ");
    gets(str);

    for(i=0;str[i];i++);

    for(int j=0; j<i; j++){
        if(str[j] != str[i-1-j]){
            count++;
            break;
        }
    }

    if(count>0){
        printf("not palindrome string");
    }
    else{
        printf("palindrome dtring");
    }
    return 0;
}