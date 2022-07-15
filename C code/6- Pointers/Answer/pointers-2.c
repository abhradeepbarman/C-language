#include<stdio.h> 

void fun(int i);

int main(){
    int i;
    printf("address = %u\n", &i);
    fun(i);
    return 0;
}

void fun(int i){
    printf("address = %u", &i);
}