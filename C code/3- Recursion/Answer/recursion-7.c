#include<stdio.h> 

int printSum(int num);

int main(){
    int num;
    printf("enter number: ");
    scanf("%d", &num);

    printf("sum of digits of %d = %d", num, printSum(num));
    return 0;
}

int printSum(int num){

    if (num==0)
    {
        return 0;
    }
    else{
        int sum = (num%10)+ printSum(num/10);
        return sum;
    }
    
}