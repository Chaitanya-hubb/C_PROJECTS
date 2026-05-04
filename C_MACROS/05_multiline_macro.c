// Program to demonstrate multiline macro in C

#include <stdio.h>

// Multiline macro
#define PRINT(x, y) \
    printf("Value of x: %d\n", x); \
    printf("Value of y: %d\n", y);

int main()
{
   int num1 = 10, num2 = 20;

   PRINT(num1, num2);

   return 0;
}
    