//C programm to show pointer to array

#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int (*p)[5] = &arr;
    
    printf("Using pointer to array: ");

    for(int i = 0; i < 5; i++)
    {
       printf("%d ", (*p)[i]);
    }

    return 0;
}