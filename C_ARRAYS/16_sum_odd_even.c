//C program to print sum of odd elements and even elements from array

#include <stdio.h>

int main()
{
     int num, i, sum_even = 0, sum_odd = 0;
     
     printf("Enter number of elements: ");
     scanf("%d", &num);

     int arr[num];

     printf("Enter array elements: ");
     for(i = 0; i < num; i++)
     {
          scanf("%d", &arr[i]);
     }

     for(i = 0; i < num; i++)
     {
         if(arr[i] % 2 == 0)
         {
             sum_even += arr[i];
         }
         else 
         {
             sum_odd += arr[i];
         }
     }
     printf("Sum of even numbers: %d\n", sum_even);
     printf("Sum of odd numbers: %d\n", sum_odd);
    
     return 0;
}