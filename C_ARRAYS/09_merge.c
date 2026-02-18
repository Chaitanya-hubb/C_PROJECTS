//C program to merge two sorted arrays

#include <stdio.h>

int main()
{
    int size1, size2;

    printf("Enter size of first array: ");
    scanf("%d", &size1);
   
    printf("Enter size of second array: ");
    scanf("%d", &size2);

    int arr1[size1], arr2[size2], arr3[size1 + size2];

    printf("Enter elements of first array: ");
    for(int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of second array: ");
    for(int j = 0; j < size2; j++)
    {
        scanf("%d", &arr2[j]);
    }

    int i = 0, j = 0, k = 0;

    //Compare each element
    while(i < size1 && j < size2)
    {
        if(arr1[i] < arr2[j])
        {
             arr3[k] = arr1[i];
             i++;
        }
        else 
        {  
             arr3[k] = arr2[j];
             j++;
        }
        k++;
     }

     //Copying remaining elements from array1 and store in array3
     while(i < size1)
     {
        arr3[k++] = arr1[i++];
     }
 
     //Copying remaining elements from array2 and store in array3
     while(j < size2)
     {
        arr3[k++] = arr2[j++];
     }
     
     printf("Merged sorted array: ");
     for(i = 0; i < size1 + size2; i++)
     {
         printf("%d ", arr3[i]);
     }
     return 0;
}























