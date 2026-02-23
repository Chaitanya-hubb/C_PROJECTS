// C program to rotate array to the RIGHT by N positions

#include <stdio.h>

int main()
{
    int size, rotations;

    printf("Enter size of array: ");
    scanf("%d", &size);

    if(size <= 0)
    {
        printf("Invalid size.\n");
        return 0;
    }

    int arr[size];

    printf("Enter array elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &rotations);


    rotations = rotations % size;  // handle large rotations

    for(int i = 0; i < rotations; i++)
    {
        int temp = arr[size - 1];  // store last element

        for(int j = size - 1; j > 0; j--)
        {
            arr[j] = arr[j - 1];   // shift right
        }

        arr[0] = temp;  // place last element at first
    }

    printf("Array after right rotation: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}