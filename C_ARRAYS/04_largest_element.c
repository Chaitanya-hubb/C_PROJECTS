//C program to find largest element in an array

#include <stdio.h>
int main()
{
   int size, i;

   //Read an array size from user
   printf("Enter size of an array: ");
   scanf("%d", &size);

   if(size <= 0)
   {
      printf("Invalid Size.");
      return 0;
   }

   int arr[size];
   //Read elements of an array from user
   printf("Enter an array elements: ");
   for(i = 0; i < size; i++)
   {
      scanf("%d", &arr[i]);
   }

   int largest = arr[0];

   //Find largest element
   for(i = 1; i < size; i++)
   {
      if(arr[i] > largest)
      {
         largest = arr[i];
      }
   }
   printf("Largest element in given array = %d\n", largest);
   return 0;
}