// C program to check whether a number is even or odd using macro

#include <stdio.h>

#define IS_EVEN(x) ( ((x) % 2) == 0)    //Macro definition

int main()
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if(IS_EVEN(num))
    {
       printf("%d is even", num);
    }
    else
    {
       printf("%d is odd", num);
    }

     return 0;
}