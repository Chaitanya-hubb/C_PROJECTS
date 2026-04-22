// Dynamic Memory Allocation using malloc

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    //allocate memory dynamically
    p = (int *)malloc(n * sizeof(int));

    if(p == NULL)
    {
       printf("Memory allocation failed.\n");
       return 1;
    }

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }
  
    printf("Array elements: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }

    free(p);   // release memory

    return 0;
}
