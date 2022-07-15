#include<stdio.h> 

void change(int *p);

int main(){
    int i=5;
    change(&i);
    printf("%d", i);
    return 0;
}

void change(int *p){
    (*p) = (*p)*10;
}