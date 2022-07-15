#include<stdio.h> 

int printEven(int num);

int main(){
    int num;
    printf("enter number: ");
    scanf("%d", &num);

    printEven(num);
    return 0;
}

int printEven(int num){
    if(num == 1){
        if(num%2 == 0){
            printf("%d \n", num);
        }
    }           
    else{
        printEven(num-1);
        if(num%2 == 0){
            printf("%d \n", num);
        }
    }
}