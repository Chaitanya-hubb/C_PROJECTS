//C program to find how many characters in a given string

#include <stdio.h>

int main() 
{
    char str[20];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int count = 0;
    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        count++;
    }

    printf("Number of characters in the given string: %d", count);
    return 0;
}
