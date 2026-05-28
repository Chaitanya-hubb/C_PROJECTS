// Program to check whether a number is even or odd using bitwise operator

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num & 1)
    {
        printf("%d is Odd\n", num);
    }
    else
    {
        printf("%d is Even\n", num);
    }

    return 0;
}