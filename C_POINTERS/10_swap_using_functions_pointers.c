//C program to swap two numbers using pointers and functions

#include <stdio.h>

// swapping values using pointers (call by reference)
void swap(int *a, int *b)
{
   int temp;

   temp = *a;
   *a = *b;
   *b = temp;
}

int main()
{
    int num1, num2;

    printf("Enter num1 and num2: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
    

