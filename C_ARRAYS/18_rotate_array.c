//C program to rotate array by N positions(left rotation)

#include <stdio.h>

int main()
{
    int size, rotations;

    printf("Enter size of an array: ");
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

    //adjust rotations if it is larger than the array size 
    rotations = rotations % size;

    //Perform rotations one by one
    for(int i = 0; i < rotations; i++)
    {
        //Store the first elements temporarily
        int temp = arr[0];

        //shift all elements to the left by one position
        for(int j = 0; j < size - 1; j++)
        {
            arr[j] = arr[j + 1];
        } 
        //place the first element at the end of array
        arr[size - 1] = temp;
    }
    printf("Array after rotating: ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}