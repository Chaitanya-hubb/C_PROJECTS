//C program to find sum of two numbers using pointers

#include <stdio.h>

int main()
{
    int a, b;          // normal variables
    int *p1 = &a;      // pointer to a
    int *p2 = &b;      // pointer to b

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int sum = *p1 + *p2;   // accessing values using pointers

    printf("Sum = %d\n", sum);

    return 0;
}