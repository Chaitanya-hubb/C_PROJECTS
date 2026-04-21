// C program to reverse the array elements using pointers

#include <stdio.h>

int main()
{
   int n;

   printf("Enter number of elements: ");
   scanf("%d", &n);

   int arr[n];
   int *start = arr;
   int *end = arr + n - 1;
   int temp;

   printf("Enter array elements: ");
   for(int i = 0; i < n; i++)
   {
       scanf("%d", (arr + i));
   }
   
   //reverse the array
   while(start < end)
   {
       temp = *start;
       *start = *end;
       *end = temp;
       
       start++;
       end--;
     
   }
   
   printf("Reversed array: ");
   for(int i = 0; i < n; i++)
   { 
      printf("%d ", *(arr + i));
   }
   return 0;
}