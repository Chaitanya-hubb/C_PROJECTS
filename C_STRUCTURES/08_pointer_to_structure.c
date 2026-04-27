// Program to input and display student details using pointer to structure

#include <stdio.h>

struct Student
{
    int roll_no;
    char name[30];
    float marks;
};

int main()
{
    struct Student s;
    struct Student *ptr = &s;

    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);

    getchar();

    printf("Enter name: ");
    fgets(ptr->name, sizeof(ptr->name), stdin);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    printf("\nRoll Number: %d\n", ptr->roll_no);
    printf("Name: %s", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}