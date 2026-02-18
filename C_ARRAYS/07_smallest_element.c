//C program find smallest element in an array

#include <stdio.h>

int main()
{
    int num, i, smallest;

    printf("Enter number of elements: ");
    scanf("%d", &num);

    if(num <= 0 || num > 20)
    {
        printf("Invalid size");
        return 0;
    }

    int arr[20];

    printf("Enter array elements: ");
    for(i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    smallest = arr[0];

    for(i = 1; i < num; i++)
    {
        if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    printf("The smallest element in given array: %d\n", smallest);
    return 0;
}