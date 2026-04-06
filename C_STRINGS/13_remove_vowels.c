//C program to remove vowels from the given string

#include <stdio.h>

int main()
{
    char str[20];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int j = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(!(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'))
        {
             str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("String after removing vowels: %s", str);
    return 0;
}