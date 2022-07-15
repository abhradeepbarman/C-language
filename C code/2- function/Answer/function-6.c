#include<stdio.h> 

// Prime number or not 

int PrimeorNot(int num);

int main(){
    int num;
    printf("enter number: ");
    scanf("%d", &num);
    
    printf("%d", PrimeorNot(num));

    return 0;
}

int PrimeorNot(int num){
    int count = 0;
    for (int i = 2; i <= (num-1); i++)
    {
        if (num%i == 0)
        {
            count++;
        }   
    }

    if(count>0){
        return 0;
    }
    else{
        return 1;
    }
    
}