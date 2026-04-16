// C program to implement strstr() function

#include <stdio.h>
#include <string.h>

char* my_strstr(const char *str, const char *substr)
{
    if(*substr == '\0')    //if substring is empty
    {
        return (char*)str;
    }

    while(*str != '\0')
    {
        const char *p1 = str;
        const char *p2 = substr;

        //Compare substring
        while(*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
        {
            p1++;
            p2++;
        }

        // If we reached end of substr -> match found
        if(*p2 == '\0')
        {
            return (char*)str;
        }
        str++;    // move to next position in main string
   }
   return NULL; // Not found
}

int main()
{
    char str[100], substr[50];

    printf("Enter main string: ");
    scanf(" %99[^\n]", str);

    printf("Enter substring: ");
    scanf(" %49[^\n]", substr);

    char *result = my_strstr(str, substr);

    if(result)
        printf("Substring found at position %ld : %s\n", result - str, result);
    else
        printf("Substring not found\n");

    return 0;
}