#include<stdio.h> 

int main(){
    int a[5][10];
    printf("Enter marks: ");
    for(int i=0; i<5; i++){
        for(int j=0; j<10; j++){
            scanf("%d", &a[i][j])
        }
    }
    return 0;
}