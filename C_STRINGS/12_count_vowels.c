//C program to count vowels in a string

#include <stdio.h>

int main()
{
    char str[20];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int count = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
             count++;
        }
    }
    printf("Number of vowels: %d\n", count);
    return 0;
}