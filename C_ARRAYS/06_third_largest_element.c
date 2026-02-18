//C program to find third largest element of an array

#include <stdio.h>
#include <limits.h>

int main()
{
   int num, i, first, second, third;
   printf("Enter number of elements: ");
   scanf("%d", &num);
   
   if(num < 3)
   {
        printf("ERROR: Give Atleast three numbers.");
        return 0;
   }

   int arr[num];
   printf("Enter array elements: ");
   for(i = 0; i < num; i++)
   {
      scanf("%d", &arr[i]);
   }
   first = second = third = INT_MIN;
   for(i = 0; i < num; i++)
   {
      if(arr[i] > first)
      {
         third = second;
         second = first;
         first = arr[i];
      }
      else if(arr[i] > second && arr[i] != first)
      {
         third = second;
         second = arr[i];
      }
      else if(arr[i] > third && arr[i] != first && arr[i] != second)
      {
          third = arr[i];
      }
   }
   if(third == INT_MIN)
   {
      printf("No third largest element");
   }
   else
   {
     printf("Third largest element: %d", third);
   }
   return 0;
}
         