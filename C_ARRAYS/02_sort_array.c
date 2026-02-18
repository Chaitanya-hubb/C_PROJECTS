//Sort the given array elements in ascending order

#include <stdio.h>

int main()
{
    int size, arr[10], temp;
    
    //Read the size of an array
    printf("Enter the size of an array: ");
    scanf("%d", &size);

    //Read the elements of an array
    printf("Enter the array elements: ");
    for(int i = 0; i < size; i++)
    {
         scanf("%d", &arr[i]);
    }

    //print the given array elements
     printf("Before sorting the array: ");
     for(int i = 0; i < size; i++)
     {
        printf("%d ", arr[i]);
     }

    //Sort the given array using bubble sort
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        { 
             if(arr[j] > arr[j + 1])
             {
                  temp = arr[j];
                  arr[j] = arr[j + 1];
                  arr[j + 1] = temp;
             }
        }
     }
     
     //print the sorted array
     printf("\nAfter sorting the array: ");
     for(int i = 0; i < size; i++)
     {
        printf("%d ", arr[i]);
     }
     return 0;
}
