// C program to traverse array using pointer increment

#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    printf("Array elements using pointer increment:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", *p);
        p++;   // move pointer to next element
    }

    return 0;
}