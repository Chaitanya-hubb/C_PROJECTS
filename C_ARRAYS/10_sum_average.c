//C program to find sum and average of array elements

#include <stdio.h>

int main()
{
    int size, sum = 0;
    float average;

    printf("Enter size of an array: ");
    scanf("%d", &size);

    if(size <= 0 || size > 50)
    {
        printf("Invalid Size.");
        return 0;
    }

    int arr[50];

   
    printf("Enter array elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < size; i++)
    {
       sum = sum + arr[i];
    }

    average = (float)sum / size;

    printf("Sum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", average);

    return 0;
}