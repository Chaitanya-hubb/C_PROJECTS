//C program to find length of the string without using strlen()

#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf(" %[^\n]", str);  //reads all characters until newline (\n) including spaces
    
    int length = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    printf("The length of given string is: %d", length);

    return 0;
}

