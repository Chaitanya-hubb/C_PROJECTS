//C program to show macro with arguments

#include <stdio.h>

//Macro with arguments
#define ADD(a, b) ((a) + (b))

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("sum (%d + %d) = %d\n", a, b, ADD(a,b));

    return 0;
}