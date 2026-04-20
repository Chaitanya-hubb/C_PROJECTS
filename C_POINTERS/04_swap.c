//C program to swap two numbers using pointers

#include <stdio.h>

int main()
{
    int a, b;
    int *p1, *p2;
    int temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p1 = &a;   // pointer to a
    p2 = &b;   // pointer to b

    printf("Before swap: a = %d, b = %d\n", a, b);

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}