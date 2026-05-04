// Program to find square of a number using macro

#include <stdio.h>

#define SQUARE(x) ((x) * (x))

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Square of %d = %d", num, SQUARE(num));

    return 0;
}