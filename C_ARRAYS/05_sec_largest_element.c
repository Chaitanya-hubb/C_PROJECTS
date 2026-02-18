//C program to find second largest element in given array

#include <stdio.h>

int main()
{
   int size, largest, sec_largest, i;

   //Read size of an array
   printf("Enter size of an array: ");
   scanf("%d", &size);

   if(size < 2)
   {
      printf("Error: Array must contain at least two elements.\n");
      return 0;
   }

   int arr[size];

   //Read elements of an array
   printf("Enter an array elements: ");
   for(i = 0; i < size; i++)
   {
      scanf("%d", &arr[i]);
   }

   //Compare first two elements
    if(arr[0] > arr[1])
    {
        largest = arr[0];
        sec_largest = arr[1];
    }
    else
    {
        largest = arr[1];
        sec_largest = arr[0];
    }

   //checking remaining elements
   for(i = 2; i < size; i++)
   {
      if(arr[i] > largest)
      { 
         sec_largest = largest;
         largest = arr[i];
      }
      else if(arr[i] > sec_largest && arr[i] != largest)
      {
         sec_largest = arr[i];
      }
   }
   if(largest == sec_largest)
   {
      printf("No second largest element\n");
   }
   else
   {
      printf("Second largest element of given array = %d\n", sec_largest);
   }
   return 0;
}
