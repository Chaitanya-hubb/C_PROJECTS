//C program to find second smallest element in an array

#include <stdio.h>
#include <limits.h>

int main()
{
    int num, i, smallest, sec_smallest;

    printf("Enter number of elements: ");
    scanf("%d", &num);

    if(num < 2 || num > 20)
    {
         printf("Invalid Size.");
         return 0;
    }

    int arr[20];

    printf("Enter array elements: ");
    for(i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    smallest = sec_smallest = INT_MAX;

    for(i = 0; i < num; i++)
    {
        if(arr[i] < smallest)
        {
            sec_smallest = smallest;
            smallest = arr[i];
        } 
        else if(arr[i] < sec_smallest && arr[i] != smallest)
        {
            sec_smallest = arr[i];
        }
    }
    if(sec_smallest == INT_MAX)
    {
        printf("No second smallest element.");
    }
    else
    {
        printf("Second smallest in an array: %d", sec_smallest);
    }
    return 0;
}
