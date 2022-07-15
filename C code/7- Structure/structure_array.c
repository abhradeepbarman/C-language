#include <stdio.h>

typedef struct address
{
    int houseNo;
    int blockNo;
    char city[20];
    char state[50];
} add;

void input(add ppl[3], int size);
void output(add ppl[3], int size);

int main()
{
    add ppl[3];

    input(ppl, 3);
    output(ppl, 3);
    return 0;
}

void input(add ppl[3], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Person %d - house no., blockno., city, state: \n", i + 1);
        scanf("%d", &ppl[i].houseNo);
        scanf("%d", &ppl[i].blockNo);
        fflush(stdin);
        gets(ppl[i].city);
        fflush(stdin);
        gets(ppl[i].state);
    }
}

void output(add ppl[3], int size)
{
    for (int i = 0; i < 3; i++)
    {
        printf("Person %d address: %d, %d, %s, %s\n", i + 1, ppl[i].houseNo, ppl[i].blockNo, ppl[i].city, ppl[i].state);
    }
}