// Program to demonstrate conditional compilation using #ifdef and #ifndef

#include <stdio.h>

#define DEBUG

int main() 
{
   #ifdef DEBUG
     printf("Debug mode is ON\n");
   #endif

   #ifndef DEBUG
     printf("Debug mode is OFF\n");
   #endif

   return 0;
}