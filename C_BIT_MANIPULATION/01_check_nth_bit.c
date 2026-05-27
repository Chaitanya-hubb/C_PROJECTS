// Program to check whether the nth bit of a number is set or clear using bitwise AND operator

#include <stdio.h>

int main()
{
    int num, pos;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter bit position: ");
    scanf("%d", &pos);

    if(num & (1 << pos))
    {
        printf("Bit %d is SET\n", pos);
    }
    else
    {
        printf("Bit %d is CLEAR\n", pos);
    }

    return 0;
}
    

    