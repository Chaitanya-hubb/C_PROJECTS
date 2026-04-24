//C program to show about structures

#include <stdio.h>
#include <string.h>

struct Student
{
    int roll_no;
    char name[10];
    float marks;
};

int main()
{
    struct Student s1;
    s1.roll_no = 20;
    strcpy(s1.name, "Chandu");
    s1.marks = 98.9;

    printf("Roll Number: %d\n", s1.roll_no);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}