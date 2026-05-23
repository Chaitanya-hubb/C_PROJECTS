// Program to demonstrate bit manipulation macros in C

#include <stdio.h>

// Bit manipulation macros
#define SET_BIT(num, pos)     ((num) |= (1 << (pos)))
#define CLEAR_BIT(num, pos)   ((num) &= ~(1 << (pos)))
#define TOGGLE_BIT(num, pos)  ((num) ^= (1 << (pos)))
#define GET_BIT(num, pos)     (((num) >> (pos)) & 1)

int main()
{
    int num, pos;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter bit position: ");
    scanf("%d", &pos);

    printf("\nOriginal number = %d\n", num);

    SET_BIT(num, pos);
    printf("After setting bit = %d\n", num);

    CLEAR_BIT(num, pos);
    printf("After clearing bit = %d\n", num);

    TOGGLE_BIT(num, pos);
    printf("After toggling bit = %d\n", num);

    printf("Bit value at position %d = %d\n", pos, GET_BIT(num, pos));

    return 0;
}