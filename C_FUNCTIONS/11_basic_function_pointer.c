//C program to demonstrate basic function pointer in C

#include <stdio.h>

/* Function definition */
void display(void)
{
    printf("Hello, Function Pointer\n");
}

int main()
{
    /* Function pointer declaration */
    void (*fp)(void);

    /* Assign function address */
    fp = display;

    /* Function call using pointer */
    fp();

    return 0;
}