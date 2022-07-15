#include<stdio.h> 
#include<string.h>

int index_of(char str[], char ch);

int main(){
    char str[100], ch;
    printf("enter a string: ");
    gets(str);

    printf("enter a character: ");
    scanf("%c", &ch);

    printf("Index no. of %c = %d", ch, index_of(str, ch));
    return 0;
}

int index_of(char str[], char ch){
    int i, len, count=0;
    len = strlen(str);

    for(i=0; i<len; i++){
        if(str[i] == ch){
            count++;
            return i;
            break;
        }
    }

    if(count == 0){
        return -1;
    }

}