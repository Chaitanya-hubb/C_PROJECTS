// Program to set nth bit using bitwise OR operator

#include <stdio.h>

int main()
{
    unsigned int num;
    int pos;

    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Enter bit position to set: ");
    scanf("%d", &pos);

    num = num | (1 << pos);

    printf("After setting bit %d: %u\n", pos, num);

    return 0;
}

    