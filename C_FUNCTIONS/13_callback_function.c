// Program to demonstrate callback function using function pointer

#include <stdio.h>

/* Function definition */
void display(void)
{
    printf("Callback function executed\n");
}

/* Function taking another function as argument */
void callback(void (*fp)(void))
{
    fp();   // calling function using pointer
}

int main()
{
    /* Passing function as argument */
    callback(display);

    return 0;
}