#include<stdio.h>

// calculate area of circle 

float CircleArea(float rad);

int main(){
    float rad;
    printf("enter radius of circle: ");
    scanf("%f", &rad);
    printf("the area of the circle is : %f", CircleArea(rad));
    return 0;
}

float CircleArea(float rad){
    float area = 3.14*rad*rad;
    return area;
}
