// C Program to find student with maximum and minimum marks using array of structures

#include <stdio.h>

struct Student
{
    int roll_no;
    char name[30];
    float marks;
};

int main()
{
    struct Student s[3];
    int max, min;

    // Input
    for(int i = 0; i < 3; i++)
    {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll_no);

        getchar();

        printf("Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Assume first student as max and min
    max = 0;
    min = 0;

    // Find max and min
    for(int i = 1; i < 3; i++)
    {
        if(s[i].marks > s[max].marks)
        {
            max = i;
        }

        if(s[i].marks < s[min].marks)
        {
            min = i;
        }
    }

    // Output
    printf("\nStudent with Maximum Marks:\n");
    printf("Roll Number: %d\n", s[max].roll_no);
    printf("Name       : %s", s[max].name);
    printf("Marks      : %.2f\n", s[max].marks);

    printf("\nStudent with Minimum Marks:\n");
    printf("Roll Number: %d\n", s[min].roll_no);
    printf("Name       : %s", s[min].name);
    printf("Marks      : %.2f\n", s[min].marks);

    return 0;
}