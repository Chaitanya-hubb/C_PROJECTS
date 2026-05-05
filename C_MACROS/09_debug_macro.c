// Program to print debug information using macro and conditional compilation

#include <stdio.h>

#define DEBUG

#ifdef DEBUG
   #define DEBUG_PRINT(msg) printf("DEBUG: %s\n", msg)
#else
   #define DEBUG_PRINT(msg)
#endif

int main()
{
   printf("Program Started\n");

   DEBUG_PRINT("Inside main function"); 

   printf("Program Ended\n");

   return 0;
}
   