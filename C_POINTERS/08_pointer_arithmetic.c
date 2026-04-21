// C program to show pointer arithmetic operations

#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;

    printf("Array elements: ");
    for(int i = 0; i < 5; i++)
    {
         printf("%d ", *(p + i));
    }
    printf("\n");
    printf("Pointer Arithmetic Operations:\n");

    printf("Initial: %d\n", *p);   // 10

    // p + 2
    printf("*(p + 2): %d\n", *(p + 2));   // 30

    // p - 1 (only valid if p moved ahead)
    p = arr + 2;   // now at 30
    printf("*(p - 1): %d\n", *(p - 1));   // 20

    // p++
    p = arr;
    printf("p++: %d\n", *p++);   // prints 10, then moves

    // *(p++)
    p = arr;
    printf("*(p++): %d\n", *(p++));   // 10
    printf("After *(p++): %d\n", *p); // 20

    // ++p
    p = arr;
    printf("++p: %d\n", *(++p));   // move first → 20

    // (*p)++ modifies the actual value in the array
    p = arr;
    printf("(*p)++: %d\n", (*p)++);  // prints 10, then value becomes 11
    printf("After (*p)++: %d\n", *p); // 11

    return 0;
}