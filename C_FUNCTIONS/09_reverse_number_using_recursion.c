// C program to reverse a number using recursion


#include <stdio.h>

int reverse = 0;

/* Function definition */
int reverse_number(int num)
{
    if(num == 0)
    {
        return reverse;
    }

    reverse = reverse * 10 + (num % 10);

    reverse_number(num / 10);
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed Number = %d\n", reverse_number(num));

    return 0;
}