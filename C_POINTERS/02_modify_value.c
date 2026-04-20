//C program to modify value using pointer

#include <stdio.h>

int main()
{
    int num = 10;      // normal variable
    int *p = &num;     // pointer to num

    printf("Before modification: %d\n", num);

    *p = 20;           // modifying value using pointer

    printf("After modification: %d\n", num);

    return 0;
}