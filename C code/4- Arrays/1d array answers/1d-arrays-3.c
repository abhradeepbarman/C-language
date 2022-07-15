#include <stdio.h>

int main()
{
    int a[10];
    printf("enter 10 numbers: ");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%d", &a[i]);
    }

    int min = a[0];
    for (int i = 1; i <= 9; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("smallest number is %d", min);
    return 0;
}