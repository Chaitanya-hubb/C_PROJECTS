//C program to print array using pointers

#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];     // variable size array
    int *p = arr;

    printf("Enter %d elements: ", n);

    // input
    for(int i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }

    printf("Array elements are: ");

    // output
    for(int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }

    return 0;
}