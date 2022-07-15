#include<stdio.h>

int main()
{
    int a[10], iEven=0, iOdd=0;
    printf("enter 10 numbers : ");

    for(int i=0; i<=9; i++){
        scanf("%d", &a[i]);
    }

    for(int i=0; i<=9; i++){
        if(a[i]%2 == 0){
            iEven = iEven + a[i];
        }
        else{
            iOdd = iOdd + a[i];
        }
    }

    printf("sum of all even numbers = %d \n", iEven);
    printf("sum of all Odd numbers = %d \n", iOdd);

}