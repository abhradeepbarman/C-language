#include<stdio.h> 

int main(){
    int num, sum = 0;
    printf("enter number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        int square = i*i;
        sum = sum + square;
    }
    printf("%d", sum);
    
    return 0;
}