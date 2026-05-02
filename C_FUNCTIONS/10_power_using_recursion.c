// Program to find x raised to power y using recursion

#include <stdio.h>

/* Function definition */
int power(int x, int y)
{
    if(y == 0)
    {
        return 1;
    }

    return x * power(x, y - 1);
}

int main()
{
    int x, y;

    printf("Enter base value: ");
    scanf("%d", &x);

    printf("Enter power value: ");
    scanf("%d", &y);

    printf("%d ^ %d = %d\n", x, y, power(x, y));

    return 0;
}