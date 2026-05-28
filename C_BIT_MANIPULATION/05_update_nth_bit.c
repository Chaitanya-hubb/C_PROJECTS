// Program to update nth bit

#include <stdio.h>

int main()
{
    unsigned int num;
    int pos, value;

    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Enter bit position: ");
    scanf("%d", &pos);

    printf("Enter value(0 or 1): ");
    scanf("%d", &value); 

    if(value == 1)
    {
       num = num | (1 << pos);
    }
    else if(value == 0)
    {
       num = num & ~(1 << pos);
    }
    else
    {
       printf("Invalid input.\n");
       return 1;
    }

    printf("Updated number: %u\n", num);

    return 0;
}