// C program to demonstrate function with arguments and return value

#include <stdio.h>

/* Function definition */
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    /* Function call */
    sum = add(num1, num2);

    printf("Sum = %d\n", sum);

    return 0;
}