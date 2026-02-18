//C program to print duplicate elements and remove duplicates from array

#include <stdio.h>

int main()
{
    int size, i, j, k;
    
    printf("Enter size of an array: ");
    scanf("%d", &size);
  
    if(size <= 0 || size > 50)
    {
       printf("Invalid size.\n");
       return 0;
    }
    
    int arr[50];
    printf("Enter array elements: ");
    for(i = 0; i < size; i++)
    {
       scanf("%d", &arr[i]);
    }
    
    int found = 0;  //flag

   //Print the duplicate elements
    printf("Duplicate elements: ");
    for(i = 0; i < size; i++)
    {
        for(j = i + 1; j< size; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                found = 1;
                break;
            }
        }
    }

    // If no duplicates found
    if(found == 0)
    {
        printf("No duplicate elements found");
    }
    
    //Remove duplicate elements
    for(i = 0; i < size; i++)
    {
        for(j = i + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                // Shift elements to the left
                for(k = j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                size--;
                j--;
            }
        }
    }
    printf("\nArray after removing duplicates: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}




         