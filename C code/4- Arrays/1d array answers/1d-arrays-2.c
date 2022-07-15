#include <stdio.h>

int main()
{
    int a[10];
    printf("enter 10 numbers : ");

    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }

    int max = a[0];

    for (int i = 1; i <= 9; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    printf("greatest number is %d", max);

    return 0;
}