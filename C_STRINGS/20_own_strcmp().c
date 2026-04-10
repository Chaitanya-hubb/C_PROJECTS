// C program to implement strcmp() function

#include <stdio.h>

int my_strcmp(const char *str1, const char *str2)
{
     while(*str1 != '\0' && *str2 != '\0')
     {
         if(*str1 != *str2)
         {
            return *str1 - *str2;
         }
         str1++;
         str2++;
     }
     return *str1 - *str2;
}

int main()
{
    char str1[50], str2[50];

    printf("Enter first string: ");
    scanf("%49[^\n]", str1);

    getchar(); // to consume newline

    printf("Enter second string: ");
    scanf("%49[^\n]", str2);

    int result = my_strcmp(str1, str2);

    if(result == 0)
        printf("Strings are equal\n");
    else if(result < 0)
        printf("String1 is smaller than String2\n");
    else
        printf("String1 is greater than String2\n");

    return 0;
}