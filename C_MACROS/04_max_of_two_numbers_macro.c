// Program to find maximum of two numbers using macro

#include <stdio.h>

#define MAX(x, y) (((x) > (y)) ? (x) : (y))

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Maximum = %d\n", MAX(num1, num2));

    return 0;
}