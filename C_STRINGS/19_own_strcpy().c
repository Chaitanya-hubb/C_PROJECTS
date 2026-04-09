//C program to implement strcpy() function

#include <stdio.h>

char* my_strcpy(char *dest, const char *src)
{
     char *start = dest;
     while(*src != '\0')
     {
         *dest = *src;
         dest++;
         src++;
     }
     *dest = '\0';
     return start;
}

int main()
{
    char src[50], dest[50];

    printf("Enter source string: ");
    scanf(" %49[^\n]", src);

    printf("Copied string: %s", my_strcpy(dest, src));

    return 0;
}