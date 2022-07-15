#include<stdio.h> 

// Pointer to Structure 

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){

    struct student s1 = {"Abhra", 2101048, 9.54};
    struct student *ptr;
    ptr = &s1;

    // printf("Student roll = %d\n", (*ptr).roll);
    printf("Student name = %s\n", ptr->name);   // -> arrow operator
    printf("Student roll = %d\n", ptr->roll);    
    printf("Student cgpa = %f\n", ptr->cgpa);

    return 0;
}
