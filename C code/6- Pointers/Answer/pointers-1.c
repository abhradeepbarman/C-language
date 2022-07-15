#include<stdio.h> 

int main(){
    int i=5;
    int *p = &i;
    printf("address of variable = %u\n", p);
    printf("value of the variable = %d\n", *p);
    return 0;
}