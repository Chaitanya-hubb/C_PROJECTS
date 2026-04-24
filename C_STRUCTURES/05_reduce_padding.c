// Reducing structure padding by reordering members

#include <stdio.h>

// Original structure (more padding)
struct Original
{
    char a;   // 1 byte
    int b;    // 4 bytes
    char c;   // 1 byte
};

// Optimized structure (reduced padding)
struct Optimized
{
    int b;    // 4 bytes
    char a;   // 1 byte
    char c;   // 1 byte
};

int main()
{
    printf("Size of Original structure  : %zu bytes\n", sizeof(struct Original));
    printf("Size of Optimized structure : %zu bytes\n", sizeof(struct Optimized));

    return 0;
}