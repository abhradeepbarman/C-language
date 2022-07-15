#include<stdio.h> 

int main(){
    char str[100];
    int i, count=0;
    printf("enter a string: ");
    gets(str);
    
    for(i=0;str[i];i++){
        if(str[i] >= '0' && str[i]<='9'){
            count++;
            break;
        }
    }
    for(i=0;str[i];i++){
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i<='Z'])){
            count++;
            break;
        }
    }

    if(count>=2){
        printf("alphanumeric no.");
    }
    else{
        printf("not alphanumeric no.");
    }
    return 0;
}