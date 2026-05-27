// Program to clear nth bit using bitwise AND operator

#include <stdio.h>

int main()
{
    unsigned int num;
    int pos;

    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Enter bit position: ");
    scanf("%d", &pos);

    num = num & ~(1 << pos);

    printf("After clearing bit %d: %u\n", pos, num);

    return 0;
}