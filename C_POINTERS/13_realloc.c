// C program to resize array using realloc

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, new_n;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));

    if(p == NULL)
    {
        printf("Memory allocation failed.");
        return 1;
    }

    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
    }

    // resize array
    printf("Enter new size: ");
    scanf("%d", &new_n);

    int *temp;
    temp = (int *)realloc(p, new_n * sizeof(int));

    if(temp == NULL)
    {
        printf("Reallocation failed\n");
        free(p);   // free old memory
        return 1;
    }
    p = temp;

    if(new_n > n)
    {
        printf("Enter additional elements: ");
        for(int i = n; i < new_n; i++)
        {
            scanf("%d", (p + i));
        }
    }
   
    printf("Updated array:\n");
    for(int i = 0; i < new_n; i++)
    {
        printf("%d ", *(p + i));
    }

    free(p);

    return 0;
}