#include<stdio.h> 

// print factorial of a number 

int printFact(int num);

int main(){
    int num;
    printf("enter number: ");
    scanf("%d", &num);

    printf("factorial of %d is %d", num, printFact(num));
    return 0;
}

int printFact(int num){
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    
    return fact;  
}