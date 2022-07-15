#include<stdio.h>

int main(){
    int num, r, sum = 0;
    printf("enter number: ");
    scanf("%d", &num);

    while(num>0)
    {
        r = num %10;
        num = num/10;
        sum = sum+r;
    }
    
    printf("%d", sum);
    return 0;
}