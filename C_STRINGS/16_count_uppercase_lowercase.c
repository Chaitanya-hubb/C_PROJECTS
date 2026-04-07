//C program to count uppercase and lettercase letters in a given string

#include <stdio.h>

int main()
{
    char str[50];
    int upper = 0, lower = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            upper++;
        } 
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            lower++;
        }
    }
    printf("Total uppercase letters in a given string: %d\n", upper);
    printf("Total lowercase letters in a given string: %d", lower);

    return 0;
}
