#include<stdio.h> 

int printNum(int num);

int main(){
    int num;
    printf("enter number: ");
    scanf("%d", &num);

    printNum(num);
    return 0;
}

int printNum(int num){
    if(num==1){
        printf("%d \n", num);
    }
    else{
    printNum(num-1);
    printf("%d \n", num);
    }
}