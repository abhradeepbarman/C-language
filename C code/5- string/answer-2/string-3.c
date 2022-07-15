#include <stdio.h>

int count_words(char str[]);

int main()
{
    char str[100];
    printf("enter a string: ");
    gets(str);

    printf("no. of words = %d", count_words(str));
    return 0;
}

int count_words(char str[])
{
    int count = 1;
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }

    return count;
}