//C program to move all zeroes to the end of given array

#include <stdio.h>

int main()
{
     int num, i, j = 0, count_zero = 0;

     printf("Enter number of elements: ");
     scanf("%d", &num);

     int arr[num];

     printf("Enter array elements: ");
     for(i = 0; i < num; i++)
     {
         scanf("%d", &arr[i]);
     }

     //Count zeroes
     for(i = 0; i < num; i++)
     {
         if(arr[i] == 0)
         {
              count_zero++;
         }
     }
     if(count_zero == 0)
     {
         printf("No zero elements found.\n");
         return 0;
     }

     //Move non-zero elements forward
     for(i = 0; i < num; i++)
     {
         if(arr[i] != 0)
         {
             arr[j++] = arr[i];
         }
     }

     //Fill remaining with zero
     while(j < num)
     {
         arr[j++] = 0;
     }

     printf("Array after moving zeros: ");   
     for(i = 0; i < num; i++)
     {
         printf("%d ", arr[i]);
     }
     return 0;
}  