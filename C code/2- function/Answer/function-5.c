#include<stdio.h> 

// check whether a given number is odd or even 

int OddEven(int num);

int main(){
    int num;
    printf("enter number: ");
    scanf("%d", &num);

    printf("%d", OddEven(num));
    return 0;
}

int OddEven(int num){
    if (num%2 == 0)   // even 
    {
        return 1;
    }
    else{
        return 0;
    }   
}
