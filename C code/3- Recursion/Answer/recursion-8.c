#include<stdio.h> 

// sum of squares of digits of a number 

int printSum(int num);

int main(){
    int num;
    printf("enter number: ");
    scanf("%d", &num);

    printf("answer = %d", printSum(num));
    return 0;
}

int printSum(int num){
    if(num == 0){
        return 0;
    }
    else{
        int sum = ((num%10)*(num%10))+ printSum(num/10);
        return sum;
    }
}