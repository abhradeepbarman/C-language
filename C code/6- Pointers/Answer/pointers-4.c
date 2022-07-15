#include<stdio.h> 

void calculate(int *p, int *q, int *sum, float *avg);

int main(){
    int a, b, sum;
    float avg;

    printf("enter first number: ");
    scanf("%d", &a);
    printf("enter second number: ");
    scanf("%d", &b);

    calculate(&a, &b, &sum, &avg);

    printf("sum = %d\n", sum);
    printf("average = %f\n", avg);

    return 0;
}

void calculate(int *p, int *q, int *sum, float *avg){
    *sum = (*p) + (*q);
    *avg = (*sum)/2.0;
}