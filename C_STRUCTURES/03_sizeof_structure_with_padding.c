//C program to find size of structure with padding

#include <stdio.h>

struct Example 
{
   char a;
   int b;
   char c;
};

int main()
{
    struct Example e;

    printf("Size of structure is: %zu bytes\n", sizeof(e));

    return 0;
}