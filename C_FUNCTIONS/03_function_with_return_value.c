// C program to demonstrate function with return value

#include <stdio.h>

/* Function definition */
int add(void)
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    return a + b;
}

int main()
{
    int sum;

    /* Function call */
    sum = add();

    printf("Sum = %d\n", sum);

    return 0;
}