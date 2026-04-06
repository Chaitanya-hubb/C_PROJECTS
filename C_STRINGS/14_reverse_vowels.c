//C program to reverse the vowels in a string

#include <stdio.h>

int main()
{
    char str[50];
    int i, j, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline
    for(int k = 0; str[k] != '\0'; k++)
    {
        if(str[k] == '\n')
        {
            str[k] = '\0';
            break;
        }
    }

   
    for(int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    i = 0;
    j = length - 1;

    
    while(i < j)
    {
         //move i forward until vowel
         while(i < j && !(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'))
         {
              i++;
         }
         //move j backward until vowel
         while(i < j && !(str[j] == 'A' || str[j] == 'E' || str[j] == 'I' || str[j] == 'O' || str[j] == 'U' || str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u'))
         {
              j--;
         }
         //swap the vowels
         if( i < j)
         {
              char temp = str[i];
              str[i] = str[j];
              str[j] = temp;
              i++;
              j--;
         }
    }
    printf("String after reversing vowels: %s\n", str);

    return 0;
}