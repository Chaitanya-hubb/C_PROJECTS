//C program to implement strcat() function

#include <stdio.h>

char* my_strcat(char *dest, const char *src)
{
     char *start = dest;
    
     // Move dest pointer to end of string
     while(*dest != '\0')
     {
         dest++;
     }

     // Copy src to end of dest  
     while(*src != '\0')
     {
         *dest = *src;
         dest++;
         src++;
     }
     // Add null character at end
     *dest = '\0';

     return start;
}
int main()
{
    char str1[100], str2[50];

    printf("Enter first string: ");
    scanf(" %99[^\n]", str1);

    printf("Enter second string: ");
    scanf(" %49[^\n]", str2);

    printf("After concatenation: %s\n", my_strcat(str1, str2));

    return 0;
}