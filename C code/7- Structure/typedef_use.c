#include<stdio.h> 

typedef struct InformationTechnologyStudent{
    char name[100];
    int roll;
    float cgpa;
} it ;

int main(){ 
    // struct student s1;
    it s1 = {"Abhra", 2101048, 9.54};

    printf("Student name = %s\n", s1.name);
    printf("Student roll = %d\n", s1.roll);
    printf("Student cgpa = %f\n", s1.cgpa);
    return 0;
}