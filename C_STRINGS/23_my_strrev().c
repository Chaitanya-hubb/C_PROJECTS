//C program to implement strrev() function

#include <stdio.h>

char* my_strrev(char *str)
{
    int i = 0, j;
    char temp;

    // Find length
    while(str[i] != '\0')
    {
       i++;
    }
    j = i - 1;   // last index

    for(i = 0; i < j; i++, j--)
    {
       temp = str[i];
       str[i] = str[j];
       str[j] = temp;
    }
    return str;
}
int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf(" %99[^\n]", str);

    printf("String after reversing: %s\n", my_strrev(str));

    return 0;
}