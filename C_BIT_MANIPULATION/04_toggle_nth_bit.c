// Program to toggle nth bit using bitwise XOR operator

#include <stdio.h>

int main()
{
    unsigned int num;
    int pos;

    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Enter bit position: ");
    scanf("%d", &pos);

    num = num ^ (1 << pos);

    printf("After toggling bit %d: %u\n", pos, num);

    return 0;
}