// pointer_to_const.c

#include <stdio.h>

int main()
{
    int a = 10, b = 20;

    const int *p = &a;

    // *p = 15; // not allowed
    p = &b;     // allowed

    printf("Value: %d\n", *p);

    return 0;
}