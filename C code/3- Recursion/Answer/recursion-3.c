#include<stdio.h> 

int printOdd(int num);

int main(){
    int num;
    printf("enter number: ");
    scanf("%d", &num);

    printOdd(num);
    return 0;
}

int printOdd(int num){
    if(num == 1){
        printf("%d \n", num);
    }
    else{
        printOdd(num-1);
        if(num%2 != 0){
            printf("%d \n", num);
        }
    }
}