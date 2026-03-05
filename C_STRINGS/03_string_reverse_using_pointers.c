//C program to reverse the given string using pointers

#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    char *start, *end, temp;

    start = str;
    end = str;

    while(*end != '\0')
    {
       end++;
    }
    end--;

    while(start < end)
    {
       temp = *start;
       *start = *end;
       *end = temp;

       start++;
       end--;
    }
    printf("Reversed string: %s\n", str);

    return 0;
}

    