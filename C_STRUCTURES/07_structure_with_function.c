// Program to pass a structure to a function and display student details

#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    float marks;
};

// Function to display student details
void display(struct Student s)
{
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s.roll_no);
    printf("Name       : %s", s.name);
    printf("Marks      : %.2f\n", s.marks);
}

int main()
{
    struct Student s1;

    printf("Enter Roll Number: ");
    scanf("%d", &s1.roll_no);

    getchar();  // clear buffer

    printf("Enter Name: ");
    fgets(s1.name, sizeof(s1.name), stdin);

    printf("Enter Marks: ");
    scanf("%f", &s1.marks);

    display(s1);   // passing structure to function

    return 0;
}
