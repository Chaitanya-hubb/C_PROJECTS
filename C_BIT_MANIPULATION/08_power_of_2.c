// Program to check whether a number is power of 2

#include <stdio.h>

int main()
{
    unsigned int num;
    
    printf("Enter a number: ");
    scanf("%u", &num);

    if(num != 0 && (num & (num - 1)) == 0)
    {
        printf("%u is power of 2.\n", num);
    }
    else
    {
        printf("%u is not power of 2.\n", num);
    }
    
    return 0;
} 