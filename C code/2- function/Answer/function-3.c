#include<stdio.h> 

// print first N natural numbers

void printNatural(int num);

int main(){
    int num;
    printf("enter number: ");
    scanf("%d", &num);

    printNatural(num);
    return 0;
}

void printNatural(int num){
    for (int i = 1; i<=num ; i++)
    {
        printf("%d \n", i);
    }
    
}
