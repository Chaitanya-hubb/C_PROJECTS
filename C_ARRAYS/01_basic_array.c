//Basic array program in C

#include <stdio.h>

int main()
{
    int num, arr[10];

    //Read the size of an array from user
    printf("Enter the size of an array elements: ");
    scanf("%d", &num);

    //Read the array elements from an user
    printf("Enter the array elements: ");
    for(int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    //Print an array elements
    printf("The given array elements are: ");
    for(int i = 0; i < num; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}