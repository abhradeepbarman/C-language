#include <stdio.h>

int sumSquare(int num);

int main()
{
    int num;
    printf("enter number: ");
    scanf("%d", &num);

    printf("sum = %d", sumSquare(num));
    return 0;
}

int sumSquare(int num)
{
    int sum =0;
    if (num == 1)
    {
        return (num*num);
    }
    else{
        sum = (num*num)+ sumSquare(num-1);
        return sum;
    }
    
}