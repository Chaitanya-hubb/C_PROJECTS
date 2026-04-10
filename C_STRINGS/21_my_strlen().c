// C program to implement strlen() function

#include <stdio.h>

int my_strlen(const char *str)
{
    int length = 0;

    while(str[length] != '\0')
    {
        length++;
    }

    return length;
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf(" %99[^\n]", str);

    int len = my_strlen(str);

    printf("Length of the string: %d\n", len);

    return 0;
}