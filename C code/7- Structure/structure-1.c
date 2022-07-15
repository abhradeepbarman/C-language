#include<stdio.h> 
#include<string.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

void printInfo(struct student s1);

int main(){
    
    // s1.roll = 2101048;
    // s1.cgpa = 9.5;
    // // s1.name = "Abhra";   --> not valid
    // strcpy(s1.name, "Abhra");

    struct student s1 = {"Abhra", 2101048, 9.54};

    printInfo(s1);
    return 0;
}

void printInfo(struct student s1){
    printf("Student name = %s\n", s1.name);
    printf("Student roll = %d\n", s1.roll);
    printf("Student cgpa = %f\n", s1.cgpa);

}