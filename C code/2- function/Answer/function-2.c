#include<stdio.h>

// print area of rectangle 

int RecArea(int x, int y);

int main(){
    int x, y;
    printf("enter length: ");
    scanf("%d", &x);
    printf("enter width: ");
    scanf("%d", &y);

    printf("the area of the rectangle is %d", RecArea(x,y));

    return 0;
}

int RecArea(int x, int y){
    int area = x*y;
    return area;
}
