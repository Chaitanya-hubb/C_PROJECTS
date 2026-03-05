//C program to print the reverse of given string using length

#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf(" %[^\n]", str);  
    
    int length = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    
    printf("Reverse string: ");
    for(int i = length - 1; i >= 0; i--)
    {
       printf("%c", str[i]);
    }
    printf("\n");


    /* Reverse string by swapping the characters
    for(int i = 0; i < length / 2; i++)
    {

       char temp = str[i];
       str[i] = str[length - 1 - i];
       str[length - 1 - i] = temp;
    }
    printf("Reversed string: %s\n", str);
    */

    return 0;
}

