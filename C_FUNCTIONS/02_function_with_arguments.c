// C program to demonstrate function with arguments

#include <stdio.h>

void add(int a, int b)   // Function definition
{
    int sum;

    sum = a + b;

    printf("Sum = %d\n", sum);
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    add(num1, num2);  // Function call

    return 0;
}