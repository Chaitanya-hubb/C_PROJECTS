// C Program to demonstrate function pointer with user input

#include <stdio.h>

/* Function definition */
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2, result;

    /* Function pointer declaration */
    int (*fp)(int, int);

    /* Assign function address */
    fp = add;

    /* User input */
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    /* Function call using pointer */
    result = fp(num1, num2);

    printf("Sum = %d\n", result);

    return 0;
}