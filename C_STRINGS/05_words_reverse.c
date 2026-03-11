/*C program to reverse the words in a string
  Example Output: Enter a string: I love C Programming
                  Programming C Love I
*/

#include <stdio.h>

int main()
{
     char str[100];
     int i, j, end = 0;

     printf("Enter a string: ");
     scanf("%[^\n]", str);

    //find length
    while(str[end] != '\0')
        end++;

    for(i = end - 1; i >= 0; i --)
    {
        if(str[i] == ' ')
        {
            for(j = i + 1; j < end; j++)
               printf("%c", str[j]);

            printf(" ");
            end = i;
        }
    }
    // print first word
    for(i = 0; i < end; i++)
        printf("%c", str[i]);

    printf("\n");
    return 0;
}
          