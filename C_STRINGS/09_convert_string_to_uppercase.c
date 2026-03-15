//C program to convert given string into uppercase

#include <stdio.h>

int main()
{
   char str[100];
   int i = 0;
    
   printf("Enter a string: ");
   scanf("%[^\n]", str);
   
  // traverse the string
   while(str[i] != '\0')
   {
       if(str[i] >= 'a' && str[i] <= 'z')   // check if character is lowercase
       {
            str[i] = str[i] - 32;          // convert to uppercase

       }
       i++;
   }
   printf("The uppercase string is: %s\n", str);

   return 0;
}