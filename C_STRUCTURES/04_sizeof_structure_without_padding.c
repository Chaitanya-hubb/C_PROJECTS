//C program to find size of structure without padding

#include <stdio.h>

#pragma pack(1)   // disable padding

struct Example
{
    char a;   // 1 byte
    int b;    // 4 bytes
    char c;   // 1 byte
};

#pragma pack()    // reset to default

int main()
{
    struct Example e;

    printf("Size of structure is: %zu bytes\n", sizeof(e));

    return 0;
}