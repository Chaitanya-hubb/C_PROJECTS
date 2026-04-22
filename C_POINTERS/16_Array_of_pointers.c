// C program to demonstrate array of pointers

#include <stdio.h>

int main()
{
    int a = 10, b = 20, c = 30;

    int *p[3];  //Array of pointers

    p[0] = &a;
    p[1] = &b;
    p[2] = &c;

    printf("Values using array of pointers:\n");

    for(int i = 0; i < 3; i++)
    {
        printf("%d ", *p[i]);
    }

    return 0;
}