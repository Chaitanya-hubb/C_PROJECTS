//C program to remove duplicates from the given string

#include <stdio.h>

int main()
{
    char str[50];

    printf("Enter a string: ");
    scanf("%49[^\n]", str);

    // Remove duplicate characters
    for(int i = 0; str[i] != '\0'; i++)
    {
        for(int j = i + 1; str[j] != '\0'; j++)
        {
             if(str[i] == str[j])
             {
                 // Shift characters to left
                 for(int k = j; str[k] != '\0'; k++)
                 {
                      str[k] = str[k + 1];
                 }
                 j--;  //recheck same position
             }
         }
     }
     printf("String after removing duplicates: %s", str);

     return 0;
}

    
