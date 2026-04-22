//C program to explain pointer to pointer (double pointer)

#include <stdio.h>

int main()
{
   int num = 10;
   int *p = &num;
   int **pp = &p;

   printf("Value of num: %d\n", num);
   printf("Value using pointer p: %d\n", *p);
   printf("Value using double pointer pp: %d\n", **pp);

   return 0;
}