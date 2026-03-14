//C program to convert all characters of string to lowercase

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter string: ");
    scanf("%[^\n]", str);

    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    printf("Lowercase string: %s\n", str);
    
    return 0;
}