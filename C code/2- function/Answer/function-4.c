#include<stdio.h> 

// print sum of first N natural numbers

void printSum(int num);

int main(){
    int num;
    printf("enter number: ");
    scanf("%d", &num);

    printSum(num);
    return 0;
}

void printSum(int num){
    int sum =0;
    for (int i = 1; i<=num ; i++)
    {   
        sum = sum + i;
    }
        printf("%d", sum);
    
}