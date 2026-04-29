// Program to demonstrate call by value

#include <stdio.h>

/* Function definition */
void swap(int a, int b)
{
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("\nInside function after swapping:\n");
    printf("a = %d b = %d\n", a, b);
}

int main()
{
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d%d", &x, &y);

    printf("\nBefore function call:\n");
    printf("x = %d y = %d\n", x, y);

    swap(x, y);

    printf("\nAfter function call:\n");
    printf("x = %d y = %d\n", x, y);

    return 0;
}