//C program to find the given string is palindrome or not

#include <stdio.h>

int main()
{
    char str[100];

    int start = 0, end = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    //find length
    while(str[end] != '\0')
    {
        end++;
    }

    end = end - 1;      //last character index

    //palindrome check
    while(start < end)
    {
        if(str[start] != str[end])
        {
             printf("The given string is not palindrome.\n");
             return 0;
        }
        start++;
        end--;
    }
    printf("The given string is palindrome.\n");
    
    return 0;
}