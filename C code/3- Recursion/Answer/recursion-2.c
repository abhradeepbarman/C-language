#include <stdio.h>

int printRev(int num);

int main()
{
    int num;
    printf("enter number: ");
    scanf("%d", &num);

    printRev(num);
    return 0;
}

int printRev(int num)
{
    if (num == 1)
    {
        printf("%d \n", num);
    }
    else
    {
        printf("%d \n", num);
        printRev(num - 1);
    }
}