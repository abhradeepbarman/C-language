#include<stdio.h> 

int factorial(int num);

int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    printf("factorial of %d = %d", num, factorial(num));
    return 0;
}

int factorial(int num){
    int fact;
    if (num == 1)
    {
        return 1;
    }
    else{
        fact = num * factorial(num-1);
        return fact;
    }
    
}

