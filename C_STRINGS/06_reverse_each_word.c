/*C program to reverse each word in a string
  Example Output: Enter a string: Hai Hello
                  iaH olleH
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, start, end;

    printf("Enter a string: ");
    scanf("%[^\n]", str);
 
    while(str[i] != '\0')
    {
        //find start of word
        start = i;
        while(str[i] != ' ' && str[i] != '\0')
        {
             i++;
        }

        end = i - 1;

        //print word in reverse
        for(int j = end; j >= start; j--)
        {   
            printf("%c", str[j]);
        }

        //print space if not end of string
        if(str[i] == ' ')
            printf(" ");

        // move to next word
        if (str[i] != '\0')
            i++;
    }

    printf("\n");
    return 0;
}
            

 
       