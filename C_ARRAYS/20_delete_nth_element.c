//C program to delete nth element in merged array

#include <stdio.h>

int main()
{
     int size1, size2, n, i; 

     printf("Enter size of an array1: \n");
     scanf("%d", &size1);

     printf("Enter size of an array2: \n");
     scanf("%d", &size2);

     int arr1[size1], arr2[size2], merged[size1 + size2];

     printf("Enter array1 elements: ");
     for(i = 0; i < size1; i++)
     {
         scanf("%d", &arr1[i]);
     }

     printf("Enter array2 elements: ");
     for(i = 0; i < size2; i++)
     {
         scanf("%d", &arr2[i]);
     }

     //merge two arrays
     for(i = 0; i < size1; i++)
     {
        merged[i] = arr1[i];
     }
     for(i = 0; i < size2; i++)
     {
        merged[size1 + i] = arr2[i];
     }

     int size = size1 + size2;

     //Delete nth element 
     printf("Enter position to delete: ");
     scanf("%d", &n);

     if(n >= 1 && n <= size)
     {
         for(i = n - 1; i < size - 1; i++)
         {
              merged[i] = merged[i + 1];
         }
         size--;
     }
     else
     {
         printf("Invalid position\n");
     }
     // Print result
     for(i = 0; i < size; i++)
     {   
        printf("%d ", merged[i]);
     }
     printf("\n");

    return 0;
}
     

     