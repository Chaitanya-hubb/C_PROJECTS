//C program to print the values in sorted order without modifying or copying array

#include <stdio.h>
#include <limits.h>

int main()
{
     int size, i;
     printf("Enter size: ");
     scanf("%d", &size);

     int arr[size];
     printf("Enter array elements: ");
     for(i = 0; i < size; i++)
     {
        scanf("%d", &arr[i]);
     }
     

     int printed = 0;
     int last = INT_MIN;

     printf("Sorted order: ");
     while(printed < size)
     {
         int min = INT_MAX;

         for(i = 0; i < size; i++)
         {
             if(arr[i] > last && arr[i] < min)
             { 
                 min = arr[i];
             }
         }
         printf("%d ", min);
         last = min;
         printed++;
     }
     return 0;
}