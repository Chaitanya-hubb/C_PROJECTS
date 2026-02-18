//Reverse the given array elements

#include <stdio.h>

int main()
{
    int size, i, j, temp, arr[10];
  
    //Read the size of an array
    printf("Enter the size of an array: ");
    scanf("%d", &size);
  
    //Read the elements of an array
    printf("Enter the elements of an array: ");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    //Print the given elements
    printf("Before reversing the array: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    //Reverse the given elements
    for(i = 0; i < size/2; i++)
    {
         temp = arr[i];
         arr[i] = arr[size - i - 1];
         arr[size - i - 1] = temp;
    }
    
    //Print the array elements after reversing
    printf("\nAfter reversing the array: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
    