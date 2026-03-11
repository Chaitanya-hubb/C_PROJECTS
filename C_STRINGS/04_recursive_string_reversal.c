//C program to reverse the string using recursion

#include <stdio.h>

void reverseString(char str[])
{
    if(*str == '\0')             // Base case: end of string
      return;

    reverseString(str + 1);    // Recursive call for next character
    printf("%c", *str);       // Print current character after recursion
}
int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    reverseString(str);
    printf("\n");

    return 0;
}