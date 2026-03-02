//C program to compare two arrays element by element

#include <stdio.h>

int main()
{
   int size, i;

   printf("Enter size of both arrays: ");
   scanf("%d", &size);

   int arr1[size], arr2[size];

   printf("Enter array1 elements: ");
   for(i = 0; i < size; i++)
   {
      scanf("%d", &arr1[i]);
   }

   printf("Enter array2 elements: ");
   for(i = 0; i < size; i++)
   {
      scanf("%d", &arr2[i]);
   }
   int flag = 1;
   //Compare array elements
   for(i = 0; i < size; i++)
   {
      if(arr1[i] != arr2[i])
      {
           flag = 0;
           break;
      }
    }

    if(flag)
       printf("Arrays are equal\n");
    else
       printf("Arrays are NOT equal\n");
    return 0;
}