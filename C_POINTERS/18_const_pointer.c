// const_pointer.c

#include <stdio.h>

int main()
{
    int a = 10, b = 20;

    int *const p = &a;

    *p = 15;   // allowed
    // p = &b; // not allowed

    printf("Value: %d\n", *p);

    return 0;
}