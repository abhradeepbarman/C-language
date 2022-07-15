#include<stdio.h> 

int main(){
    int num, sum = 0;
    printf("enter number: ");
    scanf("%d", &num);
    printf("%d", sum);

    for (int i = 1; i <= num; i++)
    {
        if (i%2 !=0)
        {
            sum = sum+i;
        }
        
    }

    printf("%d", sum);
    
    
    return 0;
}