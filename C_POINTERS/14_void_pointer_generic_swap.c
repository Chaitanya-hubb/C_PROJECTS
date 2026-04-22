// C program for generic swap using void pointer 

#include <stdio.h>

void swap(void *a, void *b, int size)
{
    char *p = (char *)a;
    char *q = (char *)b;
    char temp;

    for(int i = 0; i < size; i++)
    {
        temp = *(p + i);
        *(p + i) = *(q + i);
        *(q + i) = temp;
    }
}
int main()
{
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y, sizeof(int));

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}