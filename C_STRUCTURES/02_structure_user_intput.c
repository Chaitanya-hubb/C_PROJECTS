//Structure program using user input

#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    float marks;
};

int main()
{
    struct Student s1;

    printf("Enter Roll Number: ");
    scanf("%d", &s1.roll_no);

    getchar();  // clear newline

    printf("Enter Name: ");
    fgets(s1.name, sizeof(s1.name), stdin);

    printf("Enter Marks: ");
    scanf("%f", &s1.marks);

    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s1.roll_no);
    printf("Name       : %s", s1.name);   
    printf("Marks      : %.2f\n", s1.marks);

    return 0;
}